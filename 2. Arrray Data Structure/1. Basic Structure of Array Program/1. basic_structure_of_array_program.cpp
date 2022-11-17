#include<bits/stdc++.h>
using namespace std;

int main()
{

    // Array is a List of Variable of Similar Type.
    // Ex : {1,2,3,4,5};  --> Valid
    // Ex : {'c','d','e','f'} --> Valid
    // Ex : {'d',3,'f',4.3} --> InValid

    cout<<"------------------Array in Data Structure--------------------------------------\n\n";
//   1. First Way Declare An Array :
    cout<<"---------------------------1. First Way Declare An Array :----------------------------\n";
    int arr[8]= {1,2,3,4,5,6,7,8};

    cout<<"Arr[0] : "<<arr[0]<<endl;
    cout<<"Arr[1] : "<<arr[1]<<endl;
    cout<<"Arr[2] : "<<arr[2]<<endl;
    cout<<"Arr[3] : "<<arr[3]<<endl;
    cout<<"Arr[4] : "<<arr[4]<<endl;
    cout<<"Arr[5] : "<<arr[5]<<endl;
    cout<<"Arr[6] : "<<arr[6]<<endl;
    cout<<"Arr[7] : "<<arr[7]<<endl;

    cout<<arr; // We Get the Address of The First Element. Because Arr Point The First Index of an  Array.

    // Print Values using For Loop :
    cout<<"\n\nPrint Values using For Loop : \n";
    for(int i=0; i<8; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<"\n\nPrint Values using While Loop : \n";
    int j=0;
    while(j<8)
    {
        cout<<arr[j]<<" ";
        j++;
    }

    cout<<"\n\nPrint Values using Do-While Loop : \n";
    int k=0;
    do
    {
        cout<<arr[k]<<" ";
        k++;
    }
    while(k<8);
    cout<<endl;

//   2. Second Way Declare An Array :
    cout<<"-----------------------2. Second Way Declare An Array :-----------------------\n";
    string Fruits[5];
    Fruits[0]="Banana";
    Fruits[1]="Apple";
    Fruits[2]="Mango";
    Fruits[3]="Pine-Apple";
    Fruits[4]="Pear";

    cout<<"Fruits[0] : "<<Fruits[0]<<endl;
    cout<<"Fruits[1] : "<<Fruits[1]<<endl;
    cout<<"Fruits[2] : "<<Fruits[2]<<endl;
    cout<<"Fruits[3] : "<<Fruits[3]<<endl;
    cout<<"Fruits[4] : "<<Fruits[4]<<endl<<endl;

    // Using For Loop :
    for(int index=0; index<5; index++)
    {
        cout<<"Fruits["<<index<<"] : "<<Fruits[index]<<endl;
    }

    // 3. Print Array By User Input :
    cout<<"----------------------3. Print Array By User Input : -------------------------------------\n";
    int n;
    cout<<"Enter The Size of An Array : ";
    cin>>n;

    int Array[n];

    for(int uIndex=0; uIndex<n; uIndex++)
    {
        cin>>Array[uIndex];
    }
    cout<<endl;

    for(int uIndex=0; uIndex<n; uIndex++)
    {
        cout<<Array[uIndex]<<" ";
    }
    cout<<endl;
    // 4. Find The Minimum And Maximum Element From An Array :
    int a;

    cout<<"Enter Size of an array : ";
    cin>>a;
    int Array1[a];

    for(int ar=0; ar<a; ar++)
    {
        cin>>Array1[ar];
    }
    int maxNumber=INT_MIN,minNumber=INT_MAX;

    for(int ar=0; ar<a; ar++)
    {
        if(Array1[ar]>maxNumber)
        {
            maxNumber=Array1[ar];
        }
        if(Array1[ar]<minNumber)
        {
            minNumber=Array1[ar];
        }
        // Also Write Like This :
        // maxNumber=max(maxNumber,Array[ar])
        // minNumber=min(minNumber,Array[ar])
    }

    cout<<"Maximum Number is : "<<maxNumber<<endl;
    cout<<"Minimum Number is : "<<minNumber<<endl;
    cout<<endl;

    return 0;
}
