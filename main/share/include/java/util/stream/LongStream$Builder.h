#ifndef _java_util_stream_LongStream$Builder_h_
#define _java_util_stream_LongStream$Builder_h_
//$ interface java.util.stream.LongStream$Builder
//$ extends java.util.function.LongConsumer

#include <java/util/function/LongConsumer.h>

namespace java {
	namespace util {
		namespace stream {
			class LongStream;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class $import LongStream$Builder : public ::java::util::function::LongConsumer {
	$interface(LongStream$Builder, $NO_CLASS_INIT, ::java::util::function::LongConsumer)
public:
	virtual void accept(int64_t t) override {}
	virtual ::java::util::stream::LongStream$Builder* add(int64_t t);
	virtual ::java::util::stream::LongStream* build() {return nullptr;}
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_LongStream$Builder_h_