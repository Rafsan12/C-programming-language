#include <stdio.h>

void fun(int *x)
{
    *x = 200;
    printf("1. fun এর x-পয়েন্টারটির নিজের মেমোরি ঠিকানা (&x): %p\n", &x);
    printf("2. fun এর x-পয়েন্টারটির ভেতরে থাকা মেইনের ঠিকানা (x):  %p\n\n", x); // এখানে & দেওয়া হয়নি
}

int main()
{
    int x = 100;
    
    printf("--- fun কল করার আগে ---\n");
    printf("3. main এর x এর মেমোরি ঠিকানা (&x): %p\n\n", &x);
    
    fun(&x);
    
    printf("--- fun কল করার পরে ---\n");
    printf("4. main এর x এর পরিবর্তিত মান (value): %d\n", x);
    
    return 0;
}