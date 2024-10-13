
/*
从待排序的数组中从前往后找，找到最小的元素，然后和第一个元素交换。
*/
void SelectionSort(vector<int> &nums) {
    if (nums.size() < 2) {
        return;
    }
    int n = nums.size();
    for (int i = 0; i < n - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (nums[j] < nums[min_index]) {
                min_index = j;
            }
        }
        if (min_index != i) {
            swap(nums[min_index], nums[i]);
        }
    }
}