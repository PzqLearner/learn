//
// Created by A on 2022/6/14.
//
#include <iostream>
#include "ctime"
const double CLOCKS_PER_SECOND = ((clock_t)1000);
const double CLOCKS_PER_MILLISECOND = ((clock_t)1);
using namespace std;
//希尔排序
void shellSort(int arr[]){
    int gap = 500;
    while (gap>1)
    {
        //每次对gap折半操作
        gap = gap / 2;
        //单趟排序
        for (int i = 0; i < 500 - gap; ++i)
        {
            int end = i;
            int tem = arr[end + gap];
            while (end >= 0)
            {
                if (tem < arr[end])
                {
                    arr[end + gap] = arr[end];
                    end -= gap;
                }
                else
                {
                    break;
                }
            }
            arr[end + gap] = tem;
        }
    }
}
//冒泡排序
void paoSort(int arr[]){
    for (int i = 0; i < 500; ++i) {
        for (int j = 0; j < 499-i; ++j) {
            if (arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
//快速排序
int Partition(int r[],int first,int end)
{
    int i=first,j=end;
    while (i<j){
        while (i<j&&r[i]<=r[j]) // 右侧扫描
            j--;
        if (i<j){
            int temp=r[i];
            r[i]=r[j];
            r[j]=temp;
            i++;
        }
        while (i<j&&r[i]<=r[j]) // 左侧扫描
            i++;
        if (i<j){
            int temp=r[i];
            r[i]=r[j];
            r[j]=temp;
            j--;
        }
    }
    return  i;
}
void QuickSort(int r[],int first,int end)// 快速排序
{
    int pivot; // 轴值
    if (first<end){
        pivot= Partition(r,first,end); //划分，pivot是轴值在序列中的位置
        QuickSort(r,first,pivot-1); //求解子问题1，对左侧子序列进行快速排序
        QuickSort(r,pivot+1,end);//求解子问题2，对右侧子序列进行快速排序
    }
}

int main(){
    int a[500];
    for (int i = 0; i < 500; ++i) {
        a[i] = (int)rand() % 1000;
    }
    clock_t start,end;
    start=clock();
    QuickSort(a,0,499);
    //paoSort(a);
    //shellSort(a);
    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl;
    end=clock();
    cout<<(double)(end-start)/CLOCKS_PER_MILLISECOND;
}