#ifndef _java_util_concurrent_ArrayBlockingQueue$Itrs$Node_h_
#define _java_util_concurrent_ArrayBlockingQueue$Itrs$Node_h_
//$ class java.util.concurrent.ArrayBlockingQueue$Itrs$Node
//$ extends java.lang.ref.WeakReference

#include <java/lang/ref/WeakReference.h>

namespace java {
	namespace util {
		namespace concurrent {
			class ArrayBlockingQueue$Itr;
			class ArrayBlockingQueue$Itrs;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class ArrayBlockingQueue$Itrs$Node : public ::java::lang::ref::WeakReference {
	$class(ArrayBlockingQueue$Itrs$Node, $NO_CLASS_INIT, ::java::lang::ref::WeakReference)
public:
	ArrayBlockingQueue$Itrs$Node();
	void init$(::java::util::concurrent::ArrayBlockingQueue$Itrs* this$1, ::java::util::concurrent::ArrayBlockingQueue$Itr* iterator, ::java::util::concurrent::ArrayBlockingQueue$Itrs$Node* next);
	::java::util::concurrent::ArrayBlockingQueue$Itrs* this$1 = nullptr;
	::java::util::concurrent::ArrayBlockingQueue$Itrs$Node* next = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_ArrayBlockingQueue$Itrs$Node_h_