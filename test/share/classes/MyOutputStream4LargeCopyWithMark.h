#ifndef _MyOutputStream4LargeCopyWithMark_h_
#define _MyOutputStream4LargeCopyWithMark_h_
//$ class MyOutputStream4LargeCopyWithMark
//$ extends java.io.OutputStream

#include <java/io/OutputStream.h>
#include <java/lang/Array.h>

class MyOutputStream4LargeCopyWithMark : public ::java::io::OutputStream {
	$class(MyOutputStream4LargeCopyWithMark, $NO_CLASS_INIT, ::java::io::OutputStream)
public:
	MyOutputStream4LargeCopyWithMark();
	void init$();
	virtual void write(int32_t b) override;
	virtual void write($bytes* b) override;
	virtual void write($bytes* b, int32_t off, int32_t len) override;
};

#endif // _MyOutputStream4LargeCopyWithMark_h_