1. 可以直接retrun判斷(T or F) 2. 根據輸入值提前結束迴圈

bool isPalindrome(int x) {
    long long P = 0 ;
    long long temp = x; 
    if(x<0) return false;
    while(temp>0){
        P = P*10+temp%10;
        temp /= 10;
    }    
    return P==x ;
}
