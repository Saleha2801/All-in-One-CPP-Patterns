#include<bits/stdc++.h>
using namespace std;
void Square_1(int row){
    cout<<"Square 1"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<row;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void Square_2(int row){
    cout<<"Square 2"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<row;j++){
            if(i==0 || j==0 || i==(row-1) ){
                cout<<"*";
            }
            else if(j==(row-1)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
void Triangle_1(int row){
    cout<<"Triangle 1"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void Triangle_2(int row){
    cout<<"Triangle 2"<<endl;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void Triangle_3(int row){
    cout<<"Triangle 3"<<endl;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
void Triangle_4(int row){
    cout<<"Triangle 4"<<endl;
    for(int i=1;i<=row;i++){
        for(int j=row;j>=i;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void Triangle_5(int row){
    cout<<"Triangle 5"<<endl;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=(row-i+1);j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void Triangle_6(int row){
    cout<<"Trinagle 6"<<endl;
    for(int i=0;i<=row;i++){
        for(int j=0;j<=row;j++){
            if((i+j)<=(row-1)){
                cout<<" ";
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }
}
void Triangle_7(int row){
    cout<<"Trinagle 7"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<(row-i-1);j++){
            cout<<" ";
        }
        for(int k=0;k<(2*i+1);k++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void Triangle_8(int row){
    cout<<"Trinagle 8"<<endl;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=row;j++){
            if(i>j){
                cout<<" ";
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }
}
void Triangle_9(int row){
    cout<<"Triangle 9"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<i;j++){
            cout << " ";
        }
        for(int k=0;k<(2*(row-i)-1);k++){
            cout << "*";
        }
        cout << endl;
    }
}
void Triangle_10(int row){
    cout<<"Traingle 10"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<(row-i);j++){
            cout<<" ";
        }
        for(int j=0;j<(i*2)+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0;i<row;i++){
        for(int j=-1;j<=i;j++){
            cout<<" ";
        }
        for(int j=0;j<2*(row-i-1)-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void Triangle_11(int row){
    cout<<"Triangle 11"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<row;j++){
            if((i+j)<=3){
                cout<<" ";
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<row;j++){
            if(i>j){
                cout<<" ";
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }
}
void Triangle_12(int row){
    cout<<"Triangle 12";
    for(int i=0;i<row;i++){
        for(int j=0;j<i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<(row-i);j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void Triangle_13(int row){
    cout<<"Triangle 13"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<i;j++){
            if((i+j)%2==0 || (i+j)==0){
                cout<<"1 ";
            }
            else{
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
}
void Triangle_14(int row){
    cout<<"Triangle 14"<<endl;
    for(int i=0;i<row;i++){
        int counter_1=0;
        int counter_2=0;
        for(int j=0;j<(row*2);j++){
            if((j<=row-1) && (i>=j)){
                counter_1++;
                cout<<counter_1<<" ";
            }
            else if((i<j) && (i+j)<=(row*2)-2){
                cout<<"  ";
            }
            else{
                cout << (i - counter_2+1) << " ";
                counter_2++;
            }
        }
        cout<<endl;
    }
}
void Triangle_15(int row){
    cout<<"Triangle 15"<<endl;
    int count=0;
    int j;
    for(int i=0;i<row;i++){
        for(j=0;j<=i;j++){
            count++;
            cout<<count<<" ";
        }
        cout<<endl;
    }
}
int main(){
    cout<<"Name: Saleha Shaikh";
    int row;
    cin>>row;
    Square_1(row);
    Square_2(row);
    Triangle_1(row);
    Triangle_2(row);
    Triangle_3(row);
    Triangle_4(row);
    Triangle_5(row);
    Triangle_6(row);
    Triangle_7(row);
    Triangle_8(row);
    Triangle_9(row);
    Triangle_10(row);
    Triangle_11(row);
    Triangle_12(row);
    Triangle_13(row);
    Triangle_14(row);
    Triangle_15(row);
}