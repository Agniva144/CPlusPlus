#include<iostream>
using namespace std;

int main(){
        int i=10;
          cout<<&i<<endl;
          int *p=&i;
          cout<<*p<<endl;
          cout<<p<<endl;
          cout<<sizeof(p)<<endl;
          cout<<++(*p)<<endl;

        int a[10]={1,2,3,4,5,6};
        cout<<sizeof(a)<<endl;
        cout<<*a<<endl;
        cout<<a[0]<<endl;

}


#include<iostream>
using namespace std;

int main(){
        int i=65;
        char c=i;
        cout<<c<<endl;
        int *p=&i;
        char* pc=(char*)p;
        cout<<"*p:"<<*p<<endl;
        cout<<"*pc"<<*pc<<endl;
        cout<<*(pc+1)<<endl;
}



#include<iostream>
using namespace std;

int main(){
        int m,n;
        cin>>m>>n;

        int** p2=new int*[m];

        for(int i=0;i<m;i++){
                p2[i]=new int[n];
                for(int j=0;j<n;j++){
                                cin>>p2[i][j];
                }
        }
        cout<<"DONE"<<endl;
}

