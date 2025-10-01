#ifndef _java_util_stream_LongStream$2_h_
#define _java_util_stream_LongStream$2_h_
//$ class java.util.stream.LongStream$2
//$ extends java.util.Spliterators$AbstractLongSpliterator

#include <java/util/Spliterators$AbstractLongSpliterator.h>

namespace java {
	namespace util {
		namespace function {
			class LongConsumer;
			class LongPredicate;
			class LongUnaryOperator;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class LongStream$2 : public ::java::util::Spliterators$AbstractLongSpliterator {
	$class(LongStream$2, $NO_CLASS_INIT, ::java::util::Spliterators$AbstractLongSpliterator)
public:
	LongStream$2();
	using ::java::util::Spliterators$AbstractLongSpliterator::forEachRemaining;
	void init$(int64_t est, int32_t additionalCharacteristics, ::java::util::function::LongUnaryOperator* val$next, int64_t val$seed, ::java::util::function::LongPredicate* val$hasNext);
	virtual void forEachRemaining(::java::util::function::LongConsumer* action) override;
	virtual void forEachRemaining(Object$* action) override;
	using ::java::util::Spliterators$AbstractLongSpliterator::tryAdvance;
	virtual bool tryAdvance(::java::util::function::LongConsumer* action) override;
	virtual bool tryAdvance(Object$* action) override;
	::java::util::function::LongPredicate* val$hasNext = nullptr;
	int64_t val$seed = 0;
	::java::util::function::LongUnaryOperator* val$next = nullptr;
	int64_t prev = 0;
	bool started = false;
	bool finished = false;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_LongStream$2_h_