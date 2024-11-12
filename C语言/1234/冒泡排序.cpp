#include <iostream>

using namespace std;

int main()
{
    int c,a[1000];
    cin>>c;
    int sum=0;

    for(sum; sum<c; sum++)
    {
        cin>>a[sum];

    }

    for(int i=0; i<c-1; i++)
    {
        for(int b=0; b<c-i-1; b++)
        {
            if(a[b]>a[b+1])
            {
                sum=a[b+1];
                a[b+1]=a[b];
                a[b]=sum;
            }

        }
    }

    for(int m=0; m<c; m++)
    {
        cout<<a[m];
    }


    for(int i=0;i<c;i++)
	for(int b=i;b<c;b++)
    return 0;

}
