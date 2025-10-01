#ifndef _ClearErrorWriter_h_
#define _ClearErrorWriter_h_
//$ class ClearErrorWriter
//$ extends java.io.PrintWriter

#include <java/io/PrintWriter.h>
#include <java/lang/Array.h>

namespace java {
	namespace io {
		class Writer;
	}
}

class $export ClearErrorWriter : public ::java::io::PrintWriter {
	$class(ClearErrorWriter, $NO_CLASS_INIT, ::java::io::PrintWriter)
public:
	ClearErrorWriter();
	void init$(::java::io::Writer* w, bool autoFlush);
	static void main($StringArray* args);
};

#endif // _ClearErrorWriter_h_