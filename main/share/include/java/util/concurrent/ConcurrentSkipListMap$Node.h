#ifndef _java_util_concurrent_ConcurrentSkipListMap$Node_h_
#define _java_util_concurrent_ConcurrentSkipListMap$Node_h_
//$ class java.util.concurrent.ConcurrentSkipListMap$Node
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace concurrent {

class $import ConcurrentSkipListMap$Node : public ::java::lang::Object {
	$class(ConcurrentSkipListMap$Node, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ConcurrentSkipListMap$Node();
	void init$(Object$* key, Object$* value, ::java::util::concurrent::ConcurrentSkipListMap$Node* next);
	$Object* key = nullptr;
	$Object* val = nullptr;
	::java::util::concurrent::ConcurrentSkipListMap$Node* next = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_ConcurrentSkipListMap$Node_h_