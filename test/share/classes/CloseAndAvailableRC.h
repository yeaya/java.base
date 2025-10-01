#ifndef _CloseAndAvailableRC_h_
#define _CloseAndAvailableRC_h_
//$ class CloseAndAvailableRC
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class PipedInputStream;
		class PipedOutputStream;
	}
}
namespace java {
	namespace lang {
		class Thread;
	}
}

class $export CloseAndAvailableRC : public ::java::lang::Object {
	$class(CloseAndAvailableRC, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CloseAndAvailableRC();
	void init$();
	void cleanup();
	void go();
	static void main($StringArray* args);
	void resetPipes();
	::java::io::PipedInputStream* inPipe = nullptr;
	::java::io::PipedOutputStream* outPipe = nullptr;
	$Thread* sink = nullptr;
	$volatile(bool) stop = false;
	$volatile(bool) stopTest = false;
};

#endif // _CloseAndAvailableRC_h_