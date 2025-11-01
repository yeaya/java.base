#ifndef _java_util_LongSummaryStatistics_h_
#define _java_util_LongSummaryStatistics_h_
//$ class java.util.LongSummaryStatistics
//$ extends java.util.function.LongConsumer
//$ implements java.util.function.IntConsumer

#include <java/util/function/IntConsumer.h>
#include <java/util/function/LongConsumer.h>

namespace java {
	namespace util {

class $import LongSummaryStatistics : public ::java::util::function::LongConsumer, public ::java::util::function::IntConsumer {
	$class(LongSummaryStatistics, $NO_CLASS_INIT, ::java::util::function::LongConsumer, ::java::util::function::IntConsumer)
public:
	LongSummaryStatistics();
	using ::java::util::function::LongConsumer::andThen;
	using ::java::util::function::IntConsumer::andThen;
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(int64_t count, int64_t min, int64_t max, int64_t sum);
	virtual void accept(int32_t value) override;
	virtual void accept(int64_t value) override;
	virtual void combine(::java::util::LongSummaryStatistics* other);
	double getAverage();
	int64_t getCount();
	int64_t getMax();
	int64_t getMin();
	int64_t getSum();
	virtual $String* toString() override;
	int64_t count = 0;
	int64_t sum = 0;
	int64_t min = 0;
	int64_t max = 0;
};

	} // util
} // java

#endif // _java_util_LongSummaryStatistics_h_