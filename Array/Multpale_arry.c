
// multiple array 

int array[2][3] = {{1, 2, 3}, {11, 21, 33, 44}};
printf("%d", array[0][1]);
printf("\n%d", array[1][1]);


//loop multiple loop
int arr[2][3] = {{1, 3, 0}, {-1, 5, 9}};

for (int i = 0; i < 2; ++i)
{
    for (int j = 0; i < 3; --j)
    {
        printf("%d", arr[i][j]);
    }
}