#ifndef _java_util_stream_Sink$ChainedInt_h_
#define _java_util_stream_Sink$ChainedInt_h_
//$ class java.util.stream.Sink$ChainedInt
//$ extends java.util.stream.Sink$OfInt

#include <java/util/stream/Sink$OfInt.h>

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

class Sink$ChainedInt : public ::java::util::stream::Sink$OfInt {
	$class(Sink$ChainedInt, $NO_CLASS_INIT, ::java::util::stream::Sink$OfInt)
public:
	Sink$ChainedInt();
	using ::java::util::stream::Sink$OfInt::accept;
	using ::java::util::stream::Sink$OfInt::andThen;
	void init$(::java::util::stream::Sink* downstream);
	virtual void begin(int64_t size) override;
	virtual bool cancellationRequested() override;
	virtual void end() override;
	::java::util::stream::Sink* downstream = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_Sink$ChainedInt_h_