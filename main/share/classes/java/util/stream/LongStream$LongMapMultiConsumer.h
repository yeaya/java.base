#ifndef _java_util_stream_LongStream$LongMapMultiConsumer_h_
#define _java_util_stream_LongStream$LongMapMultiConsumer_h_
//$ interface java.util.stream.LongStream$LongMapMultiConsumer
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace function {
			class LongConsumer;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class $export LongStream$LongMapMultiConsumer : public ::java::lang::Object {
	$interface(LongStream$LongMapMultiConsumer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void accept(int64_t value, ::java::util::function::LongConsumer* lc) {}
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_LongStream$LongMapMultiConsumer_h_