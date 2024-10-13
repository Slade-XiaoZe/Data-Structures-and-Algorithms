
/*
就像打扑克牌，左手的牌已经从小到大排好序，而右手刚摸到一张新牌。
现在要把这张新牌插入到左手的有序手牌中。
你先把新牌插到最右边的位置，然后从右往左逐一比较。
如果左手的牌比新牌大，就将它们交换。这样反复进行两两比较，直到找不到比新牌更大的牌，或者已经比较到手牌的最左边。
 */
void InsertionSort1(vector<int> &nums) {
    if (nums.size() < 2) {
        return;
    }
    int n = nums.size();
    for (int i = 1; i < n; i++) {
        for (int j = i; j - 1 >= 0 && nums[j - 1] > nums[j]; --j) {
            swap(nums[j], nums[j - 1]);
        }
    }
}

/*
通过减少交换次数来提高效率。
如果前一个元素大于待插入的元素，就将前一个元素向后挪动，为待插入的元素腾出位置，直到最后找到合适的插入位置再进行插入。
 */
void InsertionSort2(vector<int> &nums) {
    if (nums.size() < 2) {
        return;
    }
    int n = nums.size();
    for (int i = 1; i < n; i++) {
        int num = nums[i];
        int j = i;
        while (j - 1 >= 0 && nums[j - 1] > num) {
            nums[j] = nums[j - 1];
            j--;
        }
        nums[j] = num;
    }
}
