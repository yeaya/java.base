#ifndef _WriterLoop_h_
#define _WriterLoop_h_
//$ class WriterLoop
//$ extends java.lang.Thread

#include <java/lang/Array.h>
#include <java/lang/Thread.h>

namespace java {
	namespace io {
		class PipedInputStream;
		class PipedOutputStream;
	}
}

class $export WriterLoop : public ::java::lang::Thread {
	$class(WriterLoop, $NO_CLASS_INIT, ::java::lang::Thread)
public:
	WriterLoop();
	void init$();
	static void main($StringArray* args);
	virtual void run() override;
	static ::java::io::PipedOutputStream* out;
	static ::java::io::PipedInputStream* in;
};

#endif // _WriterLoop_h_