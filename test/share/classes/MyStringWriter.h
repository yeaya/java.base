#ifndef _MyStringWriter_h_
#define _MyStringWriter_h_
//$ class MyStringWriter
//$ extends java.io.StringWriter

#include <java/io/StringWriter.h>

class MyStringWriter : public ::java::io::StringWriter {
	$class(MyStringWriter, $NO_CLASS_INIT, ::java::io::StringWriter)
public:
	MyStringWriter();
	void init$(int32_t bufsize);
	using ::java::io::StringWriter::write;
};

#endif // _MyStringWriter_h_