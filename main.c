#include <stdio.h>
#include <stdlib.h>
#include "bubble.h"
#include "selection.h"
#include "insertion.h"
#include <string.h>
#include <ctype.h>

int main(int argc, char **argv){

int i,N,*a;
 N=argc-2;
 a=(int*) malloc(sizeof(int)*N);

 for(i=2;i<argc;i++) a[i-2]=atoi(argv[i]);
 
	for(i=0;i<strlen(argv[1]);i++)
	{
		argv[1][i] = tolower(argv[1][i]);
	}
	
	if(strcmp("bubble",argv[1])==0){
		BubbleSort(a,N);
	}
	else if(strcmp("insertion",argv[1])==0){
		InsertionSort(a,N);
	}
	else if(strcmp("selection",argv[1])==0){
		SelectionSort(a,N);
	}
	else{
		printf("Wrong sort type");
	}

 for(i=0;i<N;i++){
   printf("%3d ",a[i]);
 }
 
 printf("\n");
 free(a);
 
}
