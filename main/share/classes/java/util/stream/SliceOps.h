#ifndef _java_util_stream_SliceOps_h_
#define _java_util_stream_SliceOps_h_
//$ class java.util.stream.SliceOps
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Spliterator;
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
			class StreamShape;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class SliceOps : public ::java::lang::Object {
	$class(SliceOps, 0, ::java::lang::Object)
public:
	SliceOps();
	void init$();
	static int64_t calcSize(int64_t size, int64_t skip, int64_t limit);
	static int64_t calcSliceFence(int64_t skip, int64_t limit);
	static int32_t flags(int64_t limit);
	static ::java::util::stream::DoubleStream* makeDouble(::java::util::stream::AbstractPipeline* upstream, int64_t skip, int64_t limit);
	static ::java::util::stream::IntStream* makeInt(::java::util::stream::AbstractPipeline* upstream, int64_t skip, int64_t limit);
	static ::java::util::stream::LongStream* makeLong(::java::util::stream::AbstractPipeline* upstream, int64_t skip, int64_t limit);
	static ::java::util::stream::Stream* makeRef(::java::util::stream::AbstractPipeline* upstream, int64_t skip, int64_t limit);
	static ::java::util::Spliterator* sliceSpliterator(::java::util::stream::StreamShape* shape, ::java::util::Spliterator* s, int64_t skip, int64_t limit);
	static bool $assertionsDisabled;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_SliceOps_h_