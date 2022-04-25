class PeekingIterator : public Iterator {
public:
    int next_val;
    bool iter_hasnext;
	PeekingIterator(const vector<int>& nums) : Iterator(nums) {
        iter_hasnext = Iterator:: hasNext();
        if(iter_hasnext){
            next_val = Iterator::next();
        }
	    // Initialize any member here.
	    // **DO NOT** save a copy of nums and manipulate it directly.
	    // You should only use the Iterator interface methods.
	}
	
    // Returns the next element in the iteration without advancing the iterator.
	int peek() {
        return next_val;
	}
	
	// hasNext() and next() should behave the same as in the Iterator interface.
	// Override them if needed.
	int next() {
	    int curr_next = next_val;
     iter_hasnext=Iterator::hasNext(); // change the iter_hasnext variable
	    if (iter_hasnext) 
            next_val = Iterator::next(); // change the next_val and move the iterator to next position
        return curr_next;
    }
	
	bool hasNext() const {
	    return iter_hasnext;
	}
};
