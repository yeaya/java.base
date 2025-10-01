#ifndef _java_util_stream_Stream$Builder_h_
#define _java_util_stream_Stream$Builder_h_
//$ interface java.util.stream.Stream$Builder
//$ extends java.util.function.Consumer

#include <java/util/function/Consumer.h>

namespace java {
	namespace util {
		namespace stream {
			class Stream;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class $export Stream$Builder : public ::java::util::function::Consumer {
	$interface(Stream$Builder, $NO_CLASS_INIT, ::java::util::function::Consumer)
public:
	virtual void accept(Object$* t) override {}
	virtual ::java::util::stream::Stream$Builder* add(Object$* t);
	virtual ::java::util::stream::Stream* build() {return nullptr;}
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_Stream$Builder_h_