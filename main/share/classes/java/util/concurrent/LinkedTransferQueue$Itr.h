#ifndef _java_util_concurrent_LinkedTransferQueue$Itr_h_
#define _java_util_concurrent_LinkedTransferQueue$Itr_h_
//$ class java.util.concurrent.LinkedTransferQueue$Itr
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace java {
	namespace util {
		namespace concurrent {
			class LinkedTransferQueue;
			class LinkedTransferQueue$Node;
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

class $export LinkedTransferQueue$Itr : public ::java::util::Iterator {
	$class(LinkedTransferQueue$Itr, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	LinkedTransferQueue$Itr();
	void init$(::java::util::concurrent::LinkedTransferQueue* this$0);
	void advance(::java::util::concurrent::LinkedTransferQueue$Node* pred);
	virtual void forEachRemaining(::java::util::function::Consumer* action) override;
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual void remove() override;
	::java::util::concurrent::LinkedTransferQueue* this$0 = nullptr;
	::java::util::concurrent::LinkedTransferQueue$Node* nextNode = nullptr;
	$Object* nextItem = nullptr;
	::java::util::concurrent::LinkedTransferQueue$Node* lastRet = nullptr;
	::java::util::concurrent::LinkedTransferQueue$Node* ancestor = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_LinkedTransferQueue$Itr_h_