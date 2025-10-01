#ifndef _java_util_concurrent_ConcurrentHashMap$Segment_h_
#define _java_util_concurrent_ConcurrentHashMap$Segment_h_
//$ class java.util.concurrent.ConcurrentHashMap$Segment
//$ extends java.util.concurrent.locks.ReentrantLock

#include <java/util/concurrent/locks/ReentrantLock.h>

namespace java {
	namespace util {
		namespace concurrent {

class $import ConcurrentHashMap$Segment : public ::java::util::concurrent::locks::ReentrantLock {
	$class(ConcurrentHashMap$Segment, $PRELOAD | $NO_CLASS_INIT, ::java::util::concurrent::locks::ReentrantLock)
public:
	ConcurrentHashMap$Segment();
	void init$(float lf);
	static const int64_t serialVersionUID = (int64_t)0x1F364C905893293D;
	float loadFactor = 0.0;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_ConcurrentHashMap$Segment_h_