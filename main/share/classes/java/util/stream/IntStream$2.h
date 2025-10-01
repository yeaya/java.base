#ifndef _java_util_stream_IntStream$2_h_
#define _java_util_stream_IntStream$2_h_
//$ class java.util.stream.IntStream$2
//$ extends java.util.Spliterators$AbstractIntSpliterator

#include <java/util/Spliterators$AbstractIntSpliterator.h>

namespace java {
	namespace util {
		namespace function {
			class IntConsumer;
			class IntPredicate;
			class IntUnaryOperator;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class IntStream$2 : public ::java::util::Spliterators$AbstractIntSpliterator {
	$class(IntStream$2, $NO_CLASS_INIT, ::java::util::Spliterators$AbstractIntSpliterator)
public:
	IntStream$2();
	using ::java::util::Spliterators$AbstractIntSpliterator::forEachRemaining;
	void init$(int64_t est, int32_t additionalCharacteristics, ::java::util::function::IntUnaryOperator* val$next, int32_t val$seed, ::java::util::function::IntPredicate* val$hasNext);
	virtual void forEachRemaining(::java::util::function::IntConsumer* action) override;
	virtual void forEachRemaining(Object$* action) override;
	using ::java::util::Spliterators$AbstractIntSpliterator::tryAdvance;
	virtual bool tryAdvance(::java::util::function::IntConsumer* action) override;
	virtual bool tryAdvance(Object$* action) override;
	::java::util::function::IntPredicate* val$hasNext = nullptr;
	int32_t val$seed = 0;
	::java::util::function::IntUnaryOperator* val$next = nullptr;
	int32_t prev = 0;
	bool started = false;
	bool finished = false;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_IntStream$2_h_