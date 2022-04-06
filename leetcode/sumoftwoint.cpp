class Solution {
public:
    int getSum(int a, int b) {
        unsigned int carr = b;
        while (carr != 0)
        {
            int temp = (a & carr) << 1;
            a = a ^ carr;
            carr = temp;
        }
        return a;
        
    }
};
