class Solution {
public:
    double myPow(double x, unsigned int n) {
        //cout<<x<<" "<<n<<endl;
    long long N = n;
        if (x == 0)
            return 0;
        if (N == 0)
            return 1;
        if (N == 1)
            return x;
        if (N < 0)
        {
            x = 1.0/x;
            N = -N;
        }
        double previous = myPow(x,N/2);
        if (N % 2 == 0)
            return previous * previous;
        else
            return previous * previous * x;
       
    }
};