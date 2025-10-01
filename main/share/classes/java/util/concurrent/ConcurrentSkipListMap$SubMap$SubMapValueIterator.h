#ifndef _java_util_concurrent_ConcurrentSkipListMap$SubMap$SubMapValueIterator_h_
#define _java_util_concurrent_ConcurrentSkipListMap$SubMap$SubMapValueIterator_h_
//$ class java.util.concurrent.ConcurrentSkipListMap$SubMap$SubMapValueIterator
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

class $export ConcurrentSkipListMap$SubMap$SubMapValueIterator : public ::java::util::concurrent::ConcurrentSkipListMap$SubMap$SubMapIter {
	$class(ConcurrentSkipListMap$SubMap$SubMapValueIterator, $NO_CLASS_INIT, ::java::util::concurrent::ConcurrentSkipListMap$SubMap$SubMapIter)
public:
	ConcurrentSkipListMap$SubMap$SubMapValueIterator();
	void init$(::java::util::concurrent::ConcurrentSkipListMap$SubMap* this$0);
	virtual int32_t characteristics() override;
	virtual $Object* next() override;
	::java::util::concurrent::ConcurrentSkipListMap$SubMap* this$0 = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_ConcurrentSkipListMap$SubMap$SubMapValueIterator_h_