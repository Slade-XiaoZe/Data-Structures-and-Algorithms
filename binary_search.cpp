
// 寻找指定元素并返回它的索引
int BinarySearch(vector<int> vec, int elem) {
    if (vec.size() < 1) {
        return -1;
    }
    int left = 0;
    int right = vec.size() - 1;
    int mid;
    while (left <= right) {
        mid = left + ((right - left) >> 1);
        if (vec[mid] == elem) {
            return mid;
        } else if (vec[mid] > elem) {
            right = mid - 1;
        } else if (vec[mid] < elem) {
            left = mid + 1;
        }
    }
    return -1;
}

// 寻找第一个 >= elem 的元素
int BinarySearch(vector<int> vec, int elem) {
    int n = vec.size();
    int left = 0;
    int right = n - 1;
    int ans = -1;
    while (left <= right) {
        int middle = left + (right - left) / 2;
        if (vec[middle] < elem) {
            left = middle + 1;
        } else if (vec[middle] >= elem) {
            right = middle - 1;
            ans = middle;
        }
    }
    return ans;
}

/*
查找最后一个 <= elem 的元素
*/
int BinarySearch(vector<int> vec, int elem) {
    int n = vec.size();
    int left = 0;
    int right = n - 1;
    int ans = -1;
    while (left <= right) {
        int middle = (left + right) / 2;
        if (vec[middle] <= elem) {
            left = middle + 1;
            ans = middle;
        } else if (vec[middle] > elem) {
            right = middle - 1;
        }
    }
    return ans;
}