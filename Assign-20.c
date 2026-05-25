#include<stdio.h>
#include<stdlib.h>
// 01
/*int main()
{
         int marks;
         printf("Enter a choice");
         scanf("%d",&marks);
         switch(marks)
         {
                  case 90 ... 100:
                  printf("Grade A");
                  break;
                  case 80 ... 89:
                  printf("Grade B");
                  break ;
                  case 70 ... 79:
                  printf("Grade C");
                  break;
                  case 60 ... 69:
                  printf("Grade D");
                  break;
                  case 50 ... 59:
                  printf("Grade E");
                  break;
                  case 40 ...49:
                  printf("Grade F");
          default :
          printf("inviled marks");

         }
         return 0;
}
// 02
int main()
{
        int ch,n,i,f=1,s=0;
        while(1)
        {
                printf("\n1.factoral of number");
                printf("\n2.check even and odd number");
                printf("\n3.Area of circle");
                printf("\n4.Sum of first n natural number");
                printf("\n5.exit");
                printf("\n Enter a your choice");
                scanf("%d",&ch);
                switch(ch)
                {
                        case 1:
                   printf("Enter a number");
                   scanf("%d",&n);
                   while(n)
                   {
                        f = f*n;
                        n--;
                   }
                   printf("\n factoral of number %d",f);
                   break;
                   case 2:
                   printf("Enter a number");
                   scanf("%d",&n);
                   if(n%2==0)
                   printf("\n even number");
                   else
                   printf("\n odd number");
                   break;
                   case 3:
                   printf("Enter a raduis");
                   scanf("%d",&n);
                   f = 3.14*n*n;
                   printf(" \n area of circle %lf",f);
                   break ;
                   case 4:
                   printf("Enter a number");
                   scanf("%d",&n);
                   while(n)
                   {
                      s = s+n;
                      n--;
                   }
                   printf("\n Sum of number %d",s);
                   break;
                   case 5:
                   exit(0);
                   default :
                   printf("inviled choice");
                }
        }
        return 0;
}
// 03
int main()
{
        char ch;
        printf("Enter a charecter:");
        scanf("%c",&ch);
        switch(ch)
        {
                case  'a' ... 'z':
                printf("lower case");
                break;
                case 'A' ... 'Z':
                printf("upper case");
                break;
                default :
                printf("other special charecter");
        }
        return 0;
}
// 04
int main()
{
        char ch;
        printf("Enter a charecter");
        scanf("%c",&ch);
        switch(ch)
        {
                case 'a' : case 'e': case 'i': case 'o' : case 'u':
                case 'A' : case 'E': case 'I': case 'O' : case 'U':
                printf("vowel");
                break ;
                case 0 ... 64:
                case 91 ... 96:
                case 123 ... 255:
                printf("other charecter");
                break;
                default:
                printf("consonant");

        }
        return 0;
}*/
// 05
int main()
{
        int n,ch,a,b,c,l,s;
        while(1)
        {
                printf("\n1.Lcm of two number");
                printf("\n2.Sum of digite");
                printf("\n3.volum of cubiod");
                printf("\n4.check prime or not");
                printf("\n4.Exit");
                printf("\n Enter a your choice");
                scanf("%d",&ch);
                switch(ch)
                {
                  case 1:
                  printf("\n enter two number");
                  scanf("%d%d",&a,&b);
                  for(l = a>b? a:b ;l<=a*b;l++)
                  if(l%a==0 && l%b==0)
                  break;
                  printf("\n Lcm of two number",l);
                  break;
                  case 2:
                  printf("\n Enter a number");
                  scanf("%d",&n);
                  for(s=0,n;n/10;)
                  s = s+n%10;
                  printf("sum of digit %d",s);
                  break;
                  case 3:
                  printf("Enter a length breadh and hight");
                  scanf("%d%d%d",&a,&b,&c);
                  printf("volum of cobiod %d",a*b*c);
                  break;
                  case 4:
                  printf("Enter a number:");
                  scanf("%d",&n);
                  for(a=2;a<n;a++)
                  if(n%a==0)
                  break;
                  if(a==n)
                  printf("prime");
                  else
                  printf("not prime");
                  break;
                  case 5:
                  exit(0);
                }
        }
        return 0;
}
