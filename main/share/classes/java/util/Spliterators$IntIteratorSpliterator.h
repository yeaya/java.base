#ifndef _java_util_Spliterators$IntIteratorSpliterator_h_
#define _java_util_Spliterators$IntIteratorSpliterator_h_
//$ class java.util.Spliterators$IntIteratorSpliterator
//$ extends java.util.Spliterator$OfInt

#include <java/util/Spliterator$OfInt.h>
#include <java/util/Spliterators$IteratorSpliterator.h>

#pragma push_macro("BATCH_UNIT")
#undef BATCH_UNIT
#pragma push_macro("MAX_BATCH")
#undef MAX_BATCH

namespace java {
	namespace util {
		class Comparator;
		class PrimitiveIterator$OfInt;
	}
}
namespace java {
	namespace util {
		namespace function {
			class IntConsumer;
		}
	}
}

namespace java {
	namespace util {

class $export Spliterators$IntIteratorSpliterator : public ::java::util::Spliterator$OfInt {
	$class(Spliterators$IntIteratorSpliterator, $NO_CLASS_INIT, ::java::util::Spliterator$OfInt)
public:
	Spliterators$IntIteratorSpliterator();
	using ::java::util::Spliterator$OfInt::forEachRemaining;
	void init$(::java::util::PrimitiveIterator$OfInt* iterator, int64_t size, int32_t characteristics);
	void init$(::java::util::PrimitiveIterator$OfInt* iterator, int32_t characteristics);
	virtual int32_t characteristics() override;
	virtual int64_t estimateSize() override;
	virtual void forEachRemaining(::java::util::function::IntConsumer* action) override;
	virtual void forEachRemaining(Object$* action) override;
	virtual ::java::util::Comparator* getComparator() override;
	using ::java::util::Spliterator$OfInt::tryAdvance;
	virtual bool tryAdvance(::java::util::function::IntConsumer* action) override;
	virtual bool tryAdvance(Object$* action) override;
	virtual ::java::util::Spliterator$OfInt* trySplit() override;
	static const int32_t BATCH_UNIT = ::java::util::Spliterators$IteratorSpliterator::BATCH_UNIT;
	static const int32_t MAX_BATCH = ::java::util::Spliterators$IteratorSpliterator::MAX_BATCH;
	::java::util::PrimitiveIterator$OfInt* it = nullptr;
	int32_t characteristics$ = 0;
	int64_t est = 0;
	int32_t batch = 0;
};

	} // util
} // java

#pragma pop_macro("BATCH_UNIT")
#pragma pop_macro("MAX_BATCH")

#endif // _java_util_Spliterators$IntIteratorSpliterator_h_