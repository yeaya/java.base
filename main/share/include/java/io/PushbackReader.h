#ifndef _java_io_PushbackReader_h_
#define _java_io_PushbackReader_h_
//$ class java.io.PushbackReader
//$ extends java.io.FilterReader

#include <java/io/FilterReader.h>
#include <java/lang/Array.h>

namespace java {
	namespace io {
		class Reader;
	}
}

namespace java {
	namespace io {

class $import PushbackReader : public ::java::io::FilterReader {
	$class(PushbackReader, $NO_CLASS_INIT, ::java::io::FilterReader)
public:
	PushbackReader();
	void init$(::java::io::Reader* in, int32_t size);
	void init$(::java::io::Reader* in);
	virtual void close() override;
	void ensureOpen();
	virtual void mark(int32_t readAheadLimit) override;
	virtual bool markSupported() override;
	using ::java::io::FilterReader::read;
	virtual int32_t read() override;
	virtual int32_t read($chars* cbuf, int32_t off, int32_t len) override;
	virtual bool ready() override;
	virtual void reset() override;
	virtual int64_t skip(int64_t n) override;
	virtual void unread(int32_t c);
	virtual void unread($chars* cbuf, int32_t off, int32_t len);
	virtual void unread($chars* cbuf);
	$chars* buf = nullptr;
	int32_t pos = 0;
};

	} // io
} // java

#endif // _java_io_PushbackReader_h_