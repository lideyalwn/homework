#include<stdio.h>
void prime(){
	int x = 53;
	int i;
	for(i=2;i<x;i++)
	  if(x%i==0){
	    printf("%d is not prime", x);
	   break;
    }
	if(i==x)
	  printf("%d is a prime", x);    
}
int main(){
	prime();
}
