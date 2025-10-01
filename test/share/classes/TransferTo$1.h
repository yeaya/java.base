#ifndef _TransferTo$1_h_
#define _TransferTo$1_h_
//$ class TransferTo$1
//$ extends java.io.OutputStream

#include <java/io/OutputStream.h>

class TransferTo$1 : public ::java::io::OutputStream {
	$class(TransferTo$1, $NO_CLASS_INIT, ::java::io::OutputStream)
public:
	TransferTo$1();
	void init$(int32_t val$exceptionPosition);
	using ::java::io::OutputStream::write;
	virtual void write(int32_t b) override;
	int32_t val$exceptionPosition = 0;
	int32_t pos = 0;
};

#endif // _TransferTo$1_h_