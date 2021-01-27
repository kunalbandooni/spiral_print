#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"N: ";
    cin>>n;
    int a[n][n];
    cout<<"Enter the array elements: ";
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>a[i][j];
    
    int up=0,down=n,left=0,right=n;
    int r=0,c=n-1;
    while(up<down && left<right){
        for(int i=left;i<right;i++)
            cout<<a[r][i]<<" ";
        right--;
        for(int i=up+1;i<down;i++)
            cout<<a[i][c]<<" ";
        down--;
        for(int i=right-1;i>=left;i--)
            cout<<a[c][i]<<" ";
        for(int i=down-1;i>up;i--)
            cout<<a[i][r]<<" ";
        up++;
        left++;
        r++;
        c--;
    }
    return 0;
}
