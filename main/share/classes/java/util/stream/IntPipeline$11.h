#ifndef _java_util_stream_IntPipeline$11_h_
#define _java_util_stream_IntPipeline$11_h_
//$ class java.util.stream.IntPipeline$11
//$ extends java.util.stream.IntPipeline$StatelessOp

#include <java/util/stream/IntPipeline$StatelessOp.h>

namespace java {
	namespace util {
		namespace function {
			class IntConsumer;
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

class IntPipeline$11 : public ::java::util::stream::IntPipeline$StatelessOp {
	$class(IntPipeline$11, $NO_CLASS_INIT, ::java::util::stream::IntPipeline$StatelessOp)
public:
	IntPipeline$11();
	void init$(::java::util::stream::IntPipeline* this$0, ::java::util::stream::AbstractPipeline* upstream, ::java::util::stream::StreamShape* inputShape, int32_t opFlags, ::java::util::function::IntConsumer* val$action);
	virtual ::java::util::stream::Sink* opWrapSink(int32_t flags, ::java::util::stream::Sink* sink) override;
	::java::util::stream::IntPipeline* this$0 = nullptr;
	::java::util::function::IntConsumer* val$action = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_IntPipeline$11_h_