#ifndef _java_util_stream_IntStream$1_h_
#define _java_util_stream_IntStream$1_h_
//$ class java.util.stream.IntStream$1
//$ extends java.util.Spliterators$AbstractIntSpliterator

#include <java/util/Spliterators$AbstractIntSpliterator.h>

namespace java {
	namespace util {
		namespace function {
			class IntConsumer;
			class IntUnaryOperator;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class IntStream$1 : public ::java::util::Spliterators$AbstractIntSpliterator {
	$class(IntStream$1, $NO_CLASS_INIT, ::java::util::Spliterators$AbstractIntSpliterator)
public:
	IntStream$1();
	using ::java::util::Spliterators$AbstractIntSpliterator::forEachRemaining;
	void init$(int64_t est, int32_t additionalCharacteristics, ::java::util::function::IntUnaryOperator* val$f, int32_t val$seed);
	using ::java::util::Spliterators$AbstractIntSpliterator::tryAdvance;
	virtual bool tryAdvance(::java::util::function::IntConsumer* action) override;
	virtual bool tryAdvance(Object$* action) override;
	int32_t val$seed = 0;
	::java::util::function::IntUnaryOperator* val$f = nullptr;
	int32_t prev = 0;
	bool started = false;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_IntStream$1_h_