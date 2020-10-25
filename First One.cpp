#include<iostream.h>
#include<conio.h>
int indexFirst(int arr[], int low, int high)
{
    int mid;
    while (low <= high) {
	mid = (low + high) / 2;
	if (arr[mid] == 1 &&
	    (mid == 0 || arr[mid - 1] == 0))
	    break;
	else if (arr[mid] == 1)
	    high = mid - 1;
	else
	    low = mid + 1;
    }
    return mid;
}
int posFirst(int arr[])
{
    int l = 0, h = 1;
    while (arr[h] == 0) {
	l = h;
	h = 2 * h;
    }
    return indexFirst(arr, l, h);
}
void main()
{
    clrscr();
    int n,i;
    cout<<"Enter  size of array: ";
    cin>>n;
    int arr[100];
    cout<<"\nEnter elements(0 and 1): ";
    for(i=0;i<n;i++)
    {
	 cin>>arr[i];
    }
    cout << "\nIndex of first 1= "
	 << posFirst(arr);
    getch();
}
