
#include "push_swap.h"

int main(int argc, char **argv) {
    int nums[argc];
    int num;
    int i;
    int j;

    if (argc == 1)
        print("No arguments passed\n");

     i = 1;
    while (i < argc) {
         num = atoi(argv[i]);
        if (num == 0 && argv[i][0] != '0')
            print("Not a number\n");
        j = 0;
        while (j < i) {
            if (num == nums[j]) 
                print("There is A Duplicate Number\n");
            j++;
        }

        nums[i - 1] = num;
        i++;
    }

    printf("%sNo duplicates found\n%s", GREEN, END);
    return 0;
}
