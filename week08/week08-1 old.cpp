//week08-1 old.cpp SOIT108_Advance_002B
//想要把3數字(排最大)+1
#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a<b){
       int temp=a;
       a=b;
       b=temp;
    }
     if(b<c){
       int temp=b;
       b=c;
       c=temp;
    }
     if(a<b){
       int temp=a;
       a=b;
       b=temp;
    }
    printf("%d",a*100+b*10+c+1);
}
