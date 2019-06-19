#include <stdio.h>
#include <unistd.h>

long bla(int i)
{
    long l = i * 10000;

    char str[] = "%ld\n";
    printf(str, l);
    return i*2000000;
}

int main()
{
    int i = 42;

    bla(i);
}