void swap(int *x,int *y){
  int t;
  t=*x;
  *x=*y;
  *y=t;
}

void display(int x[],int n)
{
  int i;
  for(i=0;i<n;i++)
    printf("%3d ",x[i]); 
  printf("\n");
}

void BubbleSort(int x[],int n)
{
  int i,j,c=1;
  
  for(j=0; j<n-1&&c!=0; j++) //(j=n-1;j>0;j--)
  {
    c = 0;
    for(i=0; i<n-(j+1); i++) //(i=0;i<j;i++)
    {
      if(x[i]>x[i+1])
      {
        c++;
        swap(&x[i],&x[i+1]);
      }   
    }
    if(c==0){
      printf("Im out\n");
      //break;
    }
    else{
      printf("Round %d\n",n-i);
    	display(x,n);
    }
  
  }
	
    // -compare
   //  -Swap **if*** needed


   
}