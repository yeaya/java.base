#ifndef _TransferTo$ThrowingInputStream_h_
#define _TransferTo$ThrowingInputStream_h_
//$ class TransferTo$ThrowingInputStream
//$ extends java.io.InputStream

#include <java/io/InputStream.h>
#include <java/lang/Array.h>

class TransferTo$ThrowingInputStream : public ::java::io::InputStream {
	$class(TransferTo$ThrowingInputStream, $NO_CLASS_INIT, ::java::io::InputStream)
public:
	TransferTo$ThrowingInputStream();
	void init$();
	virtual int32_t available() override;
	virtual void close() override;
	virtual int32_t read($bytes* b) override;
	virtual int32_t read($bytes* b, int32_t off, int32_t len) override;
	virtual int32_t read() override;
	virtual void reset() override;
	virtual int64_t skip(int64_t n) override;
	bool closed = false;
};

#endif // _TransferTo$ThrowingInputStream_h_