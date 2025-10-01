#ifndef _Close$CloseableBAOS_h_
#define _Close$CloseableBAOS_h_
//$ class Close$CloseableBAOS
//$ extends java.io.ByteArrayInputStream

#include <java/io/ByteArrayInputStream.h>
#include <java/lang/Array.h>

class $export Close$CloseableBAOS : public ::java::io::ByteArrayInputStream {
	$class(Close$CloseableBAOS, $NO_CLASS_INIT, ::java::io::ByteArrayInputStream)
public:
	Close$CloseableBAOS();
	void init$($bytes* buf);
	virtual void close() override;
	virtual bool isClosed();
	using ::java::io::ByteArrayInputStream::read;
	using ::java::io::ByteArrayInputStream::readNBytes;
	bool closed = false;
};

#endif // _Close$CloseableBAOS_h_