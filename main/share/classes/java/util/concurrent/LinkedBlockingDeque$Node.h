#ifndef _java_util_concurrent_LinkedBlockingDeque$Node_h_
#define _java_util_concurrent_LinkedBlockingDeque$Node_h_
//$ class java.util.concurrent.LinkedBlockingDeque$Node
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace concurrent {

class $export LinkedBlockingDeque$Node : public ::java::lang::Object {
	$class(LinkedBlockingDeque$Node, $NO_CLASS_INIT, ::java::lang::Object)
public:
	LinkedBlockingDeque$Node();
	void init$(Object$* x);
	$Object* item = nullptr;
	::java::util::concurrent::LinkedBlockingDeque$Node* prev = nullptr;
	::java::util::concurrent::LinkedBlockingDeque$Node* next = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_LinkedBlockingDeque$Node_h_