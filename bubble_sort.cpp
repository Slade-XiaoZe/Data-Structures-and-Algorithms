
/*
相邻的元素两两进行比较，每次循环将当前未排序部分中的最大元素移动到末尾。
j < n - i - 1 的解释：
-i 表示已经排好序的部分无需再进行比较
-1 用于防止 j + 1 导致的数组越界
*/
void BubbleSort(vector<int> &nums) {
    if (nums.size() < 2) {
        return;
    }
    int n = nums.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (nums[j] > nums[j + 1]) {
                swap(nums[j], nums[j + 1]);
            }
        }
    }
}

/*
如果容器经过两轮循环就已经排好序，以上代码仍会继续执行多次不必要的循环。
通过设置检查机制，如果没有发生交换，就提前终止剩下的排序步骤。
*/
void BubbleSort(vector<int> &nums) {
    if (nums.size() < 2) {
        return;
    }
    int n = nums.size();
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (nums[j] > nums[j + 1]) {
                swap(nums[j], nums[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) {
            return;
        }
    }
}