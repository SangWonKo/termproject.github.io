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
   printf("���� ��ȸ : %d��\n",count);
   printf("���ڸ� �Է����ּ���. (1~ 100����) : ");
   
   fflush(stdin); 

   if(scanf("%d",&user)==0)
   {
    printf("���ڸ� �Է��ϼž��մϴ�! (1~ 100����)\n");
    continue;
   }
   
   
   if(com == user) 
   {
    printf("�����Դϴ�. ~(^ ^~)\n");
    break;
   }
   else if((user >100)||(user<1))
   {
    printf(" 1~ 100���� ���ڸ� �Է����ּ���.\n");
    continue;
   }
   else
   {
    printf("Ʋ�Ƚ��ϴ�. (��_��)\n");
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
    printf("��ȸ�� ��� ����ϼ̽��ϴ�. GameOver..(��_��)\n");
    printf("����: %d\n",com);
   }
  }
  
  printf("�Ѱ��� ��? (y/n)\n");
  fflush(stdin);
  scanf("%c",&retry);
  
  if(retry == 'y')  
  {
   count = 6;
  }
  else if(retry == 'n')  
  {
   printf("�����մϴ�.\n");
   break;
  }
  else  
  {
   printf("y(yes)�� n(no)�� �ϳ��� �Է��ϼ���.\n");
  }
  system("pause"); 
  system("cls");  
 }
}

 




