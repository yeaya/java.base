#ifndef _FailingFlushAndClose$FailingCloseInputStream_h_
#define _FailingFlushAndClose$FailingCloseInputStream_h_
//$ class FailingFlushAndClose$FailingCloseInputStream
//$ extends java.io.InputStream

#include <java/io/InputStream.h>

class $export FailingFlushAndClose$FailingCloseInputStream : public ::java::io::InputStream {
	$class(FailingFlushAndClose$FailingCloseInputStream, $NO_CLASS_INIT, ::java::io::InputStream)
public:
	FailingFlushAndClose$FailingCloseInputStream();
	void init$();
	virtual void close() override;
	using ::java::io::InputStream::read;
	virtual int32_t read() override;
	bool closed = false;
};

#endif // _FailingFlushAndClose$FailingCloseInputStream_h_