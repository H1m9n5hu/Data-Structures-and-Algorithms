#include <stdio.h>

int diagonalDifference(int n, int arr[][n])
{
    int x = 0, y = 0, temp = n - 1;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            if(i == j)
                x += arr[i][j];
    for(int i = 0; i < n; i++)
    {
        y += arr[i][temp];
        temp--;
    }
    if(x > y)
        return x - y;
    return y - x;
}

int main()
{
    int n;
    scanf("%d", &n);
    int matrix[n][n];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);
    printf("%d", diagonalDifference(n, matrix));
    return 0;
}