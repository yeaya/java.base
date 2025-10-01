#ifndef _java_util_Spliterators$IntArraySpliterator_h_
#define _java_util_Spliterators$IntArraySpliterator_h_
//$ class java.util.Spliterators$IntArraySpliterator
//$ extends java.util.Spliterator$OfInt

#include <java/lang/Array.h>
#include <java/util/Spliterator$OfInt.h>

namespace java {
	namespace util {
		class Comparator;
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

class $import Spliterators$IntArraySpliterator : public ::java::util::Spliterator$OfInt {
	$class(Spliterators$IntArraySpliterator, $NO_CLASS_INIT, ::java::util::Spliterator$OfInt)
public:
	Spliterators$IntArraySpliterator();
	using ::java::util::Spliterator$OfInt::forEachRemaining;
	void init$($ints* array, int32_t additionalCharacteristics);
	void init$($ints* array, int32_t origin, int32_t fence, int32_t additionalCharacteristics);
	virtual int32_t characteristics() override;
	virtual int64_t estimateSize() override;
	virtual void forEachRemaining(::java::util::function::IntConsumer* action) override;
	virtual void forEachRemaining(Object$* action) override;
	virtual ::java::util::Comparator* getComparator() override;
	using ::java::util::Spliterator$OfInt::tryAdvance;
	virtual bool tryAdvance(::java::util::function::IntConsumer* action) override;
	virtual bool tryAdvance(Object$* action) override;
	virtual ::java::util::Spliterator$OfInt* trySplit() override;
	$ints* array = nullptr;
	int32_t index = 0;
	int32_t fence = 0;
	int32_t characteristics$ = 0;
};

	} // util
} // java

#endif // _java_util_Spliterators$IntArraySpliterator_h_