#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<conio.h>


int main(){
  
  int v[7] = {11, 7, 3, 5, 17, 23, 19};
  int i=0;
  int x;
  while (i<7)
    if(v[i]>v[i+1])
     x = v[i+1];
     v[i+1] =v[i];
     v[i] = x;
          for(x=0; x<7; x++)
            printf("%d" , v[x]);
            
    getchar();
}
