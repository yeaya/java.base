#ifndef _java_util_Spliterators$DoubleArraySpliterator_h_
#define _java_util_Spliterators$DoubleArraySpliterator_h_
//$ class java.util.Spliterators$DoubleArraySpliterator
//$ extends java.util.Spliterator$OfDouble

#include <java/lang/Array.h>
#include <java/util/Spliterator$OfDouble.h>

namespace java {
	namespace util {
		class Comparator;
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

class $export Spliterators$DoubleArraySpliterator : public ::java::util::Spliterator$OfDouble {
	$class(Spliterators$DoubleArraySpliterator, $NO_CLASS_INIT, ::java::util::Spliterator$OfDouble)
public:
	Spliterators$DoubleArraySpliterator();
	using ::java::util::Spliterator$OfDouble::forEachRemaining;
	void init$($doubles* array, int32_t additionalCharacteristics);
	void init$($doubles* array, int32_t origin, int32_t fence, int32_t additionalCharacteristics);
	virtual int32_t characteristics() override;
	virtual int64_t estimateSize() override;
	virtual void forEachRemaining(::java::util::function::DoubleConsumer* action) override;
	virtual void forEachRemaining(Object$* action) override;
	virtual ::java::util::Comparator* getComparator() override;
	using ::java::util::Spliterator$OfDouble::tryAdvance;
	virtual bool tryAdvance(::java::util::function::DoubleConsumer* action) override;
	virtual bool tryAdvance(Object$* action) override;
	virtual ::java::util::Spliterator$OfDouble* trySplit() override;
	$doubles* array = nullptr;
	int32_t index = 0;
	int32_t fence = 0;
	int32_t characteristics$ = 0;
};

	} // util
} // java

#endif // _java_util_Spliterators$DoubleArraySpliterator_h_