
#include "push_swap.h"

int main(int argc, char **argv) 
{
    int nums[argc-1];
    int num;
    int i = 0;
    int k = 0;

    while (k < argc-1) 
    {
        nums[k] = 0;
        k++;
    }
    
    int j = 1;
    while (j < argc) 
    {
        num = atoi(argv[j]);
        if (num == 0) 
        {
            printf("Error: argument %d is not a number\n", j);
            return 1;
        }

        k = 0;
        while (k < i) 
        {
            if (nums[k] == num) 
            {
                printf("Error: duplicate number %d\n", num);
                return 1;
            }
            k++;
        }

        nums[i] = num;
        i++;
        j++;
    }
    printf("%sNo duplicates or errors found%s\n", GREEN, END);
    return 0;
}
