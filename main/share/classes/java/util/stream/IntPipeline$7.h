#ifndef _java_util_stream_IntPipeline$7_h_
#define _java_util_stream_IntPipeline$7_h_
//$ class java.util.stream.IntPipeline$7
//$ extends java.util.stream.IntPipeline$StatelessOp

#include <java/util/stream/IntPipeline$StatelessOp.h>

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

class IntPipeline$7 : public ::java::util::stream::IntPipeline$StatelessOp {
	$class(IntPipeline$7, $NO_CLASS_INIT, ::java::util::stream::IntPipeline$StatelessOp)
public:
	IntPipeline$7();
	void init$(::java::util::stream::IntPipeline* this$0, ::java::util::stream::AbstractPipeline* upstream, ::java::util::stream::StreamShape* inputShape, int32_t opFlags, ::java::util::function::IntFunction* val$mapper);
	virtual ::java::util::stream::Sink* opWrapSink(int32_t flags, ::java::util::stream::Sink* sink) override;
	::java::util::stream::IntPipeline* this$0 = nullptr;
	::java::util::function::IntFunction* val$mapper = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_IntPipeline$7_h_