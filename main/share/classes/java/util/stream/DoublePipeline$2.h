#ifndef _java_util_stream_DoublePipeline$2_h_
#define _java_util_stream_DoublePipeline$2_h_
//$ class java.util.stream.DoublePipeline$2
//$ extends java.util.stream.DoublePipeline$StatelessOp

#include <java/util/stream/DoublePipeline$StatelessOp.h>

namespace java {
	namespace util {
		namespace function {
			class DoubleUnaryOperator;
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

class DoublePipeline$2 : public ::java::util::stream::DoublePipeline$StatelessOp {
	$class(DoublePipeline$2, $NO_CLASS_INIT, ::java::util::stream::DoublePipeline$StatelessOp)
public:
	DoublePipeline$2();
	void init$(::java::util::stream::DoublePipeline* this$0, ::java::util::stream::AbstractPipeline* upstream, ::java::util::stream::StreamShape* inputShape, int32_t opFlags, ::java::util::function::DoubleUnaryOperator* val$mapper);
	virtual ::java::util::stream::Sink* opWrapSink(int32_t flags, ::java::util::stream::Sink* sink) override;
	::java::util::stream::DoublePipeline* this$0 = nullptr;
	::java::util::function::DoubleUnaryOperator* val$mapper = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_DoublePipeline$2_h_