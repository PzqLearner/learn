//#include <iostream>
//using  namespace std;
//int BF(char s[],char t[]){
//    int index=0;
//    int i=0,j=0;
//    while ((s[i]!='\0')&&(t[i]!='\0')){
//        if (s[i]==t[j]){
//            i++;
//            j++;
//        } else{
//            index++;
//            i=index;
//            j=0;
//        }
//    }
//    if (t[j]!='\0')
//        return index+1;
//    else
//        return 0;
//}
//
//int main() {
//    char s[]={'a','a','a','a','a','a','a','b'};
//    char t[]={'a','a','b'};
//    int index= BF(s,t);
//    cout<<"����ƥ���±���Ϊ��"<<index<<endl;
//    cout<<"12321"<<endl;
//    cout<<"��־��"<<endl;
//    return 0;
//}
