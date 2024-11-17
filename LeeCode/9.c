bool isPalindrome(int x) {
    long long P = 0 ;
    long long temp = x; 
    while(temp>0){
        P = P*10+temp%10;
        temp /= 10;
    }    
    return P==x ;
}
