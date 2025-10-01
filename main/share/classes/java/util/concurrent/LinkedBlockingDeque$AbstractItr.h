#ifndef _java_util_concurrent_LinkedBlockingDeque$AbstractItr_h_
#define _java_util_concurrent_LinkedBlockingDeque$AbstractItr_h_
//$ class java.util.concurrent.LinkedBlockingDeque$AbstractItr
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

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
		namespace function {
			class Consumer;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class LinkedBlockingDeque$AbstractItr : public ::java::util::Iterator {
	$class(LinkedBlockingDeque$AbstractItr, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	LinkedBlockingDeque$AbstractItr();
	void init$(::java::util::concurrent::LinkedBlockingDeque* this$0);
	virtual ::java::util::concurrent::LinkedBlockingDeque$Node* firstNode() {return nullptr;}
	virtual void forEachRemaining(::java::util::function::Consumer* action) override;
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual ::java::util::concurrent::LinkedBlockingDeque$Node* nextNode(::java::util::concurrent::LinkedBlockingDeque$Node* n) {return nullptr;}
	virtual void remove() override;
	::java::util::concurrent::LinkedBlockingDeque$Node* succ(::java::util::concurrent::LinkedBlockingDeque$Node* p);
	::java::util::concurrent::LinkedBlockingDeque* this$0 = nullptr;
	::java::util::concurrent::LinkedBlockingDeque$Node* next$ = nullptr;
	$Object* nextItem = nullptr;
	::java::util::concurrent::LinkedBlockingDeque$Node* lastRet = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_LinkedBlockingDeque$AbstractItr_h_