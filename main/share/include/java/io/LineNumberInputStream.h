#ifndef _java_io_LineNumberInputStream_h_
#define _java_io_LineNumberInputStream_h_
//$ class java.io.LineNumberInputStream
//$ extends java.io.FilterInputStream

#include <java/io/FilterInputStream.h>
#include <java/lang/Array.h>

namespace java {
	namespace io {
		class InputStream;
	}
}

namespace java {
	namespace io {

class $import LineNumberInputStream : public ::java::io::FilterInputStream {
	$class(LineNumberInputStream, $NO_CLASS_INIT, ::java::io::FilterInputStream)
public:
	LineNumberInputStream();
	void init$(::java::io::InputStream* in);
	virtual int32_t available() override;
	virtual int32_t getLineNumber();
	virtual void mark(int32_t readlimit) override;
	using ::java::io::FilterInputStream::read;
	virtual int32_t read() override;
	virtual int32_t read($bytes* b, int32_t off, int32_t len) override;
	virtual void reset() override;
	virtual void setLineNumber(int32_t lineNumber);
	virtual int64_t skip(int64_t n) override;
	int32_t pushBack = 0;
	int32_t lineNumber = 0;
	int32_t markLineNumber = 0;
	int32_t markPushBack = 0;
};

	} // io
} // java

#endif // _java_io_LineNumberInputStream_h_