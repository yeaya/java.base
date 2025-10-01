#ifndef _java_util_DoubleSummaryStatistics_h_
#define _java_util_DoubleSummaryStatistics_h_
//$ class java.util.DoubleSummaryStatistics
//$ extends java.util.function.DoubleConsumer

#include <java/util/function/DoubleConsumer.h>

namespace java {
	namespace util {

class $import DoubleSummaryStatistics : public ::java::util::function::DoubleConsumer {
	$class(DoubleSummaryStatistics, $NO_CLASS_INIT, ::java::util::function::DoubleConsumer)
public:
	DoubleSummaryStatistics();
	void init$();
	void init$(int64_t count, double min, double max, double sum);
	virtual void accept(double value) override;
	virtual void combine(::java::util::DoubleSummaryStatistics* other);
	double getAverage();
	int64_t getCount();
	double getMax();
	double getMin();
	double getSum();
	void sumWithCompensation(double value);
	virtual $String* toString() override;
	int64_t count = 0;
	double sum = 0.0;
	double sumCompensation = 0.0;
	double simpleSum = 0.0;
	double min = 0.0;
	double max = 0.0;
};

	} // util
} // java

#endif // _java_util_DoubleSummaryStatistics_h_