#ifndef _java_util_concurrent_ConcurrentSkipListMap$Index_h_
#define _java_util_concurrent_ConcurrentSkipListMap$Index_h_
//$ class java.util.concurrent.ConcurrentSkipListMap$Index
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentSkipListMap$Node;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $import ConcurrentSkipListMap$Index : public ::java::lang::Object {
	$class(ConcurrentSkipListMap$Index, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ConcurrentSkipListMap$Index();
	void init$(::java::util::concurrent::ConcurrentSkipListMap$Node* node, ::java::util::concurrent::ConcurrentSkipListMap$Index* down, ::java::util::concurrent::ConcurrentSkipListMap$Index* right);
	::java::util::concurrent::ConcurrentSkipListMap$Node* node = nullptr;
	::java::util::concurrent::ConcurrentSkipListMap$Index* down = nullptr;
	::java::util::concurrent::ConcurrentSkipListMap$Index* right = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_ConcurrentSkipListMap$Index_h_