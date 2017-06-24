#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void updown()
{
 int com = 0;
 int user = 0;
 int count = 6; 
 char retry = 0;  
 
 while(1) 
 {
  srand(time(0)); 
  
  com = rand()%100+1;  
  
  printf("==============UP & DOWN==============\n");
  
  while(count)
  {
   printf("남은 기회 : %d번\n",count);
   printf("숫자를 입력해주세요. (1~ 100사이) : ");
   
   fflush(stdin); 

   if(scanf("%d",&user)==0)
   {
    printf("숫자를 입력하셔야합니다! (1~ 100사이)\n");
    continue;
   }
   
   
   if(com == user) 
   {
    printf("정답입니다. ~(^ ^~)\n");
    break;
   }
   else if((user >100)||(user<1))
   {
    printf(" 1~ 100사이 숫자를 입력해주세요.\n");
    continue;
   }
   else
   {
    printf("틀렸습니다. (ㅠ_ㅠ)\n");
    count--;
    if(com < user)
    {
     printf("DOWN!! DOWN!!\n");
    }
    else  
    {
     printf("UP!! UP!!\n");
    }
   }
   
   if(count == 0)
   {
    printf("기회를 모두 사용하셨습니다. GameOver..(ㅠ_ㅠ)\n");
    printf("정답: %d\n",com);
   }
  }
  
  printf("한게임 더? (y/n)\n");
  fflush(stdin);
  scanf("%c",&retry);
  
  if(retry == 'y')  
  {
   count = 6;
  }
  else if(retry == 'n')  
  {
   printf("종료합니다.\n");
   break;
  }
  else  
  {
   printf("y(yes)나 n(no)중 하나를 입력하세요.\n");
  }
  system("pause"); 
  system("cls");  
 }
}

 




