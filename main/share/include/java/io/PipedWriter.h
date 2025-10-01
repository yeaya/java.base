#ifndef _java_io_PipedWriter_h_
#define _java_io_PipedWriter_h_
//$ class java.io.PipedWriter
//$ extends java.io.Writer

#include <java/io/Writer.h>
#include <java/lang/Array.h>

namespace java {
	namespace io {
		class PipedReader;
	}
}

namespace java {
	namespace io {

class $import PipedWriter : public ::java::io::Writer {
	$class(PipedWriter, $NO_CLASS_INIT, ::java::io::Writer)
public:
	PipedWriter();
	void init$(::java::io::PipedReader* snk);
	void init$();
	virtual void close() override;
	virtual void connect(::java::io::PipedReader* snk);
	virtual void flush() override;
	using ::java::io::Writer::write;
	virtual void write(int32_t c) override;
	virtual void write($chars* cbuf, int32_t off, int32_t len) override;
	::java::io::PipedReader* sink = nullptr;
	bool closed = false;
};

	} // io
} // java

#endif // _java_io_PipedWriter_h_