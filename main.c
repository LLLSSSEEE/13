//
// Week 13
// practice 01 
//
// Created by Sieun Lee on 2023/11/30
//

#include <stdio.h>
#include <stdlib.h>

//���� ����
struct student {
       int ID ;        //�й� 
       char name[100]; //�̸�
       float grade;    //����
}; //����ü Ʋ �ϼ� 
        
int main(int argc, char *argv[])
{         
  //instance ���� (���� ���� ����)
  struct student s1 = {1914021, "sIEUN LEE", 4.2 }; //���� ���ϴ� ������ �ʱ�ȭ. �޸��� ����.
  
  //�ٸ� �� ���� 
  s1.ID = 1914022;
  s1.name[0] = 'S';
  s1.grade = 4.3;
  
  //��� 
  printf("ID : %i\n", s1.ID);
  printf("name : %s\n", s1.name);
  printf("grade : %f\n", s1.grade);
  
  strcpy(s1.name, "Juyeop");
  printf("name2 : %s\n"); 
   
  system("PAUSE");	
  return 0;
}
