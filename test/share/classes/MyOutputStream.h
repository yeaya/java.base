#ifndef _MyOutputStream_h_
#define _MyOutputStream_h_
//$ class MyOutputStream
//$ extends java.io.OutputStream

#include <java/io/OutputStream.h>

class MyOutputStream : public ::java::io::OutputStream {
	$class(MyOutputStream, $NO_CLASS_INIT, ::java::io::OutputStream)
public:
	MyOutputStream();
	void init$();
	using ::java::io::OutputStream::write;
	virtual void write(int32_t b) override;
};

#endif // _MyOutputStream_h_