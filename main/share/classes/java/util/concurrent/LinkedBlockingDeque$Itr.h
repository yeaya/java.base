#ifndef _java_util_concurrent_LinkedBlockingDeque$Itr_h_
#define _java_util_concurrent_LinkedBlockingDeque$Itr_h_
//$ class java.util.concurrent.LinkedBlockingDeque$Itr
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

class LinkedBlockingDeque$Itr : public ::java::util::concurrent::LinkedBlockingDeque$AbstractItr {
	$class(LinkedBlockingDeque$Itr, $NO_CLASS_INIT, ::java::util::concurrent::LinkedBlockingDeque$AbstractItr)
public:
	LinkedBlockingDeque$Itr();
	void init$(::java::util::concurrent::LinkedBlockingDeque* this$0);
	virtual ::java::util::concurrent::LinkedBlockingDeque$Node* firstNode() override;
	virtual ::java::util::concurrent::LinkedBlockingDeque$Node* nextNode(::java::util::concurrent::LinkedBlockingDeque$Node* n) override;
	::java::util::concurrent::LinkedBlockingDeque* this$0 = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_LinkedBlockingDeque$Itr_h_