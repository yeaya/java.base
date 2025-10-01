#ifndef _Cleanup_h_
#define _Cleanup_h_
//$ class Cleanup
//$ extends java.lang.Thread

#include <java/lang/Array.h>
#include <java/lang/Thread.h>

namespace java {
	namespace io {
		class PipedReader;
		class PipedWriter;
	}
}

class $export Cleanup : public ::java::lang::Thread {
	$class(Cleanup, 0, ::java::lang::Thread)
public:
	Cleanup();
	void init$();
	static void main($StringArray* args);
	virtual void run() override;
	static ::java::io::PipedWriter* w;
	static ::java::io::PipedReader* r;
	static bool isWriterClosed;
};

#endif // _Cleanup_h_