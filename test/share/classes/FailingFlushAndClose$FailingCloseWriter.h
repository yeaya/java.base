#ifndef _FailingFlushAndClose$FailingCloseWriter_h_
#define _FailingFlushAndClose$FailingCloseWriter_h_
//$ class FailingFlushAndClose$FailingCloseWriter
//$ extends java.io.Writer

#include <java/io/Writer.h>
#include <java/lang/Array.h>

class $export FailingFlushAndClose$FailingCloseWriter : public ::java::io::Writer {
	$class(FailingFlushAndClose$FailingCloseWriter, $NO_CLASS_INIT, ::java::io::Writer)
public:
	FailingFlushAndClose$FailingCloseWriter();
	void init$();
	virtual void close() override;
	virtual void flush() override;
	using ::java::io::Writer::write;
	virtual void write($chars* cbuf, int32_t off, int32_t len) override;
	bool closed = false;
};

#endif // _FailingFlushAndClose$FailingCloseWriter_h_