#include<stdio.h>
bool prime(int x){
	for(int i=2;i<x;i++)
		if(x%i==0)
	    return false; 
	
	return true;
}
int main(){ 
	int x = 52;
	if(prime(x))
	  printf("%d is prime.", x);
	else
	  printf("%d is not prime.", x);
}
