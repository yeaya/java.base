#ifndef _MyInputStream_h_
#define _MyInputStream_h_
//$ class MyInputStream
//$ extends java.io.InputStream

#include <java/io/InputStream.h>

class MyInputStream : public ::java::io::InputStream {
	$class(MyInputStream, $NO_CLASS_INIT, ::java::io::InputStream)
public:
	MyInputStream();
	void init$(int64_t endoffile);
	virtual int32_t available() override;
	using ::java::io::InputStream::read;
	virtual int32_t read() override;
	int32_t readctr = 0;
	int64_t endoffile = 0;
};

#endif // _MyInputStream_h_