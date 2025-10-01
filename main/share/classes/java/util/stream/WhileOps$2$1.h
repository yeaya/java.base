#ifndef _java_util_stream_WhileOps$2$1_h_
#define _java_util_stream_WhileOps$2$1_h_
//$ class java.util.stream.WhileOps$2$1
//$ extends java.util.stream.Sink$ChainedInt

#include <java/util/stream/Sink$ChainedInt.h>

namespace java {
	namespace util {
		namespace stream {
			class Sink;
			class WhileOps$2;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class WhileOps$2$1 : public ::java::util::stream::Sink$ChainedInt {
	$class(WhileOps$2$1, $NO_CLASS_INIT, ::java::util::stream::Sink$ChainedInt)
public:
	WhileOps$2$1();
	using ::java::util::stream::Sink$ChainedInt::accept;
	using ::java::util::stream::Sink$ChainedInt::andThen;
	void init$(::java::util::stream::WhileOps$2* this$0, ::java::util::stream::Sink* downstream);
	virtual void accept(int32_t t) override;
	virtual void begin(int64_t size) override;
	virtual bool cancellationRequested() override;
	::java::util::stream::WhileOps$2* this$0 = nullptr;
	bool take = false;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_WhileOps$2$1_h_