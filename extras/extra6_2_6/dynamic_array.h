#ifndef DYNAMIC_ARRAY_h
#define DYNAMIC_ARRAY_h
template <class T>
class dynamic_array{
    private:
        int size;
        T *element;
        int top;
    public:
        dynamic_array(int=10);
        ~dynamic_array();
        void setrand();
        int listsize();
        void print();
        bool is_empty();
        bool is_full();
        void append(T elem);
        int search(T elem);
        void insert_at(int index, T elem);
        void remove_at(int index);



};
#endif