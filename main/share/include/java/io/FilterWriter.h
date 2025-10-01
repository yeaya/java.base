#ifndef _java_io_FilterWriter_h_
#define _java_io_FilterWriter_h_
//$ class java.io.FilterWriter
//$ extends java.io.Writer

#include <java/io/Writer.h>
#include <java/lang/Array.h>

namespace java {
	namespace io {

class $import FilterWriter : public ::java::io::Writer {
	$class(FilterWriter, $NO_CLASS_INIT, ::java::io::Writer)
public:
	FilterWriter();
	void init$(::java::io::Writer* out);
	virtual void close() override;
	virtual void flush() override;
	using ::java::io::Writer::write;
	virtual void write(int32_t c) override;
	virtual void write($chars* cbuf, int32_t off, int32_t len) override;
	virtual void write($String* str, int32_t off, int32_t len) override;
	::java::io::Writer* out = nullptr;
};

	} // io
} // java

#endif // _java_io_FilterWriter_h_