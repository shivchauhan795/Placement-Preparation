// https://leetcode.com/problems/maximal-rectangle/
// https://practice.geeksforgeeks.org/problems/max-rectangle/1


// the logic and code is same but in gfg the array elements are int but in leetcode it is in char

// gfg solution is submitted
// leetcode solution doesn't pass one testcase


// for leetcode
/*
vector<int> nextSmallerElement(vector<int> heights, int n){
        stack<int> st;
        st.push(-1);
        vector<int> ans(n);
        for(int i = n - 1; i >= 0; i--){
            while(st.top() != -1 && heights[st.top()] >= heights[i]){
                st.pop();
            }
            ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }

    vector<int> prevSmallerElement(vector<int> heights, int n){
        stack<int> st;
        st.push(-1);
        vector<int> ans(n);
        for(int i = 0; i < n; i++){
            while(st.top() != -1 && heights[st.top()] >= heights[i]){
                st.pop();
            }
            ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }
    int largestArea(vector<int> heights, int n){
        vector<int> next(n);
        next = nextSmallerElement(heights, n);
        vector<int> prev(n);
        prev = prevSmallerElement(heights, n);

        int area = INT_MIN;
        for(int i = 0; i < n; i++){
            int l = heights[i];
            if(next[i] == -1){
                next[i] = n;
            }
            int b = next[i] - prev[i] - 1;
            
            int newArea = l*b;
            area = max(area, newArea);
        }
        return area;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n = matrix.size();  // no of rows
        int m = matrix[0].size();   // no of cols

        vector<vector<int>> intMatrix(n , vector<int> (m, 0));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(matrix[i][j] == '0')
                    intMatrix[i][j] = 0;
                else
                    intMatrix[i][j] = 1;
            }
        }

        int area = largestArea(intMatrix[0], m);

        for(int i = 1; i < n; i++){
            for(int j = 0; j < m; j++){
                if(intMatrix[i][j] != 0){
                    intMatrix[i][j] = intMatrix[i][j] + intMatrix[i-1][j];
                }
                else{
                    intMatrix[i][j] = 0;
                }
            }
            area = max(area, largestArea(intMatrix[i], m));
        }
        return area;
    }
*/

// for gfg

/*
vector<int> nextSmallerElement(int* heights, int n){
        stack<int> st;
        st.push(-1);
        vector<int> ans(n);
        for(int i = n - 1; i >= 0; i--){
            while(st.top() != -1 && heights[st.top()] >= heights[i]){
                st.pop();
            }
            ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }

    vector<int> prevSmallerElement(int* heights, int n){
        stack<int> st;
        st.push(-1);
        vector<int> ans(n);
        for(int i = 0; i < n; i++){
            while(st.top() != -1 && heights[st.top()] >= heights[i]){
                st.pop();
            }
            ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }
    int largestArea(int* heights, int n){
        vector<int> next(n);
        next = nextSmallerElement(heights, n);
        vector<int> prev(n);
        prev = prevSmallerElement(heights, n);

        int area = INT_MIN;
        for(int i = 0; i < n; i++){
            int l = heights[i];
            if(next[i] == -1){
                next[i] = n;
            }
            int b = next[i] - prev[i] - 1;
            
            int newArea = l*b;
            area = max(area, newArea);
        }
        return area;
    }
    int maxArea(int M[MAX][MAX], int n, int m) {

        int area = largestArea(M[0], m);

        for(int i = 1; i < n; i++){
            for(int j = 0; j < m; j++){
                if(M[i][j] != 0){
                    M[i][j] = M[i][j] + M[i-1][j];
                }
                else{
                    M[i][j] = 0;
                }
            }
            area = max(area, largestArea(M[i], m));
        }
        return area;
    }
*/