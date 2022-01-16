void SelectionSort(int x[],int n){

    int min,i,imin,j;
  for(j=0;j<n-1;j++){
    //min=x[j];
    imin=j;
    for(i=j+1;i<n;i++){
      if(x[i]<x[imin]){
        //min=x[i];
        imin=i;
      }
    }
    swap(&x[j],&x[imin]);
    printf("Round %d\n",j+1);
    display(x,n);
    printf("======\n");
  }
}