
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