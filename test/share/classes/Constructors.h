#ifndef _Constructors_h_
#define _Constructors_h_
//$ class Constructors
//$ extends java.lang.Thread

#include <java/lang/Array.h>
#include <java/lang/Thread.h>

namespace java {
	namespace io {
		class PipedReader;
		class PipedWriter;
	}
}

class $export Constructors : public ::java::lang::Thread {
	$class(Constructors, 0, ::java::lang::Thread)
public:
	Constructors();
	void init$();
	static void main($StringArray* args);
	virtual void run() override;
	static void testPipe();
	static ::java::io::PipedWriter* out;
	static ::java::io::PipedReader* in;
	static int32_t totalToWrite;
	static int32_t pipeSize;
};

#endif // _Constructors_h_