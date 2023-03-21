#include<iostream>
using namespace std;
void pattern1(int n){
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
void pattern2(int n){
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
}
void pattern3(int n){
    for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}
}
void pattern4(int n){
    	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(j<=n-i+1)
			{
				cout<<"* ";
                        } else 
                        {
                        	cout << " ";
                		}
                }
		cout<<endl;
	}
}
void pattern5(int n){
    for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<i<<" ";
		}
		cout<<endl;
	}
}
void pattern6(int n){
     for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i+1;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void pattern7(int n){
     for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++)
        {
            cout<<"*";
        }
         for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}
void pattern8(int n){
     for(int i=1;i<=n;i++)
    {
        for(int j=1;j<i;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=2*n-(2*i-1);j++)
        {
            cout<<"*";
        }
         for(int j=1;j<i;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}
void pattern9(int n){
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++)
        {
            cout<<"*";
        }
         for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<i;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=2*n-(2*i-1);j++)
        {
            cout<<"*";
        }
         for(int j=1;j<i;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}
void pattern10(int n){
    for(int i=1;i<=(2*n-1);i++)
    {
        int stars=i;
        if (i > n) {
          stars = 2 * n - i;
        }
        for(int j=1;j<=stars;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern11(int n){
    int start=1;
    for (int i=1;i<=n;i++)
    {
        if(i%2==0) start=0;
        else start=1;
        for(int j=1;j<=i;j++)
        {
            cout<<start<<" ";
            start=1-start;
        }
        cout<<endl;
    }
}
void pattern12(int n){
     int space=2*(n-1);
    for(int i=1;i<=n;i++)
    {
        //numbers
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        //space
        for(int j=1;j<=space;j++)
        {
            cout<<" ";
        }
        //numbers
        for(int j=i;j>=1;j--)
        {
            cout<<j<<" ";
        }
        space-=2;
        cout<<endl;

    }
}
void pattern13(int n){
    int num =1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<num<<" ";
            num+=1;
        }
        cout<<endl;
    }
}
void pattern14(int n){
     for(int i=1;i<=n;i++)
    {
         char c='A';
        for(int j=1;j<=i;j++)
        {
            cout<<c<<" ";
            c=char(c+1);
        }
        cout<<endl;
    }
}
void pattern15(int n){
    for(int i=n;i>=1;i--)
    {
        char c='A';
        for(int j=1;j<=i;j++)
        {
            cout<<c<<" ";
            c=char(c+1);
        }
        cout<<endl;
    }
}
void pattern16(int n){
    char c='A';
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<c<<" ";
        }
        c=char(c+1);
        cout<<endl;
    }
}
void pattern17(int n){
    for(int i=1;i<=n;i++)
    {
        //spaces
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        //characters
        char c='A';
        int breakpoint=(2*i-1)/2;
        for(int j=1;j<=2*i-1;j++)
        {
            cout<<c<<" ";
            if(j<=breakpoint) c++;
            else c--;
        }
        for(int j=1;j<=n-1;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}
void pattern18(int n){
    int f=65;
    for(int i=1;i<=n;i++)
    {
        char c=65+n-1;
        for(int j=1;j<=i;j++)
        {
            cout<<c<<" ";
            c=char(c-1);
        }
        cout<<endl;
    }
} 
void pattern19(int n){
 int space =0;
    for(int i=1;i<=n;i++)
    {
        //stars
        for(int j=1;j<=n-i+1;j++)
        {
            cout<<"* ";
        }
        //spaces
        for(int j=1;j<=space;j++)
        {
            cout<<" ";
        }
        //stars
        for(int j=1;j<=n-i+1;j++)
        {
            cout<<"* ";
        }
        space+=2;
        cout<<endl;
    }
    int spaces=2*n-2;
     for(int i=1;i<=n;i++)
    {
        //stars
        for(int j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        //spaces
        for(int j=1;j<=spaces;j++)
        {
            cout<<" ";
        }
        //stars
        for(int j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        spaces-=2;
        cout<<endl;
    }
}
void pattern20(int n){
   int space=2*n-2;
    for(int i=1;i<=2*n-1;i++)
    {
        int stars=i;
        if(i>n) stars=2*n-i;
        //stars
        for(int j=1;j<=stars;j++)
        {
            cout<<"* ";
        }
        //space
        for(int j=1;j<=space;j++)
        {
            cout<<" ";
        }
        //stars
        for(int j=1;j<=stars;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
        if(i<n) space-=2;
        else space+=2;
    }
}
void pattern21(int n){
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j==1||j==n||i==1||i==n)
            {
                cout<<"*";
            }
            else
            cout<<" ";
        }
        cout<<endl;
    }
}
void pattern22(int n){
    for(int i=0;i<2*n-1;i++)
    {
        for(int j=0;j<2*n-1;j++)
        {
         int top=i;
         int left=j;
         int right=(2*n-2)-j;
         int bottom=(2*n-2)-i;
         cout<<(n-min(min(top,bottom),min(left,right)));   
        }
        cout<<endl;
    }
}
int main()
{
    system("cls");
    int n,num;
    cout<<"\nEnter the Pattern Number to be performed: ";
    cin>>num;
    cout<<"Enter the number or rows of the pattern: ";
    cin>>n;
    switch(num)
    {
        case 1:
        pattern1(n);break;
        case 2:
        pattern2(n);break;
        case 3:
        pattern3(n);break;
        case 4:
        pattern4(n);break;
        case 5:
        pattern5(n);break;
        case 6:
        pattern6(n);break;
        case 7:
        pattern7(n);break;
        case 8:
        pattern8(n);break;
        case 9:
        pattern9(n);break;
        case 10:
        pattern10(n);break;
        case 11:
        pattern11(n);break;
        case 12:
        pattern12(n);break;
        case 13:
        pattern13(n);break;
        case 14:
        pattern14(n);break;
        case 15:
        pattern15(n);break;
        case 16:
        pattern16(n);break;
        case 17:
        pattern17(n);break;
        case 18:
        pattern18(n);break;
        case 19:
        pattern19(n);break;
        case 20:
        pattern20(n);break;
        case 21:
        pattern21(n);break;
        case 22:
        pattern22(n);break;
        default:
        cout<<"Enter the valid pattern number to be performed.";
    }
}
