#ifndef _java_util_Spliterators$EmptySpliterator_h_
#define _java_util_Spliterators$EmptySpliterator_h_
//$ class java.util.Spliterators$EmptySpliterator
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Spliterator;
	}
}

namespace java {
	namespace util {

class Spliterators$EmptySpliterator : public ::java::lang::Object {
	$class(Spliterators$EmptySpliterator, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Spliterators$EmptySpliterator();
	void init$();
	virtual int32_t characteristics();
	virtual int64_t estimateSize();
	virtual void forEachRemaining(Object$* consumer);
	virtual bool tryAdvance(Object$* consumer);
	virtual ::java::util::Spliterator* trySplit();
};

	} // util
} // java

#endif // _java_util_Spliterators$EmptySpliterator_h_