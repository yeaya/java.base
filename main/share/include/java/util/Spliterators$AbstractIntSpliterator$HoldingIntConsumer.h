#ifndef _java_util_Spliterators$AbstractIntSpliterator$HoldingIntConsumer_h_
#define _java_util_Spliterators$AbstractIntSpliterator$HoldingIntConsumer_h_
//$ class java.util.Spliterators$AbstractIntSpliterator$HoldingIntConsumer
//$ extends java.util.function.IntConsumer

#include <java/util/function/IntConsumer.h>

namespace java {
	namespace util {

class $import Spliterators$AbstractIntSpliterator$HoldingIntConsumer : public ::java::util::function::IntConsumer {
	$class(Spliterators$AbstractIntSpliterator$HoldingIntConsumer, $NO_CLASS_INIT, ::java::util::function::IntConsumer)
public:
	Spliterators$AbstractIntSpliterator$HoldingIntConsumer();
	void init$();
	virtual void accept(int32_t value) override;
	int32_t value = 0;
};

	} // util
} // java

#endif // _java_util_Spliterators$AbstractIntSpliterator$HoldingIntConsumer_h_