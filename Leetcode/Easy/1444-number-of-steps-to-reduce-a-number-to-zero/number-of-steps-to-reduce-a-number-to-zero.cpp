class Solution {
public:
    int numberOfSteps(int num) {
        int steps=0;
        for(int i=num;i>0;){
            if(i%2==0){
                i=i/2;
            }
            else{                    
                i--;
            }
            steps++;
        }
        return steps;
    }
};