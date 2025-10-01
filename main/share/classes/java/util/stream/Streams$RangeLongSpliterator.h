#ifndef _java_util_stream_Streams$RangeLongSpliterator_h_
#define _java_util_stream_Streams$RangeLongSpliterator_h_
//$ class java.util.stream.Streams$RangeLongSpliterator
//$ extends java.util.Spliterator$OfLong

#include <java/util/Spliterator$OfLong.h>

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
			class LongConsumer;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class Streams$RangeLongSpliterator : public ::java::util::Spliterator$OfLong {
	$class(Streams$RangeLongSpliterator, 0, ::java::util::Spliterator$OfLong)
public:
	Streams$RangeLongSpliterator();
	using ::java::util::Spliterator$OfLong::forEachRemaining;
	void init$(int64_t from, int64_t upTo, bool closed);
	void init$(int64_t from, int64_t upTo, int32_t last);
	virtual int32_t characteristics() override;
	virtual int64_t estimateSize() override;
	virtual void forEachRemaining(::java::util::function::LongConsumer* consumer) override;
	virtual void forEachRemaining(Object$* consumer) override;
	virtual ::java::util::Comparator* getComparator() override;
	int64_t splitPoint(int64_t size);
	using ::java::util::Spliterator$OfLong::tryAdvance;
	virtual bool tryAdvance(::java::util::function::LongConsumer* consumer) override;
	virtual bool tryAdvance(Object$* consumer) override;
	virtual ::java::util::Spliterator$OfLong* trySplit() override;
	static bool $assertionsDisabled;
	int64_t from = 0;
	int64_t upTo = 0;
	int32_t last = 0;
	static const int64_t BALANCED_SPLIT_THRESHOLD = 16777216; // 1 << 24
	static const int64_t RIGHT_BALANCED_SPLIT_RATIO = 8; // 1 << 3
};

		} // stream
	} // util
} // java

#pragma pop_macro("BALANCED_SPLIT_THRESHOLD")
#pragma pop_macro("RIGHT_BALANCED_SPLIT_RATIO")

#endif // _java_util_stream_Streams$RangeLongSpliterator_h_