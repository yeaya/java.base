#ifndef _FasterWriter_h_
#define _FasterWriter_h_
//$ class FasterWriter
//$ extends java.lang.Runnable

#include <java/lang/Array.h>
#include <java/lang/Runnable.h>

namespace java {
	namespace io {
		class PipedInputStream;
		class PipedOutputStream;
	}
}

class $export FasterWriter : public ::java::lang::Runnable {
	$class(FasterWriter, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	FasterWriter();
	void init$();
	static void main($StringArray* args);
	virtual void run() override;
	static ::java::io::PipedInputStream* is;
	static ::java::io::PipedOutputStream* os;
};

#endif // _FasterWriter_h_