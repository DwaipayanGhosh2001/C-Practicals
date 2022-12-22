// Write a program to create a struct Employee. Create employee id, employee name and employee salary. takle input from the user and display them. 

#include<stdio.h>
struct Emp
{
	int empid;
	char empname[20];
	float empsalary;

};
int main()
{
	struct Emp empdata[50],*empptr[50];
	
	int i,n;
	printf("Enter the number of employees YOU WANT TO ADD \n ");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	empptr[i]=&empdata[i];
	for(i=0;i<n;i++)
	{
		printf("Enter the Employee id \n");
		scanf("%d", &empptr[i]->empid);
		printf("Enter the Employee name \n");
		scanf("%s", &empptr[i]->empname);
		printf("Enter the Employee Salary \n");
		scanf("%f", &empptr[i]->empsalary);
	}
	printf(" Employee Details \n");
	for(i=0;i<n;i++)
	{
		printf("Employee: %d \n", (i+1));
		printf("Employee Id: %d \n", empptr[i]->empid);
			printf("Employee Name: %s \n", empptr[i]->empname);
				printf("Employee Salary: %.2f \n",empptr[i]->empsalary);
				printf("\n");
	}
	return 0;
}

