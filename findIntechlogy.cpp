////
//// Created by A on 2022/6/14.
////
//#include "iostream"
//#include "ctime"
//#include "stdio.h"
//const double CLOCKS_PER_SECOND = ((clock_t)1000);
//const double CLOCKS_PER_MILLISECOND = ((clock_t)1);
//using namespace std;
//
//int main(){
//    int a[500];
//    for (int i = 0; i < 500; ++i) {
//        a[i] = (int)rand() % 1000;
//    }
//    for (int i = 0; i < 500; ++i) {
//        cout<<a[i]<<" ";
//    }
//    //顺序查找
//    clock_t start,finish;
//    start=clock();
//    int i=0,k;
//    cin>>k;
//    while (a[i]!=k){
//        i++;
//    }
//    finish=clock();
//    cout<<"顺序查找时间花费："<<(double)(finish-start)/CLOCKS_PER_SECOND<<endl;
//    //折半查找
//    int  k1;
//    cin>>k1;
//    clock_t start1,finish1;
//    start1=clock();
//    int mid,low=1,high=500;
//    while (low<=high){
//        mid=(low+high)/2;
//        if (k1<a[mid])
//            high=mid-1;
//        else if (k1>a[mid])
//            low=mid+1;
//        else
//            break;
//    }
//    finish1=clock();
//    cout<<"二分查找时间花费："<<(double)(finish1-start1)/CLOCKS_PER_SECOND<<endl;
//
//
//}