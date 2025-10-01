#ifndef _FailingFlushAndClose$FailingFlushWriter_h_
#define _FailingFlushAndClose$FailingFlushWriter_h_
//$ class FailingFlushAndClose$FailingFlushWriter
//$ extends java.io.Writer

#include <java/io/Writer.h>
#include <java/lang/Array.h>

class $export FailingFlushAndClose$FailingFlushWriter : public ::java::io::Writer {
	$class(FailingFlushAndClose$FailingFlushWriter, $NO_CLASS_INIT, ::java::io::Writer)
public:
	FailingFlushAndClose$FailingFlushWriter();
	void init$();
	virtual void close() override;
	virtual void flush() override;
	using ::java::io::Writer::write;
	virtual void write($chars* cbuf, int32_t off, int32_t len) override;
	bool closed = false;
};

#endif // _FailingFlushAndClose$FailingFlushWriter_h_