#ifndef _java_util_LinkedList$DescendingIterator_h_
#define _java_util_LinkedList$DescendingIterator_h_
//$ class java.util.LinkedList$DescendingIterator
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace java {
	namespace util {
		class LinkedList;
		class LinkedList$ListItr;
	}
}

namespace java {
	namespace util {

class LinkedList$DescendingIterator : public ::java::util::Iterator {
	$class(LinkedList$DescendingIterator, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	LinkedList$DescendingIterator();
	void init$(::java::util::LinkedList* this$0);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual void remove() override;
	::java::util::LinkedList* this$0 = nullptr;
	::java::util::LinkedList$ListItr* itr = nullptr;
};

	} // util
} // java

#endif // _java_util_LinkedList$DescendingIterator_h_