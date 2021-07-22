/*
thic455 v1.0.0
author:kuailekai
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#define F_PATH "d:\\thic455\\README.txt"

int main(int argc, char *argv[])
{
    if(argc<2)
    {
        printf("Cannot found this command.User \"help\" to get help.");
        return 0;
    }
    if(strcmp(argv[1],"help")==0)
   {
        printf("======HELP LIST======\n");
        printf("start   | begin to run\n");
        printf("end     | the end\n");
        printf("Important: please create \"thic455\" folder on disk D before using the \"start\" command");
        printf("Need another help?Read thic455 Chinese docs.https://github.com/kuailekai/thic455");
        return 0;
   }
    else if(strcmp(argv[1],"start")==0)
   {
        Sleep(3000);
        FILE*fp=NULL; 
        fp=fopen(F_PATH,"w");  
        if(NULL==fp) return -1;  
        fprintf(fp,"WELCOME!\n"); 
        fprintf(fp,"author:kuailekai\n"); 
        fprintf(fp,"\n"); 
        fclose(fp);
        fp=NULL;  
        return 0;
   }
    else if(strcmp(argv[1],"end")==0)
    {
        Sleep(3000);
        remove("d:\\thic455\\README.txt");
        printf("=======END=======");
        return 0;
    }
    else
    {
        printf("Cannot found this command.User \"help\" to get help.");
    }
    
    return 0;
}


