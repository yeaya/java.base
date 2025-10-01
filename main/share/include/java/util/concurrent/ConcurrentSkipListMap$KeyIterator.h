#ifndef _java_util_concurrent_ConcurrentSkipListMap$KeyIterator_h_
#define _java_util_concurrent_ConcurrentSkipListMap$KeyIterator_h_
//$ class java.util.concurrent.ConcurrentSkipListMap$KeyIterator
//$ extends java.util.concurrent.ConcurrentSkipListMap$Iter

#include <java/util/concurrent/ConcurrentSkipListMap$Iter.h>

namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentSkipListMap;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $import ConcurrentSkipListMap$KeyIterator : public ::java::util::concurrent::ConcurrentSkipListMap$Iter {
	$class(ConcurrentSkipListMap$KeyIterator, $NO_CLASS_INIT, ::java::util::concurrent::ConcurrentSkipListMap$Iter)
public:
	ConcurrentSkipListMap$KeyIterator();
	void init$(::java::util::concurrent::ConcurrentSkipListMap* this$0);
	virtual $Object* next() override;
	::java::util::concurrent::ConcurrentSkipListMap* this$0 = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_ConcurrentSkipListMap$KeyIterator_h_