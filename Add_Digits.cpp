// https://leetcode.com/problems/add-digits/

/*
int addDigits(int num) {
        int sum = 0;
        while(num > 0){
            int digit = num % 10;
            sum = sum + digit;
            num = num / 10;

            if(num == 0 && sum > 9){
                num = sum;
                sum = 0;
            }
        }
        return sum;
    }
*/