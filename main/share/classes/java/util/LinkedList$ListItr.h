#ifndef _java_util_LinkedList$ListItr_h_
#define _java_util_LinkedList$ListItr_h_
//$ class java.util.LinkedList$ListItr
//$ extends java.util.ListIterator

#include <java/util/ListIterator.h>

namespace java {
	namespace util {
		class LinkedList;
		class LinkedList$Node;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Consumer;
		}
	}
}

namespace java {
	namespace util {

class LinkedList$ListItr : public ::java::util::ListIterator {
	$class(LinkedList$ListItr, $NO_CLASS_INIT, ::java::util::ListIterator)
public:
	LinkedList$ListItr();
	void init$(::java::util::LinkedList* this$0, int32_t index);
	virtual void add(Object$* e) override;
	void checkForComodification();
	virtual void forEachRemaining(::java::util::function::Consumer* action) override;
	virtual bool hasNext() override;
	virtual bool hasPrevious() override;
	virtual $Object* next() override;
	virtual int32_t nextIndex() override;
	virtual $Object* previous() override;
	virtual int32_t previousIndex() override;
	virtual void remove() override;
	virtual void set(Object$* e) override;
	::java::util::LinkedList* this$0 = nullptr;
	::java::util::LinkedList$Node* lastReturned = nullptr;
	::java::util::LinkedList$Node* next$ = nullptr;
	int32_t nextIndex$ = 0;
	int32_t expectedModCount = 0;
};

	} // util
} // java

#endif // _java_util_LinkedList$ListItr_h_