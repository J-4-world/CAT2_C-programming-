#include<stdio.h>

int main(){
float id,h,r,F,A;
float th,w,g,t;
    printf("Enter the hours worked\n",h);
    scanf("%f",&h);
    
    
    printf("Enter hourly wage\n",w);
    scanf("%f",&w);
    
    
    
    
     if(h>=41){
    th=h*1.5;
    }
     g=th*w;
    
       printf("total hours:%.2f\n",th);
             printf("gross income:%f\n",g);
    
    
    
     F=g-600;
     if(g<600){t=0.15*g;}
     
     else if(g>=600){t=90+(0.2*F);}
      
      
     printf("net pay:%f",t);
      
      
      
      return 0;
  }    
      
      