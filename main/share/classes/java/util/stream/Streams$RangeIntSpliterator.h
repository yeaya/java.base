#ifndef _java_util_stream_Streams$RangeIntSpliterator_h_
#define _java_util_stream_Streams$RangeIntSpliterator_h_
//$ class java.util.stream.Streams$RangeIntSpliterator
//$ extends java.util.Spliterator$OfInt

#include <java/util/Spliterator$OfInt.h>

#pragma push_macro("BALANCED_SPLIT_THRESHOLD")
#undef BALANCED_SPLIT_THRESHOLD
#pragma push_macro("RIGHT_BALANCED_SPLIT_RATIO")
#undef RIGHT_BALANCED_SPLIT_RATIO

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
		namespace stream {

class Streams$RangeIntSpliterator : public ::java::util::Spliterator$OfInt {
	$class(Streams$RangeIntSpliterator, $NO_CLASS_INIT, ::java::util::Spliterator$OfInt)
public:
	Streams$RangeIntSpliterator();
	using ::java::util::Spliterator$OfInt::forEachRemaining;
	void init$(int32_t from, int32_t upTo, bool closed);
	void init$(int32_t from, int32_t upTo, int32_t last);
	virtual int32_t characteristics() override;
	virtual int64_t estimateSize() override;
	virtual void forEachRemaining(::java::util::function::IntConsumer* consumer) override;
	virtual void forEachRemaining(Object$* consumer) override;
	virtual ::java::util::Comparator* getComparator() override;
	int32_t splitPoint(int64_t size);
	using ::java::util::Spliterator$OfInt::tryAdvance;
	virtual bool tryAdvance(::java::util::function::IntConsumer* consumer) override;
	virtual bool tryAdvance(Object$* consumer) override;
	virtual ::java::util::Spliterator$OfInt* trySplit() override;
	int32_t from = 0;
	int32_t upTo = 0;
	int32_t last = 0;
	static const int32_t BALANCED_SPLIT_THRESHOLD = 16777216; // 1 << 24
	static const int32_t RIGHT_BALANCED_SPLIT_RATIO = 8; // 1 << 3
};

		} // stream
	} // util
} // java

#pragma pop_macro("BALANCED_SPLIT_THRESHOLD")
#pragma pop_macro("RIGHT_BALANCED_SPLIT_RATIO")

#endif // _java_util_stream_Streams$RangeIntSpliterator_h_