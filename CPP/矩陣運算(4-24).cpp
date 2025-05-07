#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N , op;
    cin >> N;
    vector<vector<int>> A(N, vector<int>(N));
    vector<vector<int>> B(N, vector<int>(N));
    vector<vector<int>> C(N, vector<int>(N));
    
    for(auto &r : A){
        for(auto &c : r){
          cin >> c ;  
        }
    }
    
    for(auto &r : B){
        for(auto &c : r){
          cin >> c ;  
        }
    }
  while(1){
    cout << "[1] Addition" <<endl;
    cout << "[2] Substraction"<<endl;
    cout << "[3] Multiplication"<<endl;
    cout << "[4] Exit"<<endl;
    cin >> op ;
    
    switch(op){
        case 1 :
        
            for(int i=0 ; i<N ; i++){
                for(int j=0 ; j<N ; j++){
                    C[i][j] = A[i][j] + B[i][j];
                }
            }
            break;
            
        case 2 :
        
            for(int i=0 ; i<N ; i++){
                for(int j=0 ; j<N ; j++){
                    C[i][j] = A[i][j] - B[i][j];
                }
            }
            break;    
            
        case 3 :
        
            if(N==2){

                C[0][0] = A[0][0] * B[0][0] + A[0][1] * B[1][0] ;
                C[0][1] = A[0][0] * B[0][1] + A[0][1] * B[1][1] ;
                
                C[1][0] = A[1][0] * B[0][0] + A[1][1] * B[1][0] ;
                C[1][1] = A[1][0] * B[0][1] + A[1][1] * B[1][1] ;
            
            }else{
                
                C[0][0] = A[0][0] * B[0][0] + A[0][1] * B[1][0]+ A[0][2] * B[2][0] ;
                C[0][1] = A[0][0] * B[0][1] + A[0][1] * B[1][1]+ A[0][2] * B[2][1] ;
                C[0][2] = A[0][0] * B[0][2] + A[0][1] * B[1][2]+ A[0][2] * B[2][2] ;
                
                C[1][0] = A[1][0] * B[0][0] + A[1][1] * B[1][0]+ A[1][2] * B[2][0] ;
                C[1][1] = A[1][0] * B[0][1] + A[1][1] * B[1][1]+ A[1][2] * B[2][1] ;
                C[1][2] = A[1][0] * B[0][2] + A[1][1] * B[1][2]+ A[1][2] * B[2][2] ;
                
                C[2][0] = A[2][0] * B[0][0] + A[2][1] * B[1][0]+ A[2][2] * B[2][0] ;
                C[2][1] = A[2][0] * B[0][1] + A[2][1] * B[1][1]+ A[2][2] * B[2][1] ;
                C[2][2] = A[2][0] * B[0][2] + A[2][1] * B[1][2]+ A[2][2] * B[2][2] ;
                
            }
                
            break;  
            
        case 4 :
            return 0;
            
        default :
            break ;
    }
    
    for(auto &r : C){
        for(auto &c : r){
          cout << c <<" ";  
        }
        cout << endl;
    }
  }
    
}
