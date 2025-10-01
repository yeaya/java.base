#ifndef _java_util_Spliterators$AbstractSpliterator$HoldingConsumer_h_
#define _java_util_Spliterators$AbstractSpliterator$HoldingConsumer_h_
//$ class java.util.Spliterators$AbstractSpliterator$HoldingConsumer
//$ extends java.util.function.Consumer

#include <java/util/function/Consumer.h>

namespace java {
	namespace util {

class $import Spliterators$AbstractSpliterator$HoldingConsumer : public ::java::util::function::Consumer {
	$class(Spliterators$AbstractSpliterator$HoldingConsumer, $NO_CLASS_INIT, ::java::util::function::Consumer)
public:
	Spliterators$AbstractSpliterator$HoldingConsumer();
	void init$();
	virtual void accept(Object$* value) override;
	$Object* value = nullptr;
};

	} // util
} // java

#endif // _java_util_Spliterators$AbstractSpliterator$HoldingConsumer_h_