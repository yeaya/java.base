#ifndef _MyInputStream4CloseStream_h_
#define _MyInputStream4CloseStream_h_
//$ class MyInputStream4CloseStream
//$ extends java.io.InputStream

#include <java/io/InputStream.h>

#pragma push_macro("CLOSED")
#undef CLOSED
#pragma push_macro("OPEN")
#undef OPEN

class MyInputStream4CloseStream : public ::java::io::InputStream {
	$class(MyInputStream4CloseStream, $NO_CLASS_INIT, ::java::io::InputStream)
public:
	MyInputStream4CloseStream();
	void init$();
	virtual void close() override;
	using ::java::io::InputStream::read;
	virtual int32_t read() override;
	static const int32_t OPEN = 1;
	static const int32_t CLOSED = 2;
	int32_t status = 0;
};

#pragma pop_macro("CLOSED")
#pragma pop_macro("OPEN")

#endif // _MyInputStream4CloseStream_h_