#include<stdio.h>
#include<unistd.h>
void main()
{ 
 char *cmnd="ls";
 char *arg_list[]={"ls","-l",NULL};
 printf("Before execvp()\n");
 printf("Creating another process using fork()\n");
 pid_t p=fork();
 int status=0;
 if(p==0)
{ printf("Child process\n");
  status=execvp(cmnd,arg_list);
  if(status==-1)
 {
   printf("Incorrect termination\n");

}
}
 else
{printf("Parent process\n");
 printf("Status:%d\n",status);
 printf("Now this part will get executed\n");
 
}
}
