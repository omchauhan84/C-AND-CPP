# include<stdio.h>
int m1(int n)
{
    if(n<=1)
    return 1;
    else
    return n*m1(n-1);
}
void main ()
{
    int n,f;
    printf("Enter any no");
    scanf("%d",&n);
    f = m1(n);
    printf("factorial %d",f); 
}
void main ()
{
    int n,f;
    printf("Enter any no ");
    scanf("%d",&n);
    f=m1(n);
    printf("factorial ",f);
}
void m1 (int n)
{
    if (n<=1)
    return 1 ;
    else
    return n*m1 (n-1);
}
m1(int n)
{
    if(n<=1)
    return 1;
    else
    return n*m1 (n-1);
}
m1 (int n)
{
    if(n<=1)
    return 1;
    else
    return n*m1 (n-1);
}