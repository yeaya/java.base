#ifndef _java_util_stream_IntStream$IntMapMultiConsumer_h_
#define _java_util_stream_IntStream$IntMapMultiConsumer_h_
//$ interface java.util.stream.IntStream$IntMapMultiConsumer
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace function {
			class IntConsumer;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class $import IntStream$IntMapMultiConsumer : public ::java::lang::Object {
	$interface(IntStream$IntMapMultiConsumer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void accept(int32_t value, ::java::util::function::IntConsumer* ic) {}
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_IntStream$IntMapMultiConsumer_h_