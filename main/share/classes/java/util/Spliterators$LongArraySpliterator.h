#ifndef _java_util_Spliterators$LongArraySpliterator_h_
#define _java_util_Spliterators$LongArraySpliterator_h_
//$ class java.util.Spliterators$LongArraySpliterator
//$ extends java.util.Spliterator$OfLong

#include <java/lang/Array.h>
#include <java/util/Spliterator$OfLong.h>

namespace java {
	namespace util {
		class Comparator;
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

class $export Spliterators$LongArraySpliterator : public ::java::util::Spliterator$OfLong {
	$class(Spliterators$LongArraySpliterator, $NO_CLASS_INIT, ::java::util::Spliterator$OfLong)
public:
	Spliterators$LongArraySpliterator();
	using ::java::util::Spliterator$OfLong::forEachRemaining;
	void init$($longs* array, int32_t additionalCharacteristics);
	void init$($longs* array, int32_t origin, int32_t fence, int32_t additionalCharacteristics);
	virtual int32_t characteristics() override;
	virtual int64_t estimateSize() override;
	virtual void forEachRemaining(::java::util::function::LongConsumer* action) override;
	virtual void forEachRemaining(Object$* action) override;
	virtual ::java::util::Comparator* getComparator() override;
	using ::java::util::Spliterator$OfLong::tryAdvance;
	virtual bool tryAdvance(::java::util::function::LongConsumer* action) override;
	virtual bool tryAdvance(Object$* action) override;
	virtual ::java::util::Spliterator$OfLong* trySplit() override;
	$longs* array = nullptr;
	int32_t index = 0;
	int32_t fence = 0;
	int32_t characteristics$ = 0;
};

	} // util
} // java

#endif // _java_util_Spliterators$LongArraySpliterator_h_