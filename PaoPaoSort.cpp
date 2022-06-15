////
//// Created by A on 2022/6/11.
////
//#include "iostream"
//using namespace std;
//int main(){
//    // 冒泡排序
//    int a[]= {89, 45, 68, 90, 29, 34, 17};
//    for (int i = 0; i < 7; ++i) {
//        for (int j = 0; j < 6-i; ++j) {
//            if (a[j]>a[j+1]){
//                int temp=a[j];
//                a[j]=a[j+1];
//                a[j+1]=temp;
//            }
//        }
//    }
//    for (int i : a) {
//        cout<<i<<" ";
//    }
//    cout<<endl;
//    //选择排序
//    int b[]= {89, 45, 68, 90, 29, 34, 17};
//    int min=0;
//    for (int i = 0; i < 7; ++i) {
//        for (int j = i; j < 7; ++j) {
//            if (b[j]<b[min]){
//                min=j;
//            }
//        }
//        int temp=b[i];
//        b[i]=b[min];
//        b[min]=temp;
//    }
//    for (int i : a) {
//        cout<<i<<" ";
//    }
//    return 0;
//}