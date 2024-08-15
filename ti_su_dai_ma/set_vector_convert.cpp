//  vector -> set
unordered_set<int>set(vec.begin(), vec.end());
// 反序
unordered_set<int>set(vec.rbegin(), vec.rend());
// set -> vector
vec.assign(set.begin(), set.end());
// set没有rbegin() rend()等反向迭代器