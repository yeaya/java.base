#ifndef _java_util_concurrent_LinkedBlockingQueue$Itr_h_
#define _java_util_concurrent_LinkedBlockingQueue$Itr_h_
//$ class java.util.concurrent.LinkedBlockingQueue$Itr
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace java {
	namespace util {
		namespace concurrent {
			class LinkedBlockingQueue;
			class LinkedBlockingQueue$Node;
		}
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
		namespace concurrent {

class LinkedBlockingQueue$Itr : public ::java::util::Iterator {
	$class(LinkedBlockingQueue$Itr, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	LinkedBlockingQueue$Itr();
	void init$(::java::util::concurrent::LinkedBlockingQueue* this$0);
	virtual void forEachRemaining(::java::util::function::Consumer* action) override;
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual void remove() override;
	::java::util::concurrent::LinkedBlockingQueue* this$0 = nullptr;
	::java::util::concurrent::LinkedBlockingQueue$Node* next$ = nullptr;
	$Object* nextItem = nullptr;
	::java::util::concurrent::LinkedBlockingQueue$Node* lastRet = nullptr;
	::java::util::concurrent::LinkedBlockingQueue$Node* ancestor = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_LinkedBlockingQueue$Itr_h_