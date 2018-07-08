int main()
 {
     int n, i;
     printf("Enter the number of elements in the sequence");
     scanf("%d", &n);
     for( i=0 ;i<n;i++)
    {
       printf("%d\n",fibo(i));
  }
}
int fibo(int n) {
 if ( n == 0)
  return 0;
else if (n ==1)
   return 1;
 else
   return fibo(n-1) + fibo(n-2);
}
