#ifndef _FailingFlushAndClose$FailingCloseOutputStream_h_
#define _FailingFlushAndClose$FailingCloseOutputStream_h_
//$ class FailingFlushAndClose$FailingCloseOutputStream
//$ extends java.io.OutputStream

#include <java/io/OutputStream.h>

class $export FailingFlushAndClose$FailingCloseOutputStream : public ::java::io::OutputStream {
	$class(FailingFlushAndClose$FailingCloseOutputStream, $NO_CLASS_INIT, ::java::io::OutputStream)
public:
	FailingFlushAndClose$FailingCloseOutputStream();
	void init$();
	virtual void close() override;
	virtual void flush() override;
	using ::java::io::OutputStream::write;
	virtual void write(int32_t b) override;
	bool closed = false;
};

#endif // _FailingFlushAndClose$FailingCloseOutputStream_h_