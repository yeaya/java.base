#ifndef _java_util_Spliterators$DoubleIteratorSpliterator_h_
#define _java_util_Spliterators$DoubleIteratorSpliterator_h_
//$ class java.util.Spliterators$DoubleIteratorSpliterator
//$ extends java.util.Spliterator$OfDouble

#include <java/util/Spliterator$OfDouble.h>
#include <java/util/Spliterators$IteratorSpliterator.h>

#pragma push_macro("BATCH_UNIT")
#undef BATCH_UNIT
#pragma push_macro("MAX_BATCH")
#undef MAX_BATCH

namespace java {
	namespace util {
		class Comparator;
		class PrimitiveIterator$OfDouble;
	}
}
namespace java {
	namespace util {
		namespace function {
			class DoubleConsumer;
		}
	}
}

namespace java {
	namespace util {

class $export Spliterators$DoubleIteratorSpliterator : public ::java::util::Spliterator$OfDouble {
	$class(Spliterators$DoubleIteratorSpliterator, $NO_CLASS_INIT, ::java::util::Spliterator$OfDouble)
public:
	Spliterators$DoubleIteratorSpliterator();
	using ::java::util::Spliterator$OfDouble::forEachRemaining;
	void init$(::java::util::PrimitiveIterator$OfDouble* iterator, int64_t size, int32_t characteristics);
	void init$(::java::util::PrimitiveIterator$OfDouble* iterator, int32_t characteristics);
	virtual int32_t characteristics() override;
	virtual int64_t estimateSize() override;
	virtual void forEachRemaining(::java::util::function::DoubleConsumer* action) override;
	virtual void forEachRemaining(Object$* action) override;
	virtual ::java::util::Comparator* getComparator() override;
	using ::java::util::Spliterator$OfDouble::tryAdvance;
	virtual bool tryAdvance(::java::util::function::DoubleConsumer* action) override;
	virtual bool tryAdvance(Object$* action) override;
	virtual ::java::util::Spliterator$OfDouble* trySplit() override;
	static const int32_t BATCH_UNIT = ::java::util::Spliterators$IteratorSpliterator::BATCH_UNIT;
	static const int32_t MAX_BATCH = ::java::util::Spliterators$IteratorSpliterator::MAX_BATCH;
	::java::util::PrimitiveIterator$OfDouble* it = nullptr;
	int32_t characteristics$ = 0;
	int64_t est = 0;
	int32_t batch = 0;
};

	} // util
} // java

#pragma pop_macro("BATCH_UNIT")
#pragma pop_macro("MAX_BATCH")

#endif // _java_util_Spliterators$DoubleIteratorSpliterator_h_