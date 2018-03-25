#include <stdio.h>

#define N_ELEMENTS(arr) (sizeof(arr) / sizeof(*(arr)))

int min_element(int *arr, int size)
{
    int min = *arr;

    int *it;
    for (it = arr + 1; it < arr + size; ++it) {
        if (*it < min) {
            min = *it;
        }
    }

    return min;
}

int main()
{
    int arr[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};

//<<<<<<< 7f86f8407ab061bfcd3f82e3e4a7c8dee3bc2ab3
 //   const int min = min_element(arr, 10);

//    printf("Array: ");
//    int i;
//    for (i = 0; i < 10; ++i) {
//=======
    const int min = min_element(arr, N_ELEMENTS(arr));

    printf("Array: ");
//<<<<<<< ae370d46000fd321ed00fe967ec645f6ed1d7444
//    int i;
//    for (i = 0; i < N_ELEMENTS(arr); ++i) {
//>>>>>>> Count array items with macro
 //       printf("%d ", arr[i]);
//=======
    int i = 0;
    printf("%d", arr[i]);
    ++i;
    for (; i < N_ELEMENTS(arr); ++i) {
        printf(", %d", arr[i]);
//>>>>>>> Separate elements with comma
    }
    printf("\n");

    printf("Min element: %d\n", min);

    return 0;
}
