#ifndef _java_util_stream_ReferencePipeline$14_h_
#define _java_util_stream_ReferencePipeline$14_h_
//$ class java.util.stream.ReferencePipeline$14
//$ extends java.util.stream.DoublePipeline$StatelessOp

#include <java/util/stream/DoublePipeline$StatelessOp.h>

namespace java {
	namespace util {
		namespace function {
			class BiConsumer;
		}
	}
}
namespace java {
	namespace util {
		namespace stream {
			class AbstractPipeline;
			class ReferencePipeline;
			class Sink;
			class StreamShape;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class ReferencePipeline$14 : public ::java::util::stream::DoublePipeline$StatelessOp {
	$class(ReferencePipeline$14, $NO_CLASS_INIT, ::java::util::stream::DoublePipeline$StatelessOp)
public:
	ReferencePipeline$14();
	void init$(::java::util::stream::ReferencePipeline* this$0, ::java::util::stream::AbstractPipeline* upstream, ::java::util::stream::StreamShape* inputShape, int32_t opFlags, ::java::util::function::BiConsumer* val$mapper);
	virtual ::java::util::stream::Sink* opWrapSink(int32_t flags, ::java::util::stream::Sink* sink) override;
	::java::util::stream::ReferencePipeline* this$0 = nullptr;
	::java::util::function::BiConsumer* val$mapper = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_ReferencePipeline$14_h_