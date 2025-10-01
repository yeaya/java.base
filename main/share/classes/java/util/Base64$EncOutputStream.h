#ifndef _java_util_Base64$EncOutputStream_h_
#define _java_util_Base64$EncOutputStream_h_
//$ class java.util.Base64$EncOutputStream
//$ extends java.io.FilterOutputStream

#include <java/io/FilterOutputStream.h>
#include <java/lang/Array.h>

namespace java {
	namespace io {
		class OutputStream;
	}
}

namespace java {
	namespace util {

class Base64$EncOutputStream : public ::java::io::FilterOutputStream {
	$class(Base64$EncOutputStream, $NO_CLASS_INIT, ::java::io::FilterOutputStream)
public:
	Base64$EncOutputStream();
	void init$(::java::io::OutputStream* os, $chars* base64, $bytes* newline, int32_t linemax, bool doPadding);
	void checkNewline();
	virtual void close() override;
	using ::java::io::FilterOutputStream::write;
	virtual void write(int32_t b) override;
	virtual void write($bytes* b, int32_t off, int32_t len) override;
	void writeb4(char16_t b1, char16_t b2, char16_t b3, char16_t b4);
	int32_t leftover = 0;
	int32_t b0 = 0;
	int32_t b1 = 0;
	int32_t b2 = 0;
	bool closed = false;
	$chars* base64 = nullptr;
	$bytes* newline = nullptr;
	int32_t linemax = 0;
	bool doPadding = false;
	int32_t linepos = 0;
	$bytes* buf = nullptr;
};

	} // util
} // java

#endif // _java_util_Base64$EncOutputStream_h_