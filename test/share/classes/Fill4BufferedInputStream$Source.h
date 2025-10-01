#ifndef _Fill4BufferedInputStream$Source_h_
#define _Fill4BufferedInputStream$Source_h_
//$ class Fill4BufferedInputStream$Source
//$ extends java.io.InputStream

#include <java/io/InputStream.h>
#include <java/lang/Array.h>

class $export Fill4BufferedInputStream$Source : public ::java::io::InputStream {
	$class(Fill4BufferedInputStream$Source, $NO_CLASS_INIT, ::java::io::InputStream)
public:
	Fill4BufferedInputStream$Source();
	void init$(int32_t shortFall);
	virtual int32_t available() override;
	virtual void close() override;
	using ::java::io::InputStream::read;
	virtual int32_t read() override;
	virtual int32_t read($bytes* buf, int32_t off, int32_t len) override;
	int32_t shortFall = 0;
	int8_t next = 0;
};

#endif // _Fill4BufferedInputStream$Source_h_