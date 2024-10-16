# include <iostream>
using namespace std;
int reverse(int array[],int n){
    for (int i = 0; i < n/2; i++)
    {
        int temp=array[i];
        array[i]=array[n-i-1];
        array[n-i-1]=temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<endl;
    }

    return 0;
}
int main(){
    int n;
    cout<<"testing for github";
    cout<<"Enter the size of the Array:";
    cin>>n;
    int array[n];
    cout<<"Enter Array:";
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }

    reverse(array,n);
    return 0;
}