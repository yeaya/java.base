#ifndef _FailingFlushAndClose$FailingFlushOutputStream_h_
#define _FailingFlushAndClose$FailingFlushOutputStream_h_
//$ class FailingFlushAndClose$FailingFlushOutputStream
//$ extends java.io.OutputStream

#include <java/io/OutputStream.h>

class $export FailingFlushAndClose$FailingFlushOutputStream : public ::java::io::OutputStream {
	$class(FailingFlushAndClose$FailingFlushOutputStream, $NO_CLASS_INIT, ::java::io::OutputStream)
public:
	FailingFlushAndClose$FailingFlushOutputStream();
	void init$();
	virtual void close() override;
	virtual void flush() override;
	using ::java::io::OutputStream::write;
	virtual void write(int32_t b) override;
	bool closed = false;
};

#endif // _FailingFlushAndClose$FailingFlushOutputStream_h_