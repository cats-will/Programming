#include <iterator>

namespace catswill {
    template <class Iterator, class Predicate>
    bool is_palindrome(Iterator begin, Iterator end, Predicate pred) {
        if(begin == end || begin == --end)
            return true;
        for(; begin != end; ++begin, --end) {
            if(!pred(*begin, *end))
                return false;
            if(std::next(begin) == end)
                return true;
        }
        return true;
    }

    template <class Iterator, class Predicate>
    bool all_of(Iterator begin, Iterator end, Predicate pred) {
        for(; begin != end; ++begin) {
            if (!pred(*begin)) {
                return false;
            }
        }
        return true;
    }

    template<class Iterator, class Compare>
    bool is_sorted(Iterator begin, Iterator end, Compare cmp) {
        ++begin;
        for(; begin != end; ++begin) {
            if(!cmp(*std::prev(begin), *begin))
                return false;
        }
        return true;
    }
}
