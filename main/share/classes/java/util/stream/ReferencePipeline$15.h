#ifndef _java_util_stream_ReferencePipeline$15_h_
#define _java_util_stream_ReferencePipeline$15_h_
//$ class java.util.stream.ReferencePipeline$15
//$ extends java.util.stream.ReferencePipeline$StatelessOp

#include <java/util/stream/ReferencePipeline$StatelessOp.h>

namespace java {
	namespace util {
		namespace function {
			class Consumer;
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

class ReferencePipeline$15 : public ::java::util::stream::ReferencePipeline$StatelessOp {
	$class(ReferencePipeline$15, $NO_CLASS_INIT, ::java::util::stream::ReferencePipeline$StatelessOp)
public:
	ReferencePipeline$15();
	void init$(::java::util::stream::ReferencePipeline* this$0, ::java::util::stream::AbstractPipeline* upstream, ::java::util::stream::StreamShape* inputShape, int32_t opFlags, ::java::util::function::Consumer* val$action);
	virtual ::java::util::stream::Sink* opWrapSink(int32_t flags, ::java::util::stream::Sink* sink) override;
	::java::util::stream::ReferencePipeline* this$0 = nullptr;
	::java::util::function::Consumer* val$action = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_ReferencePipeline$15_h_