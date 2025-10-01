#ifndef _java_util_stream_DoubleStream$2_h_
#define _java_util_stream_DoubleStream$2_h_
//$ class java.util.stream.DoubleStream$2
//$ extends java.util.Spliterators$AbstractDoubleSpliterator

#include <java/util/Spliterators$AbstractDoubleSpliterator.h>

namespace java {
	namespace util {
		namespace function {
			class DoubleConsumer;
			class DoublePredicate;
			class DoubleUnaryOperator;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class DoubleStream$2 : public ::java::util::Spliterators$AbstractDoubleSpliterator {
	$class(DoubleStream$2, $NO_CLASS_INIT, ::java::util::Spliterators$AbstractDoubleSpliterator)
public:
	DoubleStream$2();
	using ::java::util::Spliterators$AbstractDoubleSpliterator::forEachRemaining;
	void init$(int64_t est, int32_t additionalCharacteristics, ::java::util::function::DoubleUnaryOperator* val$next, double val$seed, ::java::util::function::DoublePredicate* val$hasNext);
	virtual void forEachRemaining(::java::util::function::DoubleConsumer* action) override;
	virtual void forEachRemaining(Object$* action) override;
	using ::java::util::Spliterators$AbstractDoubleSpliterator::tryAdvance;
	virtual bool tryAdvance(::java::util::function::DoubleConsumer* action) override;
	virtual bool tryAdvance(Object$* action) override;
	::java::util::function::DoublePredicate* val$hasNext = nullptr;
	double val$seed = 0.0;
	::java::util::function::DoubleUnaryOperator* val$next = nullptr;
	double prev = 0.0;
	bool started = false;
	bool finished = false;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_DoubleStream$2_h_