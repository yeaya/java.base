#ifndef _java_util_stream_Sink$ChainedLong_h_
#define _java_util_stream_Sink$ChainedLong_h_
//$ class java.util.stream.Sink$ChainedLong
//$ extends java.util.stream.Sink$OfLong

#include <java/util/stream/Sink$OfLong.h>

namespace java {
	namespace util {
		namespace stream {
			class Sink;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class Sink$ChainedLong : public ::java::util::stream::Sink$OfLong {
	$class(Sink$ChainedLong, $NO_CLASS_INIT, ::java::util::stream::Sink$OfLong)
public:
	Sink$ChainedLong();
	using ::java::util::stream::Sink$OfLong::accept;
	using ::java::util::stream::Sink$OfLong::andThen;
	void init$(::java::util::stream::Sink* downstream);
	virtual void begin(int64_t size) override;
	virtual bool cancellationRequested() override;
	virtual void end() override;
	::java::util::stream::Sink* downstream = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_Sink$ChainedLong_h_