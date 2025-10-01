#ifndef _java_util_stream_IntPipeline$1$1_h_
#define _java_util_stream_IntPipeline$1$1_h_
//$ class java.util.stream.IntPipeline$1$1
//$ extends java.util.stream.Sink$ChainedInt

#include <java/util/stream/Sink$ChainedInt.h>

namespace java {
	namespace util {
		namespace stream {
			class IntPipeline$1;
			class Sink;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class IntPipeline$1$1 : public ::java::util::stream::Sink$ChainedInt {
	$class(IntPipeline$1$1, $NO_CLASS_INIT, ::java::util::stream::Sink$ChainedInt)
public:
	IntPipeline$1$1();
	using ::java::util::stream::Sink$ChainedInt::accept;
	using ::java::util::stream::Sink$ChainedInt::andThen;
	void init$(::java::util::stream::IntPipeline$1* this$1, ::java::util::stream::Sink* downstream);
	virtual void accept(int32_t t) override;
	::java::util::stream::IntPipeline$1* this$1 = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_IntPipeline$1$1_h_