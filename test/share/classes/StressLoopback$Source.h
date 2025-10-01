#ifndef _StressLoopback$Source_h_
#define _StressLoopback$Source_h_
//$ class StressLoopback$Source
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

class $export StressLoopback$Source : public ::java::lang::Object {
	$class(StressLoopback$Source, $NO_CLASS_INIT, ::java::lang::Object)
public:
	StressLoopback$Source();
	void init$(::java::nio::channels::AsynchronousByteChannel* channel);
	virtual int64_t finish();
	virtual void start();
	::java::nio::channels::AsynchronousByteChannel* channel = nullptr;
	::java::nio::ByteBuffer* sentBuffer = nullptr;
	$volatile(int64_t) bytesSent = 0;
	$volatile(bool) finished = false;
};

#endif // _StressLoopback$Source_h_