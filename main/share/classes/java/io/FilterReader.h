#ifndef _java_io_FilterReader_h_
#define _java_io_FilterReader_h_
//$ class java.io.FilterReader
//$ extends java.io.Reader

#include <java/io/Reader.h>
#include <java/lang/Array.h>

namespace java {
	namespace io {

class $export FilterReader : public ::java::io::Reader {
	$class(FilterReader, $NO_CLASS_INIT, ::java::io::Reader)
public:
	FilterReader();
	void init$(::java::io::Reader* in);
	virtual void close() override;
	virtual void mark(int32_t readAheadLimit) override;
	virtual bool markSupported() override;
	using ::java::io::Reader::read;
	virtual int32_t read() override;
	virtual int32_t read($chars* cbuf, int32_t off, int32_t len) override;
	virtual bool ready() override;
	virtual void reset() override;
	virtual int64_t skip(int64_t n) override;
	::java::io::Reader* in = nullptr;
};

	} // io
} // java

#endif // _java_io_FilterReader_h_