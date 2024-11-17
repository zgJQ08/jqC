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
