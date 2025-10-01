#ifndef _java_util_stream_ReferencePipeline$8_h_
#define _java_util_stream_ReferencePipeline$8_h_
//$ class java.util.stream.ReferencePipeline$8
//$ extends java.util.stream.IntPipeline$StatelessOp

#include <java/util/stream/IntPipeline$StatelessOp.h>

namespace java {
	namespace util {
		namespace function {
			class Function;
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

class ReferencePipeline$8 : public ::java::util::stream::IntPipeline$StatelessOp {
	$class(ReferencePipeline$8, $NO_CLASS_INIT, ::java::util::stream::IntPipeline$StatelessOp)
public:
	ReferencePipeline$8();
	void init$(::java::util::stream::ReferencePipeline* this$0, ::java::util::stream::AbstractPipeline* upstream, ::java::util::stream::StreamShape* inputShape, int32_t opFlags, ::java::util::function::Function* val$mapper);
	virtual ::java::util::stream::Sink* opWrapSink(int32_t flags, ::java::util::stream::Sink* sink) override;
	::java::util::stream::ReferencePipeline* this$0 = nullptr;
	::java::util::function::Function* val$mapper = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_ReferencePipeline$8_h_