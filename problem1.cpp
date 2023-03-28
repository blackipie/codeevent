#include <bits/stdc++.h>

using namespace std;
int main()
{
    int arr[100], target, n, i, j;
    printf("Enter the size of the array: ");
  
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the target sum: ");
    scanf("%d", &target);
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                printf("Indices of the two numbers are %d and %d", i, j);
                return 0;
            }
        }
    }
    printf("No two numbers in the array add up to the target sum.");
    return 0;
}
