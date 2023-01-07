#include <stdio.h>
/**
 * main - gets subjects input from user.
 * finds the average.
 *
 * Returns: Always(0) Success.
 */

int main()
{
    int marks[5];
    int totalMarks;

    printf("Enter marks of 5 subjects: ");
    for(int i = 0;i < 5; ++i)
        scanf("%d", &marks[i]);
    for(int j = 0; j < 5; ++j)
    {
        totalMarks = totalMarks + marks[j];
    }
    int averageMarks = totalMarks / 5;
    printf("Average Marks: %d", averageMarks);
    return (0);
}
