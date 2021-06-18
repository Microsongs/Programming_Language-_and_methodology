class MyClass{
private:
    // 席の数
    int sit;
    // 机の数
    int table;
    // プロジェクタ
    int projector;
    // 黒板
    int blackboard;
public:
    // default constructor
    MyClass();
    // Overload
    MyClass(int sit, int table, int projector, int blackboard);
    void print();
};