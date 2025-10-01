#ifndef _java_util_IntSummaryStatistics_h_
#define _java_util_IntSummaryStatistics_h_
//$ class java.util.IntSummaryStatistics
//$ extends java.util.function.IntConsumer

#include <java/util/function/IntConsumer.h>

namespace java {
	namespace util {

class $export IntSummaryStatistics : public ::java::util::function::IntConsumer {
	$class(IntSummaryStatistics, $NO_CLASS_INIT, ::java::util::function::IntConsumer)
public:
	IntSummaryStatistics();
	void init$();
	void init$(int64_t count, int32_t min, int32_t max, int64_t sum);
	virtual void accept(int32_t value) override;
	virtual void combine(::java::util::IntSummaryStatistics* other);
	double getAverage();
	int64_t getCount();
	int32_t getMax();
	int32_t getMin();
	int64_t getSum();
	virtual $String* toString() override;
	int64_t count = 0;
	int64_t sum = 0;
	int32_t min = 0;
	int32_t max = 0;
};

	} // util
} // java

#endif // _java_util_IntSummaryStatistics_h_