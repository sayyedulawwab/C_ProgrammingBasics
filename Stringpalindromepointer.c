#include<stdio.h>
#include<conio.h>
int main()
{
 char str[30];
 char *p,*t;
 printf("Enter any string : ");
 gets(str);
 for(p=str ; *p!=NULL ; p++);
  for(t=str, p-- ; p>=t;)
  {
    if(*p==*t)
    {
        p--;
        t++;
    }
    else
        break;
  }
  if(t>p)
       printf("\nString is palindrome");
  else
       printf("\nString is Not palindrome");
  getch();
  return 0;
}
