********************** Template Functions *********************

A template variable is defined by delcarin it before the beginning of a class or function:

Template variables are checked at compile time, so errors are caught before running the program

template <typename T>
class List{
    Private:
        T data_;
}

template < typename T>
int max(T a, T b){
    if (a>b) {return a;}
    return b;
}