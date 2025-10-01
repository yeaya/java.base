#ifndef _java_util_stream_LongPipeline$7_h_
#define _java_util_stream_LongPipeline$7_h_
//$ class java.util.stream.LongPipeline$7
//$ extends java.util.stream.LongPipeline$StatelessOp

#include <java/util/stream/LongPipeline$StatelessOp.h>

namespace java {
	namespace util {
		namespace stream {
			class AbstractPipeline;
			class LongPipeline;
			class LongStream$LongMapMultiConsumer;
			class Sink;
			class StreamShape;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class LongPipeline$7 : public ::java::util::stream::LongPipeline$StatelessOp {
	$class(LongPipeline$7, $NO_CLASS_INIT, ::java::util::stream::LongPipeline$StatelessOp)
public:
	LongPipeline$7();
	void init$(::java::util::stream::LongPipeline* this$0, ::java::util::stream::AbstractPipeline* upstream, ::java::util::stream::StreamShape* inputShape, int32_t opFlags, ::java::util::stream::LongStream$LongMapMultiConsumer* val$mapper);
	virtual ::java::util::stream::Sink* opWrapSink(int32_t flags, ::java::util::stream::Sink* sink) override;
	::java::util::stream::LongPipeline* this$0 = nullptr;
	::java::util::stream::LongStream$LongMapMultiConsumer* val$mapper = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_LongPipeline$7_h_