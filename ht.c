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



