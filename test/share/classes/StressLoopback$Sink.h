#ifndef _StressLoopback$Sink_h_
#define _StressLoopback$Sink_h_
//$ class StressLoopback$Sink
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class AsynchronousByteChannel;
		}
	}
}

class $export StressLoopback$Sink : public ::java::lang::Object {
	$class(StressLoopback$Sink, $NO_CLASS_INIT, ::java::lang::Object)
public:
	StressLoopback$Sink();
	void init$(::java::nio::channels::AsynchronousByteChannel* channel);
	virtual int64_t finish();
	virtual void start();
	::java::nio::channels::AsynchronousByteChannel* channel = nullptr;
	::java::nio::ByteBuffer* readBuffer = nullptr;
	$volatile(int64_t) bytesRead = 0;
};

#endif // _StressLoopback$Sink_h_