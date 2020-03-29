#include<stdio.h>

void swap(int *x, int *y){
(*x)=(*x)^(*y);
(*y)=(*x)^(*y);
(*x)=(*x)^(*y);

printf("x= %d,y= %d ",*x,*y);
}
int main(){
/*
int x=10,y=20;
printf("x= %d,y= %d ",x,y);
swap(&x,&y);
printf("x= %d,y= %d ",x,y);
*/
char name[] = {"GAURAV"};
char *p=&name;
int count =0;
printf("%c",*p);
while(*p != '\0')
{count+=1;
printf("%c",*p);
++(*p);
}
printf("%d",count);
//reverse(*)
}
