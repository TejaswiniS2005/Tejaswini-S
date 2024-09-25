#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
#include<sys/types.h>
int main()
{

 pid_t p=fork();
 if(p<0){
         printf("fork fail");
         exit(1);
     }
 else if(p==0){
         printf("I am a child process  with id:%d",getpid());
         printf("My parent id is %d",getppid());
    }
 else{
              printf("I am a parent process with id:%d",getpid());
              printf("My child process is %d",p);
        }
}

