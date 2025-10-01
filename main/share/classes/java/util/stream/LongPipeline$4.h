#ifndef _java_util_stream_LongPipeline$4_h_
#define _java_util_stream_LongPipeline$4_h_
//$ class java.util.stream.LongPipeline$4
//$ extends java.util.stream.IntPipeline$StatelessOp

#include <java/util/stream/IntPipeline$StatelessOp.h>

namespace java {
	namespace util {
		namespace function {
			class LongToIntFunction;
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

class LongPipeline$4 : public ::java::util::stream::IntPipeline$StatelessOp {
	$class(LongPipeline$4, $NO_CLASS_INIT, ::java::util::stream::IntPipeline$StatelessOp)
public:
	LongPipeline$4();
	void init$(::java::util::stream::LongPipeline* this$0, ::java::util::stream::AbstractPipeline* upstream, ::java::util::stream::StreamShape* inputShape, int32_t opFlags, ::java::util::function::LongToIntFunction* val$mapper);
	virtual ::java::util::stream::Sink* opWrapSink(int32_t flags, ::java::util::stream::Sink* sink) override;
	::java::util::stream::LongPipeline* this$0 = nullptr;
	::java::util::function::LongToIntFunction* val$mapper = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_LongPipeline$4_h_