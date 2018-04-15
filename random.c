//Xi=(aXi-1+c)mod(m)
#include<stdio.h>
int main()
{
    int a=7,m=3,c=4;
    int x[100],check=0,j,i=1;
    x[0]=20;
    while(1)
    {
        x[i]=((a*x[i-1])+c)%m;
        printf("Value of X%d: is %d\n\n",i-1,x[i-1]);
        check=x[i-1];
        int count=0;
        for(j=0; j<i; j++)
        {
            if(check==x[j])
                count++;
        }
        if(count==2)
        {
            printf("Process terminated for X%d = %d\n\n",i-1,check);
            break;
        }
        i++;
    }
}
