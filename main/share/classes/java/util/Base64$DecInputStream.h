#ifndef _java_util_Base64$DecInputStream_h_
#define _java_util_Base64$DecInputStream_h_
//$ class java.util.Base64$DecInputStream
//$ extends java.io.InputStream

#include <java/io/InputStream.h>
#include <java/lang/Array.h>

namespace java {
	namespace util {

class Base64$DecInputStream : public ::java::io::InputStream {
	$class(Base64$DecInputStream, $NO_CLASS_INIT, ::java::io::InputStream)
public:
	Base64$DecInputStream();
	void init$(::java::io::InputStream* is, $ints* base64, bool isMIME);
	virtual int32_t available() override;
	virtual void close() override;
	int32_t eof($bytes* b, int32_t off, int32_t pos, int32_t limit);
	int32_t leftovers($bytes* b, int32_t off, int32_t pos, int32_t limit);
	int32_t padding($bytes* b, int32_t off, int32_t pos, int32_t limit);
	using ::java::io::InputStream::read;
	virtual int32_t read() override;
	virtual int32_t read($bytes* b, int32_t off, int32_t len) override;
	::java::io::InputStream* is = nullptr;
	bool isMIME = false;
	$ints* base64 = nullptr;
	int32_t bits = 0;
	int32_t wpos = 0;
	int32_t rpos = 0;
	bool eof$ = false;
	bool closed = false;
	$bytes* sbBuf = nullptr;
};

	} // util
} // java

#endif // _java_util_Base64$DecInputStream_h_