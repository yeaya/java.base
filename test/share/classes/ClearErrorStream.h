#ifndef _ClearErrorStream_h_
#define _ClearErrorStream_h_
//$ class ClearErrorStream
//$ extends java.io.PrintStream

#include <java/io/PrintStream.h>
#include <java/lang/Array.h>

namespace java {
	namespace io {
		class OutputStream;
	}
}

class $export ClearErrorStream : public ::java::io::PrintStream {
	$class(ClearErrorStream, $NO_CLASS_INIT, ::java::io::PrintStream)
public:
	ClearErrorStream();
	void init$(::java::io::OutputStream* out, bool autoFlush);
	static void main($StringArray* args);
};

#endif // _ClearErrorStream_h_