#ifndef _java_util_stream_DoublePipeline$4_h_
#define _java_util_stream_DoublePipeline$4_h_
//$ class java.util.stream.DoublePipeline$4
//$ extends java.util.stream.LongPipeline$StatelessOp

#include <java/util/stream/LongPipeline$StatelessOp.h>

namespace java {
	namespace util {
		namespace function {
			class DoubleToLongFunction;
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

class DoublePipeline$4 : public ::java::util::stream::LongPipeline$StatelessOp {
	$class(DoublePipeline$4, $NO_CLASS_INIT, ::java::util::stream::LongPipeline$StatelessOp)
public:
	DoublePipeline$4();
	void init$(::java::util::stream::DoublePipeline* this$0, ::java::util::stream::AbstractPipeline* upstream, ::java::util::stream::StreamShape* inputShape, int32_t opFlags, ::java::util::function::DoubleToLongFunction* val$mapper);
	virtual ::java::util::stream::Sink* opWrapSink(int32_t flags, ::java::util::stream::Sink* sink) override;
	::java::util::stream::DoublePipeline* this$0 = nullptr;
	::java::util::function::DoubleToLongFunction* val$mapper = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_DoublePipeline$4_h_