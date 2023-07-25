
///////////////////////////////////////////////////////////////////////////////////////
//
//
//          Author        :     Atharv Lokhande
//          Application   :     Used to open the any file.
//          Input         :     File Name Which we have to open.
//          Output        :     Open the Given file.
//          Date          :     21st july 2023
//
//
//
/////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement :
//          write a Program which accept file name from user and open that file.
//
////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<fcntl.h>

int main(int argc, char *argv[])
{
    char Fname[20];
    int fd = 0;

    printf("Enter the file name that you want to open : \n");
    scanf("%s",Fname);

    fd = open(Fname, O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return -1;
    }
    else
    {
        printf("File is succesfully opened with FD %d \n",fd);
    }

    return 0;
}
