#ifndef _java_util_concurrent_LinkedBlockingDeque$DescendingItr_h_
#define _java_util_concurrent_LinkedBlockingDeque$DescendingItr_h_
//$ class java.util.concurrent.LinkedBlockingDeque$DescendingItr
//$ extends java.util.concurrent.LinkedBlockingDeque$AbstractItr

#include <java/util/concurrent/LinkedBlockingDeque$AbstractItr.h>

namespace java {
	namespace util {
		namespace concurrent {
			class LinkedBlockingDeque;
			class LinkedBlockingDeque$Node;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class LinkedBlockingDeque$DescendingItr : public ::java::util::concurrent::LinkedBlockingDeque$AbstractItr {
	$class(LinkedBlockingDeque$DescendingItr, $NO_CLASS_INIT, ::java::util::concurrent::LinkedBlockingDeque$AbstractItr)
public:
	LinkedBlockingDeque$DescendingItr();
	void init$(::java::util::concurrent::LinkedBlockingDeque* this$0);
	virtual ::java::util::concurrent::LinkedBlockingDeque$Node* firstNode() override;
	virtual ::java::util::concurrent::LinkedBlockingDeque$Node* nextNode(::java::util::concurrent::LinkedBlockingDeque$Node* n) override;
	::java::util::concurrent::LinkedBlockingDeque* this$0 = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_LinkedBlockingDeque$DescendingItr_h_