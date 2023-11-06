#include<stdio.h>
struct Book
{
	char title[40];
	char author[40];
	char publication[40];
	float price;
};
void main()
{
	int i;
	struct Book b1;
	for(i=0;i<4;i++){
	printf("enter 1st book title :\n");
	scanf("%s",&b1.title);
	printf("enter 1st book author name :\n");
	scanf("%s",&b1.author);
	printf("enter 1st book publication :\n");
	scanf("%s",&b1.publication);
	printf("enter 1st book price :\n");
	scanf("%f",&b1.price);  
	  
    printf("book title:%s \t book author:%s \t book publication:%s \t book price:%f ",b1.title,b1.author,b1.publication,b1.price);
}
}
