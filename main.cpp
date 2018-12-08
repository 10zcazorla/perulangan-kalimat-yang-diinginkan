#include <stdio.h>
#include <conio.h>

int ulang(int n);

int main (void)
{
    int n;
    printf("Masukkan berapa kali kalimat ingin diulang: ");
    scanf("%d",&n);
    ulang(n);
    getch();
}
int ulang(int n)
{
    int i;
    for (i=1; i<=n; i++)
    printf("Algoritma dan Pemprograman\n");
    return 0;
}
