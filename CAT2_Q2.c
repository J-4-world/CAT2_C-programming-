//2 dimension array
/*
 Author james kamau
 sate 15/10/2024
*/



#include<stdio.h>
  int main () {
   int i,j,k;
  int marks [2][2][2]={{{65,92},{84,72}},{{35,70},{59,67}}};
   for(i=0;i<2;i++){
   for(j=0;j<2;j++){
    for(k=0;k<2;k++){

   printf("marks[%d][%d] [%d]=[%d]\n",i,j,k,marks[i][j][k]);

}

     

}



  }

return 0;
   }
