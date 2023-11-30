//
// Week 13
// practice 01 
//
// Created by Sieun Lee on 2023/11/30
//

#include <stdio.h>
#include <stdlib.h>

//형식 선언
struct student {
       int ID ;        //학번 
       char name[100]; //이름
       float grade;    //학점
}; //구조체 틀 완성 
        
int main(int argc, char *argv[])
{         
  //instance 선언 (와플 찍어내는 역할)
  struct student s1 = {1914021, "sIEUN LEE", 4.2 }; //각각 원하는 값으로 초기화. 콤마로 구분.
  
  //다른 값 변경 
  s1.ID = 1914022;
  s1.name[0] = 'S';
  s1.grade = 4.3;
  
  //출력 
  printf("ID : %i\n", s1.ID);
  printf("name : %s\n", s1.name);
  printf("grade : %f\n", s1.grade);
  
  strcpy(s1.name, "Juyeop");
  printf("name2 : %s\n"); 
   
  system("PAUSE");	
  return 0;
}
