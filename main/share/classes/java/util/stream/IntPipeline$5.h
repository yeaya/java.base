#ifndef _java_util_stream_IntPipeline$5_h_
#define _java_util_stream_IntPipeline$5_h_
//$ class java.util.stream.IntPipeline$5
//$ extends java.util.stream.LongPipeline$StatelessOp

#include <java/util/stream/LongPipeline$StatelessOp.h>

namespace java {
	namespace util {
		namespace function {
			class IntToLongFunction;
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

class IntPipeline$5 : public ::java::util::stream::LongPipeline$StatelessOp {
	$class(IntPipeline$5, $NO_CLASS_INIT, ::java::util::stream::LongPipeline$StatelessOp)
public:
	IntPipeline$5();
	void init$(::java::util::stream::IntPipeline* this$0, ::java::util::stream::AbstractPipeline* upstream, ::java::util::stream::StreamShape* inputShape, int32_t opFlags, ::java::util::function::IntToLongFunction* val$mapper);
	virtual ::java::util::stream::Sink* opWrapSink(int32_t flags, ::java::util::stream::Sink* sink) override;
	::java::util::stream::IntPipeline* this$0 = nullptr;
	::java::util::function::IntToLongFunction* val$mapper = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_IntPipeline$5_h_