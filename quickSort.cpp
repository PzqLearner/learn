////
//// Created by A on 2022/6/10.
////
//// 分治法 快速排序
//#include "iostream"
//using namespace std;
//
//int Partition(int r[],int first,int end)
//{
//    int i=first,j=end;
//    while (i<j){
//        while (i<j&&r[i]<=r[j]) // 右侧扫描
//            j--;
//        if (i<j){
//            int temp=r[i];
//            r[i]=r[j];
//            r[j]=temp;
//            i++;
//        }
//        while (i<j&&r[i]<=r[j]) // 左侧扫描
//            i++;
//        if (i<j){
//            int temp=r[i];
//            r[i]=r[j];
//            r[j]=temp;
//            j--;
//        }
//    }
//    return  i;
//}
//void QuickSort(int r[],int first,int end)// 快速排序
//{
//    int pivot; // 轴值
//    if (first<end){
//        pivot= Partition(r,first,end); //划分，pivot是轴值在序列中的位置
//        QuickSort(r,first,pivot-1); //求解子问题1，对左侧子序列进行快速排序
//        QuickSort(r,pivot+1,end);//求解子问题2，对右侧子序列进行快速排序
//
//    }
//}
//int main(){
//    int a[]= {89, 45, 68, 90, 29, 34, 17};
//    QuickSort(a,0,6);
////    int count=0;
////    while (a[count]!='\0'){
////        cout<<a[count]<<"  ";
////        count++;
////    }
//    for (int i = 0; i < 7; ++i) {
//        cout<<a[i]<<" ";
//    }
//    return 0;
//}