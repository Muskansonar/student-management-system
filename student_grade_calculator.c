#include <stdio.h>

int main()
{
    float marks[5], total = 0, percentage;
    int i;

    printf("===== Student Grade Calculator =====\n\n");

    for(i = 0; i < 5; i++)
    {
        printf("Enter marks of Subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        total = total + marks[i];
    }

    percentage = total / 5;

    printf("\nTotal Marks = %.2f / 500", total);
    printf("\nPercentage = %.2f%%", percentage);

    if(percentage >= 90)
        printf("\nGrade = A+");
    else if(percentage >= 80)
        printf("\nGrade = A");
    else if(percentage >= 70)
        printf("\nGrade = B");
    else if(percentage >= 60)
        printf("\nGrade = C");
    else if(percentage >= 50)
        printf("\nGrade = D");
    else
        printf("\nGrade = F (Fail)");

    return 0;
}
