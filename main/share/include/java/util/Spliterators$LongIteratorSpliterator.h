#ifndef _java_util_Spliterators$LongIteratorSpliterator_h_
#define _java_util_Spliterators$LongIteratorSpliterator_h_
//$ class java.util.Spliterators$LongIteratorSpliterator
//$ extends java.util.Spliterator$OfLong

#include <java/util/Spliterator$OfLong.h>

#pragma push_macro("BATCH_UNIT")
#undef BATCH_UNIT
#pragma push_macro("MAX_BATCH")
#undef MAX_BATCH

namespace java {
	namespace util {
		class Comparator;
		class PrimitiveIterator$OfLong;
	}
}
namespace java {
	namespace util {
		namespace function {
			class LongConsumer;
		}
	}
}

namespace java {
	namespace util {

class $import Spliterators$LongIteratorSpliterator : public ::java::util::Spliterator$OfLong {
	$class(Spliterators$LongIteratorSpliterator, $NO_CLASS_INIT, ::java::util::Spliterator$OfLong)
public:
	Spliterators$LongIteratorSpliterator();
	using ::java::util::Spliterator$OfLong::forEachRemaining;
	void init$(::java::util::PrimitiveIterator$OfLong* iterator, int64_t size, int32_t characteristics);
	void init$(::java::util::PrimitiveIterator$OfLong* iterator, int32_t characteristics);
	virtual int32_t characteristics() override;
	virtual int64_t estimateSize() override;
	virtual void forEachRemaining(::java::util::function::LongConsumer* action) override;
	virtual void forEachRemaining(Object$* action) override;
	virtual ::java::util::Comparator* getComparator() override;
	using ::java::util::Spliterator$OfLong::tryAdvance;
	virtual bool tryAdvance(::java::util::function::LongConsumer* action) override;
	virtual bool tryAdvance(Object$* action) override;
	virtual ::java::util::Spliterator$OfLong* trySplit() override;
	static const int32_t BATCH_UNIT = 1024; // Spliterators$IteratorSpliterator.BATCH_UNIT
	static const int32_t MAX_BATCH = 33554432; // Spliterators$IteratorSpliterator.MAX_BATCH
	::java::util::PrimitiveIterator$OfLong* it = nullptr;
	int32_t characteristics$ = 0;
	int64_t est = 0;
	int32_t batch = 0;
};

	} // util
} // java

#pragma pop_macro("BATCH_UNIT")
#pragma pop_macro("MAX_BATCH")

#endif // _java_util_Spliterators$LongIteratorSpliterator_h_