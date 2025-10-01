#ifndef _java_io_BufferedWriter_h_
#define _java_io_BufferedWriter_h_
//$ class java.io.BufferedWriter
//$ extends java.io.Writer

#include <java/io/Writer.h>
#include <java/lang/Array.h>

namespace java {
	namespace io {

class $import BufferedWriter : public ::java::io::Writer {
	$class(BufferedWriter, $PRELOAD, ::java::io::Writer)
public:
	BufferedWriter();
	void init$(::java::io::Writer* out);
	void init$(::java::io::Writer* out, int32_t sz);
	virtual void close() override;
	void ensureOpen();
	virtual void flush() override;
	virtual void flushBuffer();
	int32_t min(int32_t a, int32_t b);
	virtual void newLine();
	using ::java::io::Writer::write;
	virtual void write(int32_t c) override;
	virtual void write($chars* cbuf, int32_t off, int32_t len) override;
	virtual void write($String* s, int32_t off, int32_t len) override;
	::java::io::Writer* out = nullptr;
	$chars* cb = nullptr;
	int32_t nChars = 0;
	int32_t nextChar = 0;
	static int32_t defaultCharBufferSize;
};

	} // io
} // java

#endif // _java_io_BufferedWriter_h_