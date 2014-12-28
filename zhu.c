1¡¢# include<stdio.h>
Void main ()
{
Int a ,b; 
Int*pointer_1,*pointer_2;
a=100;b=10;
pointer_1=&a;
pointer_2=&b;
printf(¡°%d,%d\n¡±,a,b);
printf(¡°%d,%d\n¡±,*pointer_1,*pointer_2);
}
2¡¢# include<stdio.h>
Void main()
{int *p1,*p2,*p,a,b;
Scanf(¡°%d,%d,&a,&b¡±)
P1=&a;p2=&b;
If(a<b)
{p1=&b;p2=&a;}
Printf(¡°a=%d,b=%d\n\n¡±,a,b);
Printf(¡°max=%d,min=%d\n¡±,p1,p2);
}
3¡¢# include<stdio.h>
Void main()
{void swap (int*p1,int*p2);
Int a, b;
Int*pointer_1,*pointer_2
Scanf(¡°%d,%d¡±,&a,&b);
Pointer_=&a;pointer_2=&b;
If(a<b) swap(pointer_1,pointer_2);
Printf(¡°\n%d,%d\n¡±,a,b);
}
Void swap(int*p1,int*p2)
{int temp;
Temp=*p1;
*p1=*p2;
*p2=temp;
}


