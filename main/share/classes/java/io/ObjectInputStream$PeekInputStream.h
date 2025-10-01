#ifndef _java_io_ObjectInputStream$PeekInputStream_h_
#define _java_io_ObjectInputStream$PeekInputStream_h_
//$ class java.io.ObjectInputStream$PeekInputStream
//$ extends java.io.InputStream

#include <java/io/InputStream.h>
#include <java/lang/Array.h>

namespace java {
	namespace io {

class ObjectInputStream$PeekInputStream : public ::java::io::InputStream {
	$class(ObjectInputStream$PeekInputStream, $NO_CLASS_INIT, ::java::io::InputStream)
public:
	ObjectInputStream$PeekInputStream();
	void init$(::java::io::InputStream* in);
	virtual int32_t available() override;
	virtual void close() override;
	virtual int64_t getBytesRead();
	virtual int32_t peek();
	using ::java::io::InputStream::read;
	virtual int32_t read() override;
	virtual int32_t read($bytes* b, int32_t off, int32_t len) override;
	virtual void readFully($bytes* b, int32_t off, int32_t len);
	virtual int64_t skip(int64_t n) override;
	::java::io::InputStream* in = nullptr;
	int32_t peekb = 0;
	int64_t totalBytesRead = 0;
};

	} // io
} // java

#endif // _java_io_ObjectInputStream$PeekInputStream_h_