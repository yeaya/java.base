#ifndef _java_util_stream_IntPipeline$2_h_
#define _java_util_stream_IntPipeline$2_h_
//$ class java.util.stream.IntPipeline$2
//$ extends java.util.stream.LongPipeline$StatelessOp

#include <java/util/stream/LongPipeline$StatelessOp.h>

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

class IntPipeline$2 : public ::java::util::stream::LongPipeline$StatelessOp {
	$class(IntPipeline$2, $NO_CLASS_INIT, ::java::util::stream::LongPipeline$StatelessOp)
public:
	IntPipeline$2();
	void init$(::java::util::stream::IntPipeline* this$0, ::java::util::stream::AbstractPipeline* upstream, ::java::util::stream::StreamShape* inputShape, int32_t opFlags);
	virtual ::java::util::stream::Sink* opWrapSink(int32_t flags, ::java::util::stream::Sink* sink) override;
	::java::util::stream::IntPipeline* this$0 = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_IntPipeline$2_h_