
#include <iostream>

using namespace std;

int main()
{
    int a[100],n,min;
    cout<<"Enter size:"<<endl;
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    min=a[0];
    for(int i=0;i<n;i++)
    {
        int flag=0;
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp= a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
            flag=1;
            
        }
        if(flag==0)
        {
            break;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }
    

    return 0;
}
