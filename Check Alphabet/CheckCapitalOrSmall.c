#include<stdio.h>
int main()
{
    char A;
    printf("Enter any alphabet: ");
    scanf(" %c",&A);
    if (A>='a' && A<='z')
    {
        printf("The alphabet is Small Letter");
    }
    else if (A>='A' && A<='Z')
    {
        printf("The alphabet is Capital Letter");
    }

    return 0;
}
