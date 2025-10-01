#ifndef _java_util_stream_DoubleStream$Builder_h_
#define _java_util_stream_DoubleStream$Builder_h_
//$ interface java.util.stream.DoubleStream$Builder
//$ extends java.util.function.DoubleConsumer

#include <java/util/function/DoubleConsumer.h>

namespace java {
	namespace util {
		namespace stream {
			class DoubleStream;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class $export DoubleStream$Builder : public ::java::util::function::DoubleConsumer {
	$interface(DoubleStream$Builder, $NO_CLASS_INIT, ::java::util::function::DoubleConsumer)
public:
	virtual void accept(double t) override {}
	virtual ::java::util::stream::DoubleStream$Builder* add(double t);
	virtual ::java::util::stream::DoubleStream* build() {return nullptr;}
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_DoubleStream$Builder_h_