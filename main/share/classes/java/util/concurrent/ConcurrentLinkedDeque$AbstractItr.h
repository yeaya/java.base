#ifndef _java_util_concurrent_ConcurrentLinkedDeque$AbstractItr_h_
#define _java_util_concurrent_ConcurrentLinkedDeque$AbstractItr_h_
//$ class java.util.concurrent.ConcurrentLinkedDeque$AbstractItr
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentLinkedDeque;
			class ConcurrentLinkedDeque$Node;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class ConcurrentLinkedDeque$AbstractItr : public ::java::util::Iterator {
	$class(ConcurrentLinkedDeque$AbstractItr, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	ConcurrentLinkedDeque$AbstractItr();
	void init$(::java::util::concurrent::ConcurrentLinkedDeque* this$0);
	void advance();
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual ::java::util::concurrent::ConcurrentLinkedDeque$Node* nextNode(::java::util::concurrent::ConcurrentLinkedDeque$Node* p) {return nullptr;}
	virtual void remove() override;
	virtual ::java::util::concurrent::ConcurrentLinkedDeque$Node* startNode() {return nullptr;}
	::java::util::concurrent::ConcurrentLinkedDeque* this$0 = nullptr;
	::java::util::concurrent::ConcurrentLinkedDeque$Node* nextNode$ = nullptr;
	$Object* nextItem = nullptr;
	::java::util::concurrent::ConcurrentLinkedDeque$Node* lastRet = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_ConcurrentLinkedDeque$AbstractItr_h_