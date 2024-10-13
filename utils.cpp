
/*
打印容器中的全部元素
 */
template<typename T>
void PrintVector(const vector<T> &vec) {
    for (const auto &elem: vec) {
        cout << elem << " ";
    }
    cout << endl;
}
