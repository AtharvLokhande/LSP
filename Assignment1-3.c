//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement :
//          write a Program which accept file name and mode from user and that program check
//          whether our process can access that file in accpeted  mode or not.
//////////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////
//          Author        :     Atharv Lokhande
//          Application   :     Used to open the any file in specified mode according to user.
//          Input         :     1.File Name Which we have to open.
//                              2.File mode in which we have open file.
//          Output        :     Open the Given file in given mode
//          Date          :     25/07/2023
/////////////////////////////////////////////////////

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main(int argc, char *argv[])
{
    int fd = 0;
    int Mode = 0;

    
    if(argc != 3)
    {
        printf("Invalid number of arguments\n");
        return -1;
    }

    if(strcmp(argv[2],"Read") == 0)
    {
        Mode = O_RDONLY;
    }
    else if(strcmp(argv[2],"Write") == 0)
    {
        Mode = O_WRONLY;
    }
    else
    {
        Mode = O_RDONLY;
    }

    fd = open(argv[1], Mode);
    if(fd == -1)
    {
        printf("File is Fail to open this mode\n");
        return -1;
    }
    else
    {
        printf("File is succesfully opened with fd : %d\n",fd);
    }
    close(fd);

    return 0;
}
