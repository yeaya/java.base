#ifndef _java_util_stream_IntPipeline$1_h_
#define _java_util_stream_IntPipeline$1_h_
//$ class java.util.stream.IntPipeline$1
//$ extends java.util.stream.ReferencePipeline$StatelessOp

#include <java/util/stream/ReferencePipeline$StatelessOp.h>

namespace java {
	namespace util {
		namespace function {
			class IntFunction;
		}
	}
}
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

class IntPipeline$1 : public ::java::util::stream::ReferencePipeline$StatelessOp {
	$class(IntPipeline$1, $NO_CLASS_INIT, ::java::util::stream::ReferencePipeline$StatelessOp)
public:
	IntPipeline$1();
	void init$(::java::util::stream::IntPipeline* this$0, ::java::util::stream::AbstractPipeline* upstream, ::java::util::stream::StreamShape* inputShape, int32_t opFlags, ::java::util::function::IntFunction* val$mapper);
	virtual ::java::util::stream::Sink* opWrapSink(int32_t flags, ::java::util::stream::Sink* sink) override;
	::java::util::stream::IntPipeline* this$0 = nullptr;
	::java::util::function::IntFunction* val$mapper = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_IntPipeline$1_h_