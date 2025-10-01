#ifndef _java_util_stream_WhileOps$1$1_h_
#define _java_util_stream_WhileOps$1$1_h_
//$ class java.util.stream.WhileOps$1$1
//$ extends java.util.stream.Sink$ChainedReference

#include <java/util/stream/Sink$ChainedReference.h>

namespace java {
	namespace util {
		namespace stream {
			class Sink;
			class WhileOps$1;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class WhileOps$1$1 : public ::java::util::stream::Sink$ChainedReference {
	$class(WhileOps$1$1, $NO_CLASS_INIT, ::java::util::stream::Sink$ChainedReference)
public:
	WhileOps$1$1();
	using ::java::util::stream::Sink$ChainedReference::accept;
	void init$(::java::util::stream::WhileOps$1* this$0, ::java::util::stream::Sink* downstream);
	virtual void accept(Object$* t) override;
	virtual void begin(int64_t size) override;
	virtual bool cancellationRequested() override;
	::java::util::stream::WhileOps$1* this$0 = nullptr;
	bool take = false;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_WhileOps$1$1_h_