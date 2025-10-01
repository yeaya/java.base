#ifndef _java_util_concurrent_ConcurrentSkipListMap$SubMap$SubMapEntryIterator_h_
#define _java_util_concurrent_ConcurrentSkipListMap$SubMap$SubMapEntryIterator_h_
//$ class java.util.concurrent.ConcurrentSkipListMap$SubMap$SubMapEntryIterator
//$ extends java.util.concurrent.ConcurrentSkipListMap$SubMap$SubMapIter

#include <java/util/concurrent/ConcurrentSkipListMap$SubMap$SubMapIter.h>

namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentSkipListMap$SubMap;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $import ConcurrentSkipListMap$SubMap$SubMapEntryIterator : public ::java::util::concurrent::ConcurrentSkipListMap$SubMap$SubMapIter {
	$class(ConcurrentSkipListMap$SubMap$SubMapEntryIterator, $NO_CLASS_INIT, ::java::util::concurrent::ConcurrentSkipListMap$SubMap$SubMapIter)
public:
	ConcurrentSkipListMap$SubMap$SubMapEntryIterator();
	void init$(::java::util::concurrent::ConcurrentSkipListMap$SubMap* this$0);
	virtual int32_t characteristics() override;
	virtual $Object* next() override;
	::java::util::concurrent::ConcurrentSkipListMap$SubMap* this$0 = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_ConcurrentSkipListMap$SubMap$SubMapEntryIterator_h_