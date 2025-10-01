#ifndef _FailingFlushAndClose$FailingCloseReader_h_
#define _FailingFlushAndClose$FailingCloseReader_h_
//$ class FailingFlushAndClose$FailingCloseReader
//$ extends java.io.Reader

#include <java/io/Reader.h>
#include <java/lang/Array.h>

class $export FailingFlushAndClose$FailingCloseReader : public ::java::io::Reader {
	$class(FailingFlushAndClose$FailingCloseReader, $NO_CLASS_INIT, ::java::io::Reader)
public:
	FailingFlushAndClose$FailingCloseReader();
	void init$();
	virtual void close() override;
	using ::java::io::Reader::read;
	virtual int32_t read($chars* cbuf, int32_t off, int32_t len) override;
	bool closed = false;
};

#endif // _FailingFlushAndClose$FailingCloseReader_h_