using System;
using System.Collections.Generic;

namespace IEnumerableAndEnumeratorDemo
{
    class Program
    {
        static void Main(string[] args)
        {
            IEnumerable<int> Lunknown;
            Lunknown = GetCollection(1);
            foreach(int alcollect in Lunknown )
            {
                Console.WriteLine("Value : {0}", alcollect);
            }

        }

        static IEnumerable<int> GetCollection(int option)
        {
            List<int> lnumberlist = new List<int>() { 1, 2, 3, 4, 5, 6 };

            Queue<int> lNumbersQueue = new Queue<int>();
            lNumbersQueue.Enqueue(7);
            lNumbersQueue.Enqueue(8);
            lNumbersQueue.Enqueue(9);

            if (option == 1)
            {
                return lnumberlist;
            }
            else if (option == 2)
            {
                return lNumbersQueue;
            }
            else
            {
                return null;
            }
        }
    }
}
