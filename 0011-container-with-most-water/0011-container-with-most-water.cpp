class Solution {
public:
    int maxArea(vector<int>& t) {
        int i=0;
        int j =t.size()-1;
        int maxarea=0;
        while(i <= j){
            int curr  = (min(t[i],t[j]) *  (j-i));
            maxarea = max(curr , maxarea);
            if(t[i]<t[j]){
                i++;
            }else{
                j--;
            }
        }
        return maxarea;
    }
};