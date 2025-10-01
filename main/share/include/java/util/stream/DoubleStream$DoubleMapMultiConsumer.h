#ifndef _java_util_stream_DoubleStream$DoubleMapMultiConsumer_h_
#define _java_util_stream_DoubleStream$DoubleMapMultiConsumer_h_
//$ interface java.util.stream.DoubleStream$DoubleMapMultiConsumer
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace function {
			class DoubleConsumer;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class $import DoubleStream$DoubleMapMultiConsumer : public ::java::lang::Object {
	$interface(DoubleStream$DoubleMapMultiConsumer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void accept(double value, ::java::util::function::DoubleConsumer* dc) {}
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_DoubleStream$DoubleMapMultiConsumer_h_