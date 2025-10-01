#ifndef _java_util_stream_DoublePipeline$6_h_
#define _java_util_stream_DoublePipeline$6_h_
//$ class java.util.stream.DoublePipeline$6
//$ extends java.util.stream.DoublePipeline$StatelessOp

#include <java/util/stream/DoublePipeline$StatelessOp.h>

namespace java {
	namespace util {
		namespace stream {
			class AbstractPipeline;
			class DoublePipeline;
			class DoubleStream$DoubleMapMultiConsumer;
			class Sink;
			class StreamShape;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class DoublePipeline$6 : public ::java::util::stream::DoublePipeline$StatelessOp {
	$class(DoublePipeline$6, $NO_CLASS_INIT, ::java::util::stream::DoublePipeline$StatelessOp)
public:
	DoublePipeline$6();
	void init$(::java::util::stream::DoublePipeline* this$0, ::java::util::stream::AbstractPipeline* upstream, ::java::util::stream::StreamShape* inputShape, int32_t opFlags, ::java::util::stream::DoubleStream$DoubleMapMultiConsumer* val$mapper);
	virtual ::java::util::stream::Sink* opWrapSink(int32_t flags, ::java::util::stream::Sink* sink) override;
	::java::util::stream::DoublePipeline* this$0 = nullptr;
	::java::util::stream::DoubleStream$DoubleMapMultiConsumer* val$mapper = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_DoublePipeline$6_h_