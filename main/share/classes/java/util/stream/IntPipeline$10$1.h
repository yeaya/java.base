#ifndef _java_util_stream_IntPipeline$10$1_h_
#define _java_util_stream_IntPipeline$10$1_h_
//$ class java.util.stream.IntPipeline$10$1
//$ extends java.util.stream.Sink$ChainedInt

#include <java/util/stream/Sink$ChainedInt.h>

namespace java {
	namespace util {
		namespace stream {
			class IntPipeline$10;
			class Sink;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class IntPipeline$10$1 : public ::java::util::stream::Sink$ChainedInt {
	$class(IntPipeline$10$1, $NO_CLASS_INIT, ::java::util::stream::Sink$ChainedInt)
public:
	IntPipeline$10$1();
	using ::java::util::stream::Sink$ChainedInt::accept;
	using ::java::util::stream::Sink$ChainedInt::andThen;
	void init$(::java::util::stream::IntPipeline$10* this$1, ::java::util::stream::Sink* downstream);
	virtual void accept(int32_t t) override;
	virtual void begin(int64_t size) override;
	::java::util::stream::IntPipeline$10* this$1 = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_IntPipeline$10$1_h_