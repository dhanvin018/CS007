int min(int a, int b) {
    return a < b ? a : b;
}

int maxArea(int height[], int size) {
    int l = 0, r = size - 1;
    int max_area = 0;
    while (l != r) {
        int area = min(height[l], height[r]) * (r - l);
        max_area = area > max_area ? area : max_area;
        if (height[l] < height[r]) {
            l++;
        } else {
            r--;
        }
    }
    return max_area;
}