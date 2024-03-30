//#include <iostream>  
//#include <list>  
//#include <vector>  
//const int MAX = 11;       
//int k(int key) {
//    return key % MAX;
//}
//class HashTable {
//private:
//    std::vector<std::list<int>> table;
//
//public:
//    HashTable() :table(MAX){
//    }
//    void insert(int key) {
//        int index = k(key);
//        table[index].push_back(key);
//    }
//    bool remove(int key) {
//        int index = k(key);
//        auto& tong = table[index];
//        auto it = std::find(tong.begin(), tong.end(), key);
//        if (it != tong.end()) {
//            tong.erase(it);
//            return 1;
//        }
//        return 0;
//    };
//    void print()
//    {
//        for (int i = 0; i < MAX; ++i) {
//            std::cout << i << ": ";
//            for (auto it = table[i].begin(); it != table[i].end(); ++it) {
//                std::cout << *it << " ";
//            }
//            std::cout << std::endl;
//        }
//    }
//};
//int main()
//{
//    HashTable t;
//    t.insert(11);
//    t.insert(22);
//    t.insert(37);
//    t.insert(92);
//    t.print();
//    t.remove(11);
//    t.print();
//    return 0;
//}
