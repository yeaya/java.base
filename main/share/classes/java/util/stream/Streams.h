#ifndef _java_util_stream_Streams_h_
#define _java_util_stream_Streams_h_
//$ class java.util.stream.Streams
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class Runnable;
	}
}
namespace java {
	namespace util {
		namespace stream {
			class BaseStream;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class Streams : public ::java::lang::Object {
	$class(Streams, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Streams();
	void init$();
	static ::java::lang::Runnable* composeWithExceptions(::java::lang::Runnable* a, ::java::lang::Runnable* b);
	static ::java::lang::Runnable* composedClose(::java::util::stream::BaseStream* a, ::java::util::stream::BaseStream* b);
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_Streams_h_