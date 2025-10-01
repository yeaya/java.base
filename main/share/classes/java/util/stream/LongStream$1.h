#ifndef _java_util_stream_LongStream$1_h_
#define _java_util_stream_LongStream$1_h_
//$ class java.util.stream.LongStream$1
//$ extends java.util.Spliterators$AbstractLongSpliterator

#include <java/util/Spliterators$AbstractLongSpliterator.h>

namespace java {
	namespace util {
		namespace function {
			class LongConsumer;
			class LongUnaryOperator;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class LongStream$1 : public ::java::util::Spliterators$AbstractLongSpliterator {
	$class(LongStream$1, $NO_CLASS_INIT, ::java::util::Spliterators$AbstractLongSpliterator)
public:
	LongStream$1();
	using ::java::util::Spliterators$AbstractLongSpliterator::forEachRemaining;
	void init$(int64_t est, int32_t additionalCharacteristics, ::java::util::function::LongUnaryOperator* val$f, int64_t val$seed);
	using ::java::util::Spliterators$AbstractLongSpliterator::tryAdvance;
	virtual bool tryAdvance(::java::util::function::LongConsumer* action) override;
	virtual bool tryAdvance(Object$* action) override;
	int64_t val$seed = 0;
	::java::util::function::LongUnaryOperator* val$f = nullptr;
	int64_t prev = 0;
	bool started = false;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_LongStream$1_h_