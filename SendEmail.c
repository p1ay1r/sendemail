#include <stdio.h>
#include <windows.h>
#include "Mail.h"
int main()
{
  char S_A[100];
  char PASS[100];
  char G_A[100];
  char MSG[1000];
  char SJT[1000];
  FILE *Send_account;
  FILE *password;
  FILE *get_account;
  FILE *Subject;
  FILE *Message;
  Message = fopen ("message.txt","w");
  Send_account = fopen ("send_account.txt","w");
  password = fopen ("password.txt","w");
  get_account = fopen ("get_account.txt","w");
  Subject = fopen ("Subject.txt","w");
  printf("Enter Send_account:");
  scanf("%s", &S_A);
  printf("Enter password:");
  scanf("%s", &PASS);
  printf("Enter get_account:");
  scanf("%s", &G_A);
  printf("Enter Subject:");
  scanf("%s", &SJT);
  printf("Enter message:");
  scanf("%s", &MSG);
  if (Send_account!=NULL && password!=NULL && get_account!=NULL && Message!=NULL && Subject!=NULL)
  {
    fprintf(Send_account,S_A);
    fclose (Send_account);
    fprintf(password,PASS);
    fclose (password);
    fprintf(get_account,G_A);
    fclose (get_account);
    fprintf(Subject,SJT);
    fclose (Subject);
    fprintf(Message,MSG);
    fclose (Message);
  }
  SendMail(0);
  system("del Subject.txt");
  system("del send_account.txt");
  system("del password.txt");
  system("del message.txt");
  system("del get_account.txt");
}
