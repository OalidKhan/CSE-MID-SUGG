#include<stdio.h>
int main()
{
    char A;
    printf("Enter any Alphabet: ");
    scanf(" %c",&A);
    if (A=='a' || A=='e' || A=='i' || A=='o' || A=='u')
    {
        printf("The alphabet is Small Letter Vowel");
    }
    else if (A=='A' || A=='E' || A=='I' || A=='O' || A=='U')
    {
        printf("The alphabet is Capital Letter Vowel");
    }
    else
    {
        printf("The alphabet is Consonant");
    }

    return 0;
}
