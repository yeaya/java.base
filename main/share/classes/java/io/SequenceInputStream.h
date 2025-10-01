#ifndef _java_io_SequenceInputStream_h_
#define _java_io_SequenceInputStream_h_
//$ class java.io.SequenceInputStream
//$ extends java.io.InputStream

#include <java/io/InputStream.h>
#include <java/lang/Array.h>

namespace java {
	namespace util {
		class Enumeration;
	}
}

namespace java {
	namespace io {

class $export SequenceInputStream : public ::java::io::InputStream {
	$class(SequenceInputStream, $NO_CLASS_INIT, ::java::io::InputStream)
public:
	SequenceInputStream();
	void init$(::java::util::Enumeration* e);
	void init$(::java::io::InputStream* s1, ::java::io::InputStream* s2);
	virtual int32_t available() override;
	virtual void close() override;
	void nextStream();
	void peekNextStream();
	using ::java::io::InputStream::read;
	virtual int32_t read() override;
	virtual int32_t read($bytes* b, int32_t off, int32_t len) override;
	::java::util::Enumeration* e = nullptr;
	::java::io::InputStream* in = nullptr;
};

	} // io
} // java

#endif // _java_io_SequenceInputStream_h_