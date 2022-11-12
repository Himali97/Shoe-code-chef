
int main() {
    // your code goes here
    int T;
    cin>>T;
    while(T--){
        int A, B, C;
        cin >> A >> B >> C;
        if((A == 0 && B == 1)||(A == 0&&C == 1)){
            cout<<"1"<<endl;
        }
        else if((A == 1 && B == 0)||(A == 1 && C == 0)){
            cout<<"1"<<endl;
        }
        else{
            cout<<"0"<<endl;
        }
       
        
        
    }
    return 0;
}
 
