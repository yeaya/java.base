#ifndef _java_util_stream_DoublePipeline$3_h_
#define _java_util_stream_DoublePipeline$3_h_
//$ class java.util.stream.DoublePipeline$3
//$ extends java.util.stream.IntPipeline$StatelessOp

#include <java/util/stream/IntPipeline$StatelessOp.h>

namespace java {
	namespace util {
		namespace function {
			class DoubleToIntFunction;
		}
	}
}
namespace java {
	namespace util {
		namespace stream {
			class AbstractPipeline;
			class DoublePipeline;
			class Sink;
			class StreamShape;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class DoublePipeline$3 : public ::java::util::stream::IntPipeline$StatelessOp {
	$class(DoublePipeline$3, $NO_CLASS_INIT, ::java::util::stream::IntPipeline$StatelessOp)
public:
	DoublePipeline$3();
	void init$(::java::util::stream::DoublePipeline* this$0, ::java::util::stream::AbstractPipeline* upstream, ::java::util::stream::StreamShape* inputShape, int32_t opFlags, ::java::util::function::DoubleToIntFunction* val$mapper);
	virtual ::java::util::stream::Sink* opWrapSink(int32_t flags, ::java::util::stream::Sink* sink) override;
	::java::util::stream::DoublePipeline* this$0 = nullptr;
	::java::util::function::DoubleToIntFunction* val$mapper = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_DoublePipeline$3_h_