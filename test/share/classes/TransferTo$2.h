#ifndef _TransferTo$2_h_
#define _TransferTo$2_h_
//$ class TransferTo$2
//$ extends java.io.InputStream

#include <java/io/InputStream.h>
#include <java/lang/Array.h>

class TransferTo$2 : public ::java::io::InputStream {
	$class(TransferTo$2, $NO_CLASS_INIT, ::java::io::InputStream)
public:
	TransferTo$2();
	void init$(int32_t val$exceptionPosition, $bytes* val$bytes);
	using ::java::io::InputStream::read;
	virtual int32_t read() override;
	$bytes* val$bytes = nullptr;
	int32_t val$exceptionPosition = 0;
	int32_t pos = 0;
};

#endif // _TransferTo$2_h_