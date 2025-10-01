#ifndef _java_util_stream_Sink$ChainedDouble_h_
#define _java_util_stream_Sink$ChainedDouble_h_
//$ class java.util.stream.Sink$ChainedDouble
//$ extends java.util.stream.Sink$OfDouble

#include <java/util/stream/Sink$OfDouble.h>

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

class Sink$ChainedDouble : public ::java::util::stream::Sink$OfDouble {
	$class(Sink$ChainedDouble, $NO_CLASS_INIT, ::java::util::stream::Sink$OfDouble)
public:
	Sink$ChainedDouble();
	using ::java::util::stream::Sink$OfDouble::accept;
	using ::java::util::stream::Sink$OfDouble::andThen;
	void init$(::java::util::stream::Sink* downstream);
	virtual void begin(int64_t size) override;
	virtual bool cancellationRequested() override;
	virtual void end() override;
	::java::util::stream::Sink* downstream = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_Sink$ChainedDouble_h_