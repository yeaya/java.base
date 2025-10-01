#ifndef _java_util_Spliterators$IteratorSpliterator_h_
#define _java_util_Spliterators$IteratorSpliterator_h_
//$ class java.util.Spliterators$IteratorSpliterator
//$ extends java.util.Spliterator

#include <java/util/Spliterator.h>

#pragma push_macro("BATCH_UNIT")
#undef BATCH_UNIT
#pragma push_macro("MAX_BATCH")
#undef MAX_BATCH

namespace java {
	namespace util {
		class Collection;
		class Comparator;
		class Iterator;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Consumer;
		}
	}
}

namespace java {
	namespace util {

class $import Spliterators$IteratorSpliterator : public ::java::util::Spliterator {
	$class(Spliterators$IteratorSpliterator, $PRELOAD | $NO_CLASS_INIT, ::java::util::Spliterator)
public:
	Spliterators$IteratorSpliterator();
	void init$(::java::util::Collection* collection, int32_t characteristics);
	void init$(::java::util::Iterator* iterator, int64_t size, int32_t characteristics);
	void init$(::java::util::Iterator* iterator, int32_t characteristics);
	virtual int32_t characteristics() override;
	virtual int64_t estimateSize() override;
	virtual void forEachRemaining(::java::util::function::Consumer* action) override;
	virtual ::java::util::Comparator* getComparator() override;
	virtual bool tryAdvance(::java::util::function::Consumer* action) override;
	virtual ::java::util::Spliterator* trySplit() override;
	static const int32_t BATCH_UNIT = 1024; // 1 << 10
	static const int32_t MAX_BATCH = 33554432; // 1 << 25
	::java::util::Collection* collection = nullptr;
	::java::util::Iterator* it = nullptr;
	int32_t characteristics$ = 0;
	int64_t est = 0;
	int32_t batch = 0;
};

	} // util
} // java

#pragma pop_macro("BATCH_UNIT")
#pragma pop_macro("MAX_BATCH")

#endif // _java_util_Spliterators$IteratorSpliterator_h_