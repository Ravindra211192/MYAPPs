/*Write your won logfile in c.*/
#include <stdio.h>
#include <stdlib.h>  //system call
#include <time.h>   // time calls

int main(int args, char **argv)
{
    FILE *fp= fopen("logfile.txt", "w"); //("c:\\temp\\logfile.txt")
    
    char buff[20];
    struct tm* sTM;

    for(int i=0; i<5; i++){
      time_t now = time(0);
      sTM = gmtime(&now);  
      strftime(buff, sizeof(buff), "%Y-%m-%d %H:%M:%S", sTM);
      fprintf(fp, "%s %s \n", buff,__FILE__);
      sleep(2);
      }
    

    fclose(fp);
return 0;
}
