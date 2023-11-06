#include<stdio.h>
struct Employee
{
	char employee_name[40];
	int salary;
	int id;
	
};
void main()
{
	char employee_name[40];
	int salary;
	int id;
	struct Employee e1 ;
	printf("\nenter employee name");
	scanf("%s",&e1.employee_name);
	printf("enter Employee salary:");
	scanf("%d",&e1.salary);
	printf("enter Employee id");
	scanf("%d",&e1.id);
	printf("Employee name:%s\n Employee salary:%d\n Employee id:%d",e1.employee_name,e1.salary,e1.id);
	
}
