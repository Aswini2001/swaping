#include<stdio.h>
main()
{
	//get input from users
	int a,b;
	printf("\a enter a=");
	scanf("%d",&a);
	printf("\n\a enter b=");
	scanf("%d",&b);
    printf("\n\aBEFORE SWAPING : \n a = %d   \n b=  %d",a,b);
    //use of arithmetic operator for swap
	a=a+b;//eg.if a=5 and b=3,then a=8//
	b=a-b;// here a=8 and b=3, so b=5//
	a=a-b;//here a=8 and b=5 then a =3//
	printf("\n AFTER SWAPING: \n a= %d \n b= %d ",a,b);
    return 0 ;

}
