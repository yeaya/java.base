#ifndef _MyInputStream4LargeCopyWithMark_h_
#define _MyInputStream4LargeCopyWithMark_h_
//$ class MyInputStream4LargeCopyWithMark
//$ extends java.io.InputStream

#include <java/io/InputStream.h>
#include <java/lang/Array.h>

class MyInputStream4LargeCopyWithMark : public ::java::io::InputStream {
	$class(MyInputStream4LargeCopyWithMark, $NO_CLASS_INIT, ::java::io::InputStream)
public:
	MyInputStream4LargeCopyWithMark();
	void init$(int64_t bytesLeft);
	virtual int32_t available() override;
	virtual int32_t read() override;
	virtual int32_t read($bytes* b) override;
	virtual int32_t read($bytes* b, int32_t off, int32_t len) override;
	int64_t bytesLeft = 0;
};

#endif // _MyInputStream4LargeCopyWithMark_h_