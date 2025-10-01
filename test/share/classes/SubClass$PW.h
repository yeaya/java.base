#ifndef _SubClass$PW_h_
#define _SubClass$PW_h_
//$ class SubClass$PW
//$ extends java.io.PrintWriter

#include <java/io/PrintWriter.h>

namespace java {
	namespace io {
		class Writer;
	}
}

class $export SubClass$PW : public ::java::io::PrintWriter {
	$class(SubClass$PW, $NO_CLASS_INIT, ::java::io::PrintWriter)
public:
	SubClass$PW();
	void init$(::java::io::Writer* out);
	using ::java::io::PrintWriter::println;
	virtual void println() override;
};

#endif // _SubClass$PW_h_