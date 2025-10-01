#ifndef _java_util_stream_StreamSupport_h_
#define _java_util_stream_StreamSupport_h_
//$ class java.util.stream.StreamSupport
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Spliterator;
		class Spliterator$OfDouble;
		class Spliterator$OfInt;
		class Spliterator$OfLong;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Supplier;
		}
	}
}
namespace java {
	namespace util {
		namespace stream {
			class DoubleStream;
			class IntStream;
			class LongStream;
			class Stream;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class $export StreamSupport : public ::java::lang::Object {
	$class(StreamSupport, $NO_CLASS_INIT, ::java::lang::Object)
public:
	StreamSupport();
	void init$();
	static ::java::util::stream::DoubleStream* doubleStream(::java::util::Spliterator$OfDouble* spliterator, bool parallel);
	static ::java::util::stream::DoubleStream* doubleStream(::java::util::function::Supplier* supplier, int32_t characteristics, bool parallel);
	static ::java::util::stream::IntStream* intStream(::java::util::Spliterator$OfInt* spliterator, bool parallel);
	static ::java::util::stream::IntStream* intStream(::java::util::function::Supplier* supplier, int32_t characteristics, bool parallel);
	static ::java::util::stream::LongStream* longStream(::java::util::Spliterator$OfLong* spliterator, bool parallel);
	static ::java::util::stream::LongStream* longStream(::java::util::function::Supplier* supplier, int32_t characteristics, bool parallel);
	static ::java::util::stream::Stream* stream(::java::util::Spliterator* spliterator, bool parallel);
	static ::java::util::stream::Stream* stream(::java::util::function::Supplier* supplier, int32_t characteristics, bool parallel);
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_StreamSupport_h_