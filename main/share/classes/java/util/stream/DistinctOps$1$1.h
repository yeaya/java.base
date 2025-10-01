#ifndef _java_util_stream_DistinctOps$1$1_h_
#define _java_util_stream_DistinctOps$1$1_h_
//$ class java.util.stream.DistinctOps$1$1
//$ extends java.util.stream.Sink$ChainedReference

#include <java/util/stream/Sink$ChainedReference.h>

namespace java {
	namespace util {
		namespace stream {
			class DistinctOps$1;
			class Sink;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class DistinctOps$1$1 : public ::java::util::stream::Sink$ChainedReference {
	$class(DistinctOps$1$1, $NO_CLASS_INIT, ::java::util::stream::Sink$ChainedReference)
public:
	DistinctOps$1$1();
	using ::java::util::stream::Sink$ChainedReference::accept;
	void init$(::java::util::stream::DistinctOps$1* this$0, ::java::util::stream::Sink* downstream);
	virtual void accept(Object$* t) override;
	virtual void begin(int64_t size) override;
	virtual void end() override;
	::java::util::stream::DistinctOps$1* this$0 = nullptr;
	bool seenNull = false;
	$Object* lastSeen = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_DistinctOps$1$1_h_