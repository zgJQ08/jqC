#include <stdio.h>
#include <string.h>

struct Student
{
    char studentName[20];
    int score;
};

int main(){
  
  struct Student students[3] ;
  int sum = 0 ,Ms=-1 ;
  char rank[20];
  for(int i=0 ; i<3 ; i++){
     scanf("%s %d", students[i].studentName, &students[i].score);
     sum += students[i].score;
     if(students[i].score>Ms){
     	Ms = students[i].score;
        strcpy(rank, students[i].studentName);  // rank不能直接= 所以要用複製ㄉ 
     }
  }
  
  sum /= 3; 
  
  printf("avg = %d\n",sum);
  printf("max = %s\n",rank);
 
  
}
