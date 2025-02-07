/*You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

Find two lines that together with the x-axis form a container, such that the container contains the most water.

Return the maximum amount of water a container can store.

Notice that you may not slant the container.*/

//(5kYU) Container With Most Water

 int maxArea(vector<int>& height) {
        int i =0; int j = height.size()-1; int maximum =0;

        while(i < j){
            int area = (j-i) * min(height[j], height[i]);
            maximum = max(area, maximum);

            if(height[i] < height[j]) i++;
            else j--;
        }

        return maximum;
    }