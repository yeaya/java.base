#ifndef _java_util_stream_SortedOps_h_
#define _java_util_stream_SortedOps_h_
//$ class java.util.stream.SortedOps
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Comparator;
	}
}
namespace java {
	namespace util {
		namespace stream {
			class AbstractPipeline;
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

class SortedOps : public ::java::lang::Object {
	$class(SortedOps, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SortedOps();
	void init$();
	static ::java::util::stream::DoubleStream* makeDouble(::java::util::stream::AbstractPipeline* upstream);
	static ::java::util::stream::IntStream* makeInt(::java::util::stream::AbstractPipeline* upstream);
	static ::java::util::stream::LongStream* makeLong(::java::util::stream::AbstractPipeline* upstream);
	static ::java::util::stream::Stream* makeRef(::java::util::stream::AbstractPipeline* upstream);
	static ::java::util::stream::Stream* makeRef(::java::util::stream::AbstractPipeline* upstream, ::java::util::Comparator* comparator);
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_SortedOps_h_