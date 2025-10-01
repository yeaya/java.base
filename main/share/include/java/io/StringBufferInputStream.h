#ifndef _java_io_StringBufferInputStream_h_
#define _java_io_StringBufferInputStream_h_
//$ class java.io.StringBufferInputStream
//$ extends java.io.InputStream

#include <java/io/InputStream.h>
#include <java/lang/Array.h>

namespace java {
	namespace io {

class $import StringBufferInputStream : public ::java::io::InputStream {
	$class(StringBufferInputStream, $NO_CLASS_INIT, ::java::io::InputStream)
public:
	StringBufferInputStream();
	void init$($String* s);
	virtual int32_t available() override;
	using ::java::io::InputStream::read;
	virtual int32_t read() override;
	virtual int32_t read($bytes* b, int32_t off, int32_t len) override;
	virtual void reset() override;
	virtual int64_t skip(int64_t n) override;
	$String* buffer = nullptr;
	int32_t pos = 0;
	int32_t count = 0;
};

	} // io
} // java

#endif // _java_io_StringBufferInputStream_h_