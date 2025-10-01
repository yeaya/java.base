#ifndef _java_util_concurrent_ConcurrentLinkedQueue$Itr_h_
#define _java_util_concurrent_ConcurrentLinkedQueue$Itr_h_
//$ class java.util.concurrent.ConcurrentLinkedQueue$Itr
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentLinkedQueue;
			class ConcurrentLinkedQueue$Node;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class ConcurrentLinkedQueue$Itr : public ::java::util::Iterator {
	$class(ConcurrentLinkedQueue$Itr, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	ConcurrentLinkedQueue$Itr();
	void init$(::java::util::concurrent::ConcurrentLinkedQueue* this$0);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual void remove() override;
	::java::util::concurrent::ConcurrentLinkedQueue* this$0 = nullptr;
	::java::util::concurrent::ConcurrentLinkedQueue$Node* nextNode = nullptr;
	$Object* nextItem = nullptr;
	::java::util::concurrent::ConcurrentLinkedQueue$Node* lastRet = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_ConcurrentLinkedQueue$Itr_h_