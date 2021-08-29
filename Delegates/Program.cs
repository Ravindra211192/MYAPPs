using System;

namespace Delegates
{
    class Program
    {
        public delegate string GetTextDelegate(string aname);
        public delegate double GetMultipleDelegate(double aFirstNr, double aSecondNr);
        static void Main(string[] args)
        {   
            //Anonymous(Unknown) function
            GetTextDelegate agetTextDelgate = delegate (string aname)
            {
                return "Hello, " + aname + "Chand";
            };
            //expression lambda
            GetTextDelegate agetDkDelegate = (string aname) => { return "Hello" +aname; };
            //body lambda
            GetTextDelegate agetTestLambdaBody = (string aname) => 
            { 
                Console.WriteLine("I am inside the body lambda");
                return "Bye Lambda" + aname;
            };
            Console.WriteLine(agetTextDelgate("Ravindra "));
            Console.WriteLine(agetDkDelegate(" DK!"));
            Console.WriteLine(agetTestLambdaBody("Body lambda test is done!"));

            GetMultipleDelegate aGetMultipleDelegate = (aFirstNr, aSecondNr) => aFirstNr * aSecondNr;
            DisplayMultipleDelegate(aGetMultipleDelegate);

            GetMultipleDelegate aGetAdditionDelegate = (aFirstN, aSecondN) => aFirstN + aSecondN;
            DisplayMultipleDelegate(aGetAdditionDelegate);

            var file = new File() { Titel = "File 1" };
            var aDownloadHelper = new DownloadHelper(); //Publisher
           
            var aUnpackService = new UnpackService(); //Receiver
            //Here we don't call method aUnpackService() but just adds the pointer to it
            aDownloadHelper.FileDownloaded += aUnpackService.OnFileDownloaded;

            var aNotificationService = new NotificationService();
            aDownloadHelper.FileDownloaded += aNotificationService.OnFileDownloaded;

            aDownloadHelper.Download(file);

        }

        static void DisplayMultipleDelegate(GetMultipleDelegate aGetMultipleDelegate)
        {
            Console.WriteLine(aGetMultipleDelegate(12.0,3.0));
        }
    }

    public class UnpackService
    {
        public void OnFileDownloaded(object source, FileEventArgs e)
        {
            Console.WriteLine("UnpackerService: Unpacking the file ....." + e.File.Titel);
        }
    }

    public class NotificationService
    {
        public void OnFileDownloaded(object source, FileEventArgs a)
        {
            Console.WriteLine("NotificationService: Receiving the notifications ....."+a.File.Titel);
        }
    }
}
