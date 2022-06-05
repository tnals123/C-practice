class Node {
private:
	int elem;
	Node* prev;
	Node* next;
	friend class Iterator;
	friend class SequenceList;
};

class Iterator {
private:
	Node* itr_ptr;
	Iterator(Node* u);
public:
	int& operator*();
	bool operator==(const Iterator& p)const;
	bool operator!=(const Iterator& p)const;
	Iterator& operator++();
	Iterator& operator--();
	friend class SequenceList;
};

class SequenceList {
private:
	int size;
	Node* header;
	Node* trailer;
public:
	SequenceList();
	int returnSize() const;
	bool empty() const;
	void insert(const Iterator& itr, const int& e);
	void erase(const Iterator& itr);
	Iterator begin() const;
	Iterator end() const;
	Iterator atIndex(int i)const;
	int indexOf(const Iterator& itr)const;
};