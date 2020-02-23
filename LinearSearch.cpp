/******************************************************************************
*File: LinearSearch.cpp
*Description: Program to perform Linear Search
******************************************************************************/

#include <iostream>
#include <string>

using namespace std;


int fnLinSearch(int [], int, int);
/******************************************************************************
*Function : main
*Input parameters: no parameters
*RETURNS: 0 on success
******************************************************************************/


int main(void)
{ int iaArr[20],iNum,iKey;
    int i,iPos=0;

    cout<<"\nEnter the size of the array: ";
    cin>>iNum;
    cout<<"\nEnter the elements of the array:\n";
    
    for(i=0;i<iNum;i++)
    cin>>iaArr[i];
    
    cout<<"\nenter the key element: "; 
    cin>>iKey;
    iPos=fnLinSearch(iaArr,iKey,iNum); 
    
    if(iPos==-1)
    cout<<"\nElement not found\n";
    else cout<<"\nElement found at position: "<<iPos;
    
    return 0;
}


/******************************************************************************
*Function : fnLinSearch
*Description: Function to perform Linear Search *Input parameters:
* int A[] - array of elements in ascending order
* int k - key element to be searched
* int iN - no of elements to be searched
*RETURNS: position of the element if found or -1 otherwise
******************************************************************************/

int fnLinSearch(int A[], int k, int iN)
{
    if( iN ==0) return -1; 
    
    else if( k == A[iN-1]) return iN; 
    
    else
    return fnLinSearch(A,k,iN-1);
} 