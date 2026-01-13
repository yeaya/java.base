#ifndef _java_io_InputStream_h_
#define _java_io_InputStream_h_
//$ class java.io.InputStream
//$ extends java.io.Closeable

#include <java/io/Closeable.h>
#include <java/lang/Array.h>

#pragma push_macro("DEFAULT_BUFFER_SIZE")
#undef DEFAULT_BUFFER_SIZE
#pragma push_macro("MAX_BUFFER_SIZE")
#undef MAX_BUFFER_SIZE
#pragma push_macro("MAX_SKIP_BUFFER_SIZE")
#undef MAX_SKIP_BUFFER_SIZE

namespace java {
	namespace io {
		class OutputStream;
	}
}

namespace java {
	namespace io {

class $import InputStream : public ::java::io::Closeable {
	$class(InputStream, $PRELOAD | $NO_CLASS_INIT, ::java::io::Closeable)
public:
	InputStream();
	void init$();
	virtual int32_t available();
	virtual void close() override;
	virtual void mark(int32_t readlimit);
	virtual bool markSupported();
	static ::java::io::InputStream* nullInputStream();
	virtual int32_t read() {return 0;}
	virtual int32_t read($bytes* b);
	virtual int32_t read($bytes* b, int32_t off, int32_t len);
	virtual $bytes* readAllBytes();
	virtual $bytes* readNBytes(int32_t len);
	virtual int32_t readNBytes($bytes* b, int32_t off, int32_t len);
	virtual void reset();
	virtual int64_t skip(int64_t n);
	virtual void skipNBytes(int64_t n);
	virtual int64_t transferTo(::java::io::OutputStream* out);
	static const int32_t MAX_SKIP_BUFFER_SIZE = 2048;
	static const int32_t DEFAULT_BUFFER_SIZE = 8192;
	static const int32_t MAX_BUFFER_SIZE = 0x7FFFFFF7; // Integer.MAX_VALUE - 8
};

	} // io
} // java

#pragma pop_macro("DEFAULT_BUFFER_SIZE")
#pragma pop_macro("MAX_BUFFER_SIZE")
#pragma pop_macro("MAX_SKIP_BUFFER_SIZE")

#endif // _java_io_InputStream_h_