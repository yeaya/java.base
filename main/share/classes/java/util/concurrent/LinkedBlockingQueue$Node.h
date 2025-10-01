#ifndef _java_util_concurrent_LinkedBlockingQueue$Node_h_
#define _java_util_concurrent_LinkedBlockingQueue$Node_h_
//$ class java.util.concurrent.LinkedBlockingQueue$Node
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace concurrent {

class $export LinkedBlockingQueue$Node : public ::java::lang::Object {
	$class(LinkedBlockingQueue$Node, $NO_CLASS_INIT, ::java::lang::Object)
public:
	LinkedBlockingQueue$Node();
	void init$(Object$* x);
	$Object* item = nullptr;
	::java::util::concurrent::LinkedBlockingQueue$Node* next = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_LinkedBlockingQueue$Node_h_