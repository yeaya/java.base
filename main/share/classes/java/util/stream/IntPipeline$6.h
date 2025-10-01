#ifndef _java_util_stream_IntPipeline$6_h_
#define _java_util_stream_IntPipeline$6_h_
//$ class java.util.stream.IntPipeline$6
//$ extends java.util.stream.DoublePipeline$StatelessOp

#include <java/util/stream/DoublePipeline$StatelessOp.h>

namespace java {
	namespace util {
		namespace function {
			class IntToDoubleFunction;
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

class IntPipeline$6 : public ::java::util::stream::DoublePipeline$StatelessOp {
	$class(IntPipeline$6, $NO_CLASS_INIT, ::java::util::stream::DoublePipeline$StatelessOp)
public:
	IntPipeline$6();
	void init$(::java::util::stream::IntPipeline* this$0, ::java::util::stream::AbstractPipeline* upstream, ::java::util::stream::StreamShape* inputShape, int32_t opFlags, ::java::util::function::IntToDoubleFunction* val$mapper);
	virtual ::java::util::stream::Sink* opWrapSink(int32_t flags, ::java::util::stream::Sink* sink) override;
	::java::util::stream::IntPipeline* this$0 = nullptr;
	::java::util::function::IntToDoubleFunction* val$mapper = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_IntPipeline$6_h_