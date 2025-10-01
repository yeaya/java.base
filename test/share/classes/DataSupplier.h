#ifndef _DataSupplier_h_
#define _DataSupplier_h_
//$ class DataSupplier
//$ extends java.io.InputStream

#include <java/io/InputStream.h>
#include <java/lang/Array.h>

class DataSupplier : public ::java::io::InputStream {
	$class(DataSupplier, 0, ::java::io::InputStream)
public:
	DataSupplier();
	void init$();
	virtual int32_t read() override;
	virtual int32_t read($bytes* b) override;
	virtual int32_t read($bytes* b, int32_t off, int32_t len) override;
	virtual int64_t skip(int64_t n) override;
	int32_t aposition = 0;
	static $bytes* buffer;
};

#endif // _DataSupplier_h_