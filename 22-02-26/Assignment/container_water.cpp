class Solution {
public:
    int maxArea(vector<int>& height) {
       int  l=0,r=height.size()-1;
        int current_Area,max_area=0;
        while(l<r){
           int min_height=min(height[l],height[r]);
            int width=r-l;
            current_Area=min_height*width;
            max_area=max(current_Area,max_area);
            if(height[l]<height[r]){
                l++;
            }else if(height[l]>height[r]){
                r--;
            }else{
                l++;
                r--;
            }
            
        }
        return max_area;
        
    }
};