
template<class T>
void forwardly(T begin, T end) {
    while (begin != end) {
        std::cout << *begin++ << ", ";
    }
    std::cout << "\b\b  \n";
}