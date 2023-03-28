#include <stdio.h>
#include <string.h>

struct employee
{
    char full_name[200];
    int age;
    float salary;
    float height;
};

// int data()
// {
//     return data;
// }

int main()
{
    // char names[4] = {"Kofi"};
    // char str1[200];
    // printf("Enter your first name: \n");
    // scanf("%s",&str1);

    // char str2[200];
    // printf("Enter your first name: \n");
    // scanf("%s",&str2);
    int e;
    printf("How many employees do you have to add: \n");
    scanf("%d",&e);

    struct employee names[e];

    for (int i = 0; i < e; i++)
    {

        names[i].age;
        printf("Enter your age: \n");
        scanf("%d", &names[i].age);

        names[i].salary;
        printf("Enter your salary: \n");
        scanf("%f", &names[i].salary);

        names[i].full_name;
        printf("Enter your full_name: \n");
        scanf("%s", &names[i].full_name);

        /* code */
    }

    for (int i = 0; i < e; i++)
    {
        printf("The full name of employee %d:  %s\n",i+1, names[i].full_name);
        printf("The age of employee %d:  %d\n",i+1 ,names[i].age);
        printf("The salary of employee %d:  %f\n",i+1, names[i].salary);
        printf("\n");
    }

    return 0;
}
