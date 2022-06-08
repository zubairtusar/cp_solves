#include<bits/stdc++.h>
using namespace std;
void swapp(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void print_array(int *arr, int len)
{
    for(int i=0; i<len; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int partitionn (int arr[], int low, int high)
{
    int pivot = arr[high];    // pivot
    int i = (low - 1);  // Index of smaller element

    for (int j = low; j <= high- 1; j++)
    {
        // If current element is smaller than or
        // equal to pivot
        if (arr[j] <= pivot)
        {
            i++;    // increment index of smaller element
            swapp(&arr[i], &arr[j]);
        }
    }
    swapp(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
           at right place */
        int pi = partitionn(arr, low, high);

        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}


void bubblesort(int *arr, int len, string order)
{
    if(order == "ascending")
    {
        for(int i=0; i<len; i++)
        {
            for(int j=i; j<len; j++)
            {
                if( arr[i] >= arr[j] )
                {
                    int temp;
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }
    else
    {
        for(int i=0; i<len; i++)
        {
            for(int j=i; j<len; j++)
            {
                if( arr[i] <= arr[j] )
                {
                    int temp;
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }
}

void insertion_sort(int *arr, int len, string order)
{
    if( order == "ascending")
    {
        for(int i=1; i<len; i++)
        {
            print_array(arr, len);
            int current_elem = arr[i];
            int j = i-1;
            while( j>=0 && arr[j]>current_elem )
            {
                arr[j+1] = arr[j];
                j--;
            }
            arr[j+1] = current_elem;
            print_array(arr, len);
        }
    }
    else
    {
        for(int i=1; i<len; i++)
        {
            print_array(arr, len);
            int current_elem = arr[i];
            int j = i-1;
            while( j>=0 && arr[j]<current_elem )
            {
                arr[j+1] = arr[j];
                j--;
            }
            arr[j+1] = current_elem;
            print_array(arr, len);
        }
    }
}

void selection_sort(int *arr, int len, string order)
{
    if(order == "ascending")
    {
        for(int i=0; i<len; i++)
        {
            int minn = 9999;
            int key = i;
            for(int j=i; j<len; j++)
            {
                if(arr[j]<minn)
                {
                    minn = arr[j];
                    key = j;
                }
            }
            int temp;
            arr[key] = arr[i];
            arr[i] = minn;
            print_array(arr, len);
        }
    }
    else
    {
        for(int i=0; i<len; i++)
        {
            int maxx = -9999;
            int key = i;
            for(int j=i; j<len; j++)
            {
                if(arr[j]>maxx)
                {
                    maxx = arr[j];
                    key = j;
                }
            }
            int temp;
            arr[key] = arr[i];
            arr[i] = maxx;
            print_array(arr, len);
        }
    }
}

int main()
{
    int arr[4] = { 14, 5, 6, 25 };
    print_array(arr, sizeof(arr)/sizeof(arr[0]));
    //bubblesort(arr, sizeof(arr)/sizeof(arr[0]), "descending");
    //insertion_sort(arr, sizeof(arr)/sizeof(arr[0]), "descending");
    //selection_sort(arr, sizeof(arr)/sizeof(arr[0]), "descending");
    quickSort(arr, 0, sizeof(arr)/sizeof(arr[0]));
    printf("\n");
    print_array(arr, sizeof(arr)/sizeof(arr[0]));
}
