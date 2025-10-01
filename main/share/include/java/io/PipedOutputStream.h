#ifndef _java_io_PipedOutputStream_h_
#define _java_io_PipedOutputStream_h_
//$ class java.io.PipedOutputStream
//$ extends java.io.OutputStream

#include <java/io/OutputStream.h>
#include <java/lang/Array.h>

namespace java {
	namespace io {
		class PipedInputStream;
	}
}

namespace java {
	namespace io {

class $import PipedOutputStream : public ::java::io::OutputStream {
	$class(PipedOutputStream, $NO_CLASS_INIT, ::java::io::OutputStream)
public:
	PipedOutputStream();
	void init$(::java::io::PipedInputStream* snk);
	void init$();
	virtual void close() override;
	virtual void connect(::java::io::PipedInputStream* snk);
	virtual void flush() override;
	using ::java::io::OutputStream::write;
	virtual void write(int32_t b) override;
	virtual void write($bytes* b, int32_t off, int32_t len) override;
	$volatile(::java::io::PipedInputStream*) sink = nullptr;
};

	} // io
} // java

#endif // _java_io_PipedOutputStream_h_