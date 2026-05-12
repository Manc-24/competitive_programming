    bool isBitSet(long long n, int i) {
        // write your code here
        if((n&(1<<i)) == 0)
        return false;
        else return true;
        
    }
};
