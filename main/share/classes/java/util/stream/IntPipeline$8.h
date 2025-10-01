#ifndef _java_util_stream_IntPipeline$8_h_
#define _java_util_stream_IntPipeline$8_h_
//$ class java.util.stream.IntPipeline$8
//$ extends java.util.stream.IntPipeline$StatelessOp

#include <java/util/stream/IntPipeline$StatelessOp.h>

namespace java {
	namespace util {
		namespace stream {
			class AbstractPipeline;
			class IntPipeline;
			class IntStream$IntMapMultiConsumer;
			class Sink;
			class StreamShape;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class IntPipeline$8 : public ::java::util::stream::IntPipeline$StatelessOp {
	$class(IntPipeline$8, $NO_CLASS_INIT, ::java::util::stream::IntPipeline$StatelessOp)
public:
	IntPipeline$8();
	void init$(::java::util::stream::IntPipeline* this$0, ::java::util::stream::AbstractPipeline* upstream, ::java::util::stream::StreamShape* inputShape, int32_t opFlags, ::java::util::stream::IntStream$IntMapMultiConsumer* val$mapper);
	virtual ::java::util::stream::Sink* opWrapSink(int32_t flags, ::java::util::stream::Sink* sink) override;
	::java::util::stream::IntPipeline* this$0 = nullptr;
	::java::util::stream::IntStream$IntMapMultiConsumer* val$mapper = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_IntPipeline$8_h_