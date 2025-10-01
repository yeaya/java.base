#ifndef _Fill4BufferedReader$Source_h_
#define _Fill4BufferedReader$Source_h_
//$ class Fill4BufferedReader$Source
//$ extends java.io.Reader

#include <java/io/Reader.h>
#include <java/lang/Array.h>

class $export Fill4BufferedReader$Source : public ::java::io::Reader {
	$class(Fill4BufferedReader$Source, $NO_CLASS_INIT, ::java::io::Reader)
public:
	Fill4BufferedReader$Source();
	void init$(int32_t shortFall);
	virtual void close() override;
	using ::java::io::Reader::read;
	virtual int32_t read($chars* cbuf, int32_t off, int32_t len) override;
	virtual bool ready() override;
	int32_t shortFall = 0;
	char16_t next = 0;
};

#endif // _Fill4BufferedReader$Source_h_