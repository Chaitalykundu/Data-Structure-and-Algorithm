int count(int n){
    //write your code here
    int c=0,d;
    while(n>0){
        d = n%10;
        c++;
        n/=10;
    }
    return c;
}
