#ifndef _java_util_stream_LongPipeline$4$1_h_
#define _java_util_stream_LongPipeline$4$1_h_
//$ class java.util.stream.LongPipeline$4$1
//$ extends java.util.stream.Sink$ChainedLong

#include <java/util/stream/Sink$ChainedLong.h>

namespace java {
	namespace util {
		namespace stream {
			class LongPipeline$4;
			class Sink;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class LongPipeline$4$1 : public ::java::util::stream::Sink$ChainedLong {
	$class(LongPipeline$4$1, $NO_CLASS_INIT, ::java::util::stream::Sink$ChainedLong)
public:
	LongPipeline$4$1();
	using ::java::util::stream::Sink$ChainedLong::accept;
	using ::java::util::stream::Sink$ChainedLong::andThen;
	void init$(::java::util::stream::LongPipeline$4* this$1, ::java::util::stream::Sink* downstream);
	virtual void accept(int64_t t) override;
	::java::util::stream::LongPipeline$4* this$1 = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_LongPipeline$4$1_h_