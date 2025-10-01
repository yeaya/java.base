#ifndef _java_util_stream_IntPipeline$3_h_
#define _java_util_stream_IntPipeline$3_h_
//$ class java.util.stream.IntPipeline$3
//$ extends java.util.stream.DoublePipeline$StatelessOp

#include <java/util/stream/DoublePipeline$StatelessOp.h>

namespace java {
	namespace util {
		namespace stream {
			class AbstractPipeline;
			class IntPipeline;
			class Sink;
			class StreamShape;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class IntPipeline$3 : public ::java::util::stream::DoublePipeline$StatelessOp {
	$class(IntPipeline$3, $NO_CLASS_INIT, ::java::util::stream::DoublePipeline$StatelessOp)
public:
	IntPipeline$3();
	void init$(::java::util::stream::IntPipeline* this$0, ::java::util::stream::AbstractPipeline* upstream, ::java::util::stream::StreamShape* inputShape, int32_t opFlags);
	virtual ::java::util::stream::Sink* opWrapSink(int32_t flags, ::java::util::stream::Sink* sink) override;
	::java::util::stream::IntPipeline* this$0 = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_IntPipeline$3_h_