#ifndef _java_util_concurrent_ConcurrentLinkedDeque$DescendingItr_h_
#define _java_util_concurrent_ConcurrentLinkedDeque$DescendingItr_h_
//$ class java.util.concurrent.ConcurrentLinkedDeque$DescendingItr
//$ extends java.util.concurrent.ConcurrentLinkedDeque$AbstractItr

#include <java/util/concurrent/ConcurrentLinkedDeque$AbstractItr.h>

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

class ConcurrentLinkedDeque$DescendingItr : public ::java::util::concurrent::ConcurrentLinkedDeque$AbstractItr {
	$class(ConcurrentLinkedDeque$DescendingItr, $NO_CLASS_INIT, ::java::util::concurrent::ConcurrentLinkedDeque$AbstractItr)
public:
	ConcurrentLinkedDeque$DescendingItr();
	void init$(::java::util::concurrent::ConcurrentLinkedDeque* this$0);
	virtual ::java::util::concurrent::ConcurrentLinkedDeque$Node* nextNode(::java::util::concurrent::ConcurrentLinkedDeque$Node* p) override;
	virtual ::java::util::concurrent::ConcurrentLinkedDeque$Node* startNode() override;
	::java::util::concurrent::ConcurrentLinkedDeque* this$0 = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_ConcurrentLinkedDeque$DescendingItr_h_