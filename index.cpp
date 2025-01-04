#include <iostream>
using namespace std;
int main() {

    int arr[]={1,2,3,4,5};
    int sum =0;
    for(int i=0;i<5;++i){
        sum=sum+arr[i];
        
    }
    cout<<sum;
    
int arr[]={12,34,22,34,45};
int max=arr[0];
for(int i=0;i<5;i++){
    if(max<arr[i]){
        max=arr[i];
    }
   
}
    cout<<max<<endl; 

int arr[]={23,21,23,233,13};
int min =arr[0];
for(int i=0;i<5;++i){
    if(min>arr[i]){
        min=arr[i];
    }
}
    cout<<min;

int arr[]={12,34,21,12,34};
for(int i=0;i<5;++i){
    bool duplicate=false;
    for(int j=i+1;j<5;++j){
        if(arr[i]==arr[j]&&arr[i]!=-1){
            arr[j]=-1;
            duplicate=true;
        }
    }
    if(duplicate){
        cout<<arr[i]<<endl;
    }
}


int arr[]={12,12,34,56,41,34};
for(int i=0;i<6;++i){
    bool duplicate=false;
    for(int j=i+1;j<6;++j){
        if(arr[i]==arr[j]&&arr[i]!=-1){
            arr[j]=-1;
            duplicate=true;
        }
    }
    if(!duplicate&&arr[i]!=-1){
        cout<<arr[i]<<endl;
    }
}

int arr[]={2,45,76,56,342,21};
for(int i=0;i<6;++i){
    int count=1;
    for(int j=i+1;j<6;++j){
        if(arr[i]==arr[j]){
        count++;
        arr[j]=-1;
        }
    }
    if(arr[i]!=-1){
        cout<<"the frequency="<<arr[i]<<"is"<<count<<endl;
    }
}

int arr[]={67,70,1,3,5};
for(int i=0;i<5;++i){
    if(arr[i+1]-arr[i]>1){
        cout<<arr[i]+1<<endl;
    }
}


int arr[]={1,12,17,20,56};
for(int i=0;i<5;++i){
    if(arr[i+1]-arr[i]>1){
        for(int j=arr[i]+1;j<arr[i+1];j++){
            cout<<j<<endl;
        }
    }
}

int arr[]={2,32,43,23,21};
int k=3;
for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        
    if(arr[i]>arr[j]){
        int temp;
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        
    }
        
    }
}
cout<<arr[k-1];


int arr[]={12,32,43,23,33};
int target=43;
for(int i=0;i<5;i++){
    if(arr[i]==target){
        cout<<"yes";
        return 0;
    }
    
}
cout<<"no";

int arr[]={12,32,322,332,32,};
int remove=32;
for(int i=0;i<5;i++){
    if(arr[i]!=remove){
        cout<<arr[i]<<endl;
    }
}

int arr[]={1,2,3,4,3,5,1};
for(int i=0;i<7/2;i++){
    if(arr[i]!=arr[7-i-1]){
        cout<<"not pallindrome";
        return 0;
    }
}
cout<<"pallindrome";


int arr[]={1,2,3,4,5};
for(int i=0;i<5/2;++i){
    int temp;
    temp=arr[i];
    arr[i]=arr[5-i-1];
    arr[5-i-1]=temp;
    
}
for(int i=0;i<5;++i){
    cout<<arr[i];
}

string str1="aman";
    string str2="nama";
    int found;
    
    if(str1.length()!=str2.length()){
        cout<<"not an anagram";
        return 0;
    }
    
    for(int i=0;i<str1.length();++i){
        for(int j=0;j<str2.length();j++){
            found=false;
            if(str1[i]==str2[j]){
                str2[j]='#';
                found=true;
                break;
            }
        }
        if(!found){
            cout<<"not anagram";
            return 0;
        }

    }
    cout<<"anagram";
}