#ifndef _java_util_stream_DoubleStream$1_h_
#define _java_util_stream_DoubleStream$1_h_
//$ class java.util.stream.DoubleStream$1
//$ extends java.util.Spliterators$AbstractDoubleSpliterator

#include <java/util/Spliterators$AbstractDoubleSpliterator.h>

namespace java {
	namespace util {
		namespace function {
			class DoubleConsumer;
			class DoubleUnaryOperator;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class DoubleStream$1 : public ::java::util::Spliterators$AbstractDoubleSpliterator {
	$class(DoubleStream$1, $NO_CLASS_INIT, ::java::util::Spliterators$AbstractDoubleSpliterator)
public:
	DoubleStream$1();
	using ::java::util::Spliterators$AbstractDoubleSpliterator::forEachRemaining;
	void init$(int64_t est, int32_t additionalCharacteristics, ::java::util::function::DoubleUnaryOperator* val$f, double val$seed);
	using ::java::util::Spliterators$AbstractDoubleSpliterator::tryAdvance;
	virtual bool tryAdvance(::java::util::function::DoubleConsumer* action) override;
	virtual bool tryAdvance(Object$* action) override;
	double val$seed = 0.0;
	::java::util::function::DoubleUnaryOperator* val$f = nullptr;
	double prev = 0.0;
	bool started = false;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_DoubleStream$1_h_