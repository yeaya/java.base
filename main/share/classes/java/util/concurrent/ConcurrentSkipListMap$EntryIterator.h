#ifndef _java_util_concurrent_ConcurrentSkipListMap$EntryIterator_h_
#define _java_util_concurrent_ConcurrentSkipListMap$EntryIterator_h_
//$ class java.util.concurrent.ConcurrentSkipListMap$EntryIterator
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

class $export ConcurrentSkipListMap$EntryIterator : public ::java::util::concurrent::ConcurrentSkipListMap$Iter {
	$class(ConcurrentSkipListMap$EntryIterator, $NO_CLASS_INIT, ::java::util::concurrent::ConcurrentSkipListMap$Iter)
public:
	ConcurrentSkipListMap$EntryIterator();
	void init$(::java::util::concurrent::ConcurrentSkipListMap* this$0);
	virtual $Object* next() override;
	::java::util::concurrent::ConcurrentSkipListMap* this$0 = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_ConcurrentSkipListMap$EntryIterator_h_