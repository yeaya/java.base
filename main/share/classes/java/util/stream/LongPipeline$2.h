#ifndef _java_util_stream_LongPipeline$2_h_
#define _java_util_stream_LongPipeline$2_h_
//$ class java.util.stream.LongPipeline$2
//$ extends java.util.stream.DoublePipeline$StatelessOp

#include <java/util/stream/DoublePipeline$StatelessOp.h>

namespace java {
	namespace util {
		namespace stream {
			class AbstractPipeline;
			class LongPipeline;
			class Sink;
			class StreamShape;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class LongPipeline$2 : public ::java::util::stream::DoublePipeline$StatelessOp {
	$class(LongPipeline$2, $NO_CLASS_INIT, ::java::util::stream::DoublePipeline$StatelessOp)
public:
	LongPipeline$2();
	void init$(::java::util::stream::LongPipeline* this$0, ::java::util::stream::AbstractPipeline* upstream, ::java::util::stream::StreamShape* inputShape, int32_t opFlags);
	virtual ::java::util::stream::Sink* opWrapSink(int32_t flags, ::java::util::stream::Sink* sink) override;
	::java::util::stream::LongPipeline* this$0 = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_LongPipeline$2_h_