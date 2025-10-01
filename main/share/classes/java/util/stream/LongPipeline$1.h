#ifndef _java_util_stream_LongPipeline$1_h_
#define _java_util_stream_LongPipeline$1_h_
//$ class java.util.stream.LongPipeline$1
//$ extends java.util.stream.ReferencePipeline$StatelessOp

#include <java/util/stream/ReferencePipeline$StatelessOp.h>

namespace java {
	namespace util {
		namespace function {
			class LongFunction;
		}
	}
}
namespace java {
	namespace util {
		namespace stream {
			class AbstractPipeline;
			class LongPipeline;
			class Sink;
			class StreamShape;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class LongPipeline$1 : public ::java::util::stream::ReferencePipeline$StatelessOp {
	$class(LongPipeline$1, $NO_CLASS_INIT, ::java::util::stream::ReferencePipeline$StatelessOp)
public:
	LongPipeline$1();
	void init$(::java::util::stream::LongPipeline* this$0, ::java::util::stream::AbstractPipeline* upstream, ::java::util::stream::StreamShape* inputShape, int32_t opFlags, ::java::util::function::LongFunction* val$mapper);
	virtual ::java::util::stream::Sink* opWrapSink(int32_t flags, ::java::util::stream::Sink* sink) override;
	::java::util::stream::LongPipeline* this$0 = nullptr;
	::java::util::function::LongFunction* val$mapper = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_LongPipeline$1_h_