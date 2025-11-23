#include <stdio.h>

void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod)
{
    if (n == 1)
    {
        printf("Move disk 1 from rod %c to rod %c\n", from_rod, to_rod);
        return;
    }
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
    printf("Move disk %d from rod %c to rod %c\n", n, from_rod, to_rod);
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}

int main()
{
    int n = 10;                      // Number of disks
    towerOfHanoi(n, 'A', 'C', 'B'); // A, B, C are rod names
    return 0;
}






#include<stdio.h>

void towerofhanoi(int n,char fromrod,char torod,char auxrod)
{
    if(n==1)
    {
        printf("Move disk 1 from rod %c to %c\n", fromrod, torod);
        return;
    }
    towerofhanoi(n - 1, fromrod, auxrod, torod);
    printf("Move disk %d from rod %c to %c\n", n, fromrod, torod);
    towerofhanoi(n - 1, auxrod, torod, fromrod);
}

void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod)
{
    if (n == 1)
    {
        printf("Move disk 1 from rod %c to rod %c\n", from_rod, to_rod);
        return;
    }
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
    printf("Move disk %d from rod %c to rod %c\n", n, from_rod, to_rod);
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}
int main()
{
    int n;
    scanf("%d", &n);

    towerOfHanoi(n, 'A', 'C', 'B');
    return 0;
}