#ifndef _java_util_stream_SliceOps$1$1_h_
#define _java_util_stream_SliceOps$1$1_h_
//$ class java.util.stream.SliceOps$1$1
//$ extends java.util.stream.Sink$ChainedReference

#include <java/util/stream/Sink$ChainedReference.h>

namespace java {
	namespace util {
		namespace stream {
			class Sink;
			class SliceOps$1;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class SliceOps$1$1 : public ::java::util::stream::Sink$ChainedReference {
	$class(SliceOps$1$1, $NO_CLASS_INIT, ::java::util::stream::Sink$ChainedReference)
public:
	SliceOps$1$1();
	using ::java::util::stream::Sink$ChainedReference::accept;
	void init$(::java::util::stream::SliceOps$1* this$0, ::java::util::stream::Sink* downstream);
	virtual void accept(Object$* t) override;
	virtual void begin(int64_t size) override;
	virtual bool cancellationRequested() override;
	::java::util::stream::SliceOps$1* this$0 = nullptr;
	int64_t n = 0;
	int64_t m = 0;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_SliceOps$1$1_h_