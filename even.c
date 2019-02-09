int main()
{
    int n;
    printf("Enter the Number\n");
    scanf("%d",&n);
    if(n<0)
    {
        printf("invalid");
    }

   else if(n%2==0)
    {
     printf("even");
     
    }
    else if(n%2!=0)
    {
        printf("odd");
    

}
    return 0;
