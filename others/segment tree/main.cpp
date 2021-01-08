#include <bits/stdc++.h>

using namespace std;

#define max_value 1000000


void constructTree(int input[],int segTree[],int low, int high, int pos)
{
   if(low==high)
   {
       segTree[pos]=input[low];
       return;
   }
   int mid = (low+high)/2;
   constructTree(input,segTree,low,mid,2*pos+1);
   constructTree(input,segTree,mid+1,high,2*pos+2);
   segTree[pos]=(segTree[2*pos+1]+segTree[2*pos+2]);
}
/*void update(int input[], int segTree[],int low, int high, int pos, int idx, int val)
{
    if(low==high)
    {
        input[idx]=val;
        segTree[pos]=val;
        return;
    }
    int mid = (low+high)/2;
    if(low <= idx && idx <= mid)
    {
        update(input,segTree,low,mid,2*pos+1,idx,val);
    }
    else
    {
        update(input,segTree,mid+1,high,2*pos+2,idx,val);
    }
    segTree[pos]=min(segTree[2*pos+1],segTree[2*pos+2]);
}*/

int RangeSumQuery(int segTree[],int qlow,int qhigh, int low, int high, int pos)
{
    if(qlow<=low && qhigh>=high) //total overlap
    {
        return segTree[pos];
    }
    if(qlow>high || qhigh<low)  //no overlap
    {
        return 0;
    }
    int mid=(low+high)/2;
    return (RangeSumQuery(segTree,qlow,qhigh,low,mid,2*pos+1)+RangeSumQuery(segTree,qlow,qhigh,mid+1,high,2*pos+2));

}



int main()
{
    int input[100],segTree[1000],n,val,location,start,end,minValue;
    cout<<"Enter number of elements: ";
    cin>>n;
    cout<<"Enter the input array: ";
    for(int i=0;i<n;i++)
    {
       cin>>input[i];
    }

    constructTree(input,segTree,0,n-1,0); //input array, segment tree array, array low, array high, position

    /*cout<<"Segment Tree: ";
    for(int i=0;i<2*n-1;i++)
    {
      cout<<segTree[i]<<" ";
    }*/

   /* cout<<"\nWhich location value u have to update: ";
    cin>>location;
    cout<<"updated value: ";
    cin>>val;

    update(input,segTree,0,n-1,0,location,val);

    cout<<"\nSegment Tree Updated: ";
    for(int i=0;i<2*n-1;i++)
    {
      cout<<segTree[i]<<" ";
    }
     */
    cout<<"\nEnter range for finding minimum: ";
    cin>>start>>end;
    minValue=RangeSumQuery(segTree,start,end,0,n-1,0);
    cout<<"\nMinimum Value from the range: "<<minValue;
    return 0;
}
