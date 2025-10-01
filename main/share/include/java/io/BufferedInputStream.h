#ifndef _java_io_BufferedInputStream_h_
#define _java_io_BufferedInputStream_h_
//$ class java.io.BufferedInputStream
//$ extends java.io.FilterInputStream

#include <java/io/FilterInputStream.h>
#include <java/lang/Array.h>

#pragma push_macro("U")
#undef U
#pragma push_macro("DEFAULT_BUFFER_SIZE")
#undef DEFAULT_BUFFER_SIZE
#pragma push_macro("BUF_OFFSET")
#undef BUF_OFFSET

namespace java {
	namespace io {
		class InputStream;
	}
}
namespace jdk {
	namespace internal {
		namespace misc {
			class Unsafe;
		}
	}
}

namespace java {
	namespace io {

class $import BufferedInputStream : public ::java::io::FilterInputStream {
	$class(BufferedInputStream, $PRELOAD, ::java::io::FilterInputStream)
public:
	BufferedInputStream();
	void init$(::java::io::InputStream* in);
	void init$(::java::io::InputStream* in, int32_t size);
	virtual int32_t available() override;
	virtual void close() override;
	void fill();
	$bytes* getBufIfOpen();
	::java::io::InputStream* getInIfOpen();
	virtual void mark(int32_t readlimit) override;
	virtual bool markSupported() override;
	using ::java::io::FilterInputStream::read;
	virtual int32_t read() override;
	virtual int32_t read($bytes* b, int32_t off, int32_t len) override;
	int32_t read1($bytes* b, int32_t off, int32_t len);
	virtual void reset() override;
	virtual int64_t skip(int64_t n) override;
	static int32_t DEFAULT_BUFFER_SIZE;
	static ::jdk::internal::misc::Unsafe* U;
	static int64_t BUF_OFFSET;
	$volatile($bytes*) buf = nullptr;
	int32_t count = 0;
	int32_t pos = 0;
	int32_t markpos = 0;
	int32_t marklimit = 0;
};

	} // io
} // java

#pragma pop_macro("U")
#pragma pop_macro("DEFAULT_BUFFER_SIZE")
#pragma pop_macro("BUF_OFFSET")

#endif // _java_io_BufferedInputStream_h_