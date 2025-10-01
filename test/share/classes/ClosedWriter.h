#ifndef _ClosedWriter_h_
#define _ClosedWriter_h_
//$ class ClosedWriter
//$ extends java.lang.Runnable

#include <java/lang/Array.h>
#include <java/lang/Runnable.h>

namespace java {
	namespace io {
		class PipedInputStream;
		class PipedOutputStream;
	}
}

class $export ClosedWriter : public ::java::lang::Runnable {
	$class(ClosedWriter, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	ClosedWriter();
	void init$();
	static void main($StringArray* args);
	virtual void run() override;
	static ::java::io::PipedInputStream* is;
	static ::java::io::PipedOutputStream* os;
};

#endif // _ClosedWriter_h_