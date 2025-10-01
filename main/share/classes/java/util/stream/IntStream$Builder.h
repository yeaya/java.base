#ifndef _java_util_stream_IntStream$Builder_h_
#define _java_util_stream_IntStream$Builder_h_
//$ interface java.util.stream.IntStream$Builder
//$ extends java.util.function.IntConsumer

#include <java/util/function/IntConsumer.h>

namespace java {
	namespace util {
		namespace stream {
			class IntStream;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class $export IntStream$Builder : public ::java::util::function::IntConsumer {
	$interface(IntStream$Builder, $NO_CLASS_INIT, ::java::util::function::IntConsumer)
public:
	virtual void accept(int32_t t) override {}
	virtual ::java::util::stream::IntStream$Builder* add(int32_t t);
	virtual ::java::util::stream::IntStream* build() {return nullptr;}
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_IntStream$Builder_h_