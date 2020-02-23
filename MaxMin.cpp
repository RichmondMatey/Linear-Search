/******************************************************************************
*ID: 10659056
*File: MaxMin.cpp
*Description: Program to find the maximum and minimum in a given list
* of n elements using divide and conquer.
******************************************************************************/

#include <iostream>
#include <string>

using namespace std;

void fnRecMaxMin(int [], int , int, int*, int*);
/******************************************************************************
*Function : main
*Input parameters:
* int argc - no of commamd line arguments
* char **argv - vector to store command line argumennts
*RETURNS: 0 on success
******************************************************************************/

int main( int argc, char **argv)
{ int iaArr[500000],iNum,i; int
    iMax=0,iMin=0;
    cout<<"\nEnter the size of the array: ";
    cin >> iNum;
    
    cout<<"\nEnter the elements of the array:\n";
    for(i=0;i<iNum;i++)
    cin >> iaArr[i]; 
    
    fnRecMaxMin(iaArr,0, iNum-1, &iMax, &iMin);
    cout<<"\nMax Element = "<<iMax<<"\nMin Element = "<<iMin;
    
    return 0; 
}


/******************************************************************************
*Function : fnRecMaxMin
*Description: Function to find maximum and minimum elements in an array using Divide and
Conquer,
*Input parameters:
* int a[] - iaArray to hold integers
* int low - start index of the array to be sorted
* int high- end index of the array to be sorted
* int *max - pointer to hold the max element
* int *min - pointer to hold the min element
*RETURNS: no value
******************************************************************************/

void fnRecMaxMin(int a[],int low,int high, int *max, int *min)
{ int mid,max1,max2,min1,min2;
    if(high-low == 1)
    { if(a[low] > a[high])
        {
            *max = a[low];
            *min = a[high];
        }
        else
            {
                *max = a[high];
                *min = a[low];
            }
    }
    
    else if(low == high)
    {
        *min = *max = a[low];
    }

    else if(low<high)
    { mid=(low+high)/2;
        fnRecMaxMin(a,low,mid,&max1,&min1);
        fnRecMaxMin(a,mid+1,high,&max2,&min2); if(max1 > max2)
        *max = max1; else
        *max = max2;
        if(min1 < min2)
        *min = min1; else
        *min = min2;
    }
} 