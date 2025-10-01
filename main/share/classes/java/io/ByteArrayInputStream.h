#ifndef _java_io_ByteArrayInputStream_h_
#define _java_io_ByteArrayInputStream_h_
//$ class java.io.ByteArrayInputStream
//$ extends java.io.InputStream

#include <java/io/InputStream.h>
#include <java/lang/Array.h>

namespace java {
	namespace io {
		class OutputStream;
	}
}

namespace java {
	namespace io {

class $export ByteArrayInputStream : public ::java::io::InputStream {
	$class(ByteArrayInputStream, $NO_CLASS_INIT, ::java::io::InputStream)
public:
	ByteArrayInputStream();
	void init$($bytes* buf);
	void init$($bytes* buf, int32_t offset, int32_t length);
	virtual int32_t available() override;
	virtual void close() override;
	virtual void mark(int32_t readAheadLimit) override;
	virtual bool markSupported() override;
	using ::java::io::InputStream::read;
	virtual int32_t read() override;
	virtual int32_t read($bytes* b, int32_t off, int32_t len) override;
	virtual $bytes* readAllBytes() override;
	using ::java::io::InputStream::readNBytes;
	virtual int32_t readNBytes($bytes* b, int32_t off, int32_t len) override;
	virtual void reset() override;
	virtual int64_t skip(int64_t n) override;
	virtual int64_t transferTo(::java::io::OutputStream* out) override;
	$bytes* buf = nullptr;
	int32_t pos = 0;
	int32_t mark$ = 0;
	int32_t count = 0;
};

	} // io
} // java

#endif // _java_io_ByteArrayInputStream_h_