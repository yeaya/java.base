#ifndef _java_util_Spliterators$AbstractDoubleSpliterator$HoldingDoubleConsumer_h_
#define _java_util_Spliterators$AbstractDoubleSpliterator$HoldingDoubleConsumer_h_
//$ class java.util.Spliterators$AbstractDoubleSpliterator$HoldingDoubleConsumer
//$ extends java.util.function.DoubleConsumer

#include <java/util/function/DoubleConsumer.h>

namespace java {
	namespace util {

class $import Spliterators$AbstractDoubleSpliterator$HoldingDoubleConsumer : public ::java::util::function::DoubleConsumer {
	$class(Spliterators$AbstractDoubleSpliterator$HoldingDoubleConsumer, $NO_CLASS_INIT, ::java::util::function::DoubleConsumer)
public:
	Spliterators$AbstractDoubleSpliterator$HoldingDoubleConsumer();
	void init$();
	virtual void accept(double value) override;
	double value = 0.0;
};

	} // util
} // java

#endif // _java_util_Spliterators$AbstractDoubleSpliterator$HoldingDoubleConsumer_h_