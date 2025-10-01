#ifndef _java_io_Console$3_h_
#define _java_io_Console$3_h_
//$ class java.io.Console$3
//$ extends java.io.PrintWriter

#include <java/io/PrintWriter.h>

namespace java {
	namespace io {
		class Console;
		class Writer;
	}
}

namespace java {
	namespace io {

class Console$3 : public ::java::io::PrintWriter {
	$class(Console$3, $NO_CLASS_INIT, ::java::io::PrintWriter)
public:
	Console$3();
	void init$(::java::io::Console* this$0, ::java::io::Writer* out, bool autoFlush);
	virtual void close() override;
	::java::io::Console* this$0 = nullptr;
};

	} // io
} // java

#endif // _java_io_Console$3_h_