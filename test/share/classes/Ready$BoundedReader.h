#ifndef _Ready$BoundedReader_h_
#define _Ready$BoundedReader_h_
//$ class Ready$BoundedReader
//$ extends java.io.Reader

#include <java/io/Reader.h>
#include <java/lang/Array.h>

class Ready$BoundedReader : public ::java::io::Reader {
	$class(Ready$BoundedReader, $NO_CLASS_INIT, ::java::io::Reader)
public:
	Ready$BoundedReader();
	void init$($String* content);
	virtual void close() override;
	using ::java::io::Reader::read;
	virtual int32_t read() override;
	virtual int32_t read($chars* buf, int32_t offset, int32_t length) override;
	virtual bool ready() override;
	$chars* content = nullptr;
	int32_t limit = 0;
	int32_t pos = 0;
};

#endif // _Ready$BoundedReader_h_