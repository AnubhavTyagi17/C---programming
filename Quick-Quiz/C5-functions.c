/*Write a program with three functions:
1. Good morning function which prints "good morning".
2. Good afternoon function which prints "good afternoon".
3. Good night function which prints "good night".
main() should call all of these in order 1-2-3.*/
#include <stdio.h>
void gdmrn()
{
    printf("Good morning.\n");
}
void gdaft()
{
    printf("Good afternoon.\n");
}
void gdngt()
{
    printf("Good night.\n");
}
int main()
{
    gdmrn();
    gdaft();
    gdngt();
    return 0;
}