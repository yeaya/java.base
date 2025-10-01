#ifndef _java_util_stream_SliceOps$3$1_h_
#define _java_util_stream_SliceOps$3$1_h_
//$ class java.util.stream.SliceOps$3$1
//$ extends java.util.stream.Sink$ChainedLong

#include <java/util/stream/Sink$ChainedLong.h>

namespace java {
	namespace util {
		namespace stream {
			class Sink;
			class SliceOps$3;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class SliceOps$3$1 : public ::java::util::stream::Sink$ChainedLong {
	$class(SliceOps$3$1, $NO_CLASS_INIT, ::java::util::stream::Sink$ChainedLong)
public:
	SliceOps$3$1();
	using ::java::util::stream::Sink$ChainedLong::accept;
	using ::java::util::stream::Sink$ChainedLong::andThen;
	void init$(::java::util::stream::SliceOps$3* this$0, ::java::util::stream::Sink* downstream);
	virtual void accept(int64_t t) override;
	virtual void begin(int64_t size) override;
	virtual bool cancellationRequested() override;
	::java::util::stream::SliceOps$3* this$0 = nullptr;
	int64_t n = 0;
	int64_t m = 0;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_SliceOps$3$1_h_