void InsertionSort(int a[] ,int n)
{
    int i,j,value;

  for(i=1;i<n;i++){
    value=a[i];
    for(j=i-1; j>=0 && a[j]>value; j--){
      a[j+1]=a[j];
      //else break;
      display(a,n);
    }
    a[j+1]=value;
    printf("Round %d\n", i);
    display(a,n);
    printf("======\n");
  }
}