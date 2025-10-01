#ifndef _java_util_Spliterators$AbstractLongSpliterator$HoldingLongConsumer_h_
#define _java_util_Spliterators$AbstractLongSpliterator$HoldingLongConsumer_h_
//$ class java.util.Spliterators$AbstractLongSpliterator$HoldingLongConsumer
//$ extends java.util.function.LongConsumer

#include <java/util/function/LongConsumer.h>

namespace java {
	namespace util {

class $import Spliterators$AbstractLongSpliterator$HoldingLongConsumer : public ::java::util::function::LongConsumer {
	$class(Spliterators$AbstractLongSpliterator$HoldingLongConsumer, $NO_CLASS_INIT, ::java::util::function::LongConsumer)
public:
	Spliterators$AbstractLongSpliterator$HoldingLongConsumer();
	void init$();
	virtual void accept(int64_t value) override;
	int64_t value = 0;
};

	} // util
} // java

#endif // _java_util_Spliterators$AbstractLongSpliterator$HoldingLongConsumer_h_