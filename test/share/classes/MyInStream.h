#ifndef _MyInStream_h_
#define _MyInStream_h_
//$ class MyInStream
//$ extends java.io.InputStream

#include <java/io/InputStream.h>
#include <java/lang/Array.h>

class MyInStream : public ::java::io::InputStream {
	$class(MyInStream, $NO_CLASS_INIT, ::java::io::InputStream)
public:
	MyInStream();
	void init$();
	virtual int32_t available() override;
	using ::java::io::InputStream::read;
	virtual int32_t read() override;
	$chars* buf = nullptr;
	int32_t ctr = 0;
};

#endif // _MyInStream_h_