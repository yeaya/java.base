#ifndef _LazyReader_h_
#define _LazyReader_h_
//$ class LazyReader
//$ extends java.lang.Thread

#include <java/lang/Thread.h>

namespace java {
	namespace io {
		class PipedInputStream;
	}
}

class LazyReader : public ::java::lang::Thread {
	$class(LazyReader, $NO_CLASS_INIT, ::java::lang::Thread)
public:
	LazyReader();
	void init$(::java::io::PipedInputStream* snk);
	virtual void run() override;
	::java::io::PipedInputStream* snk = nullptr;
	int32_t delay = 0;
};

#endif // _LazyReader_h_