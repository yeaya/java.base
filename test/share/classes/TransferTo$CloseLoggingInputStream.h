#ifndef _TransferTo$CloseLoggingInputStream_h_
#define _TransferTo$CloseLoggingInputStream_h_
//$ class TransferTo$CloseLoggingInputStream
//$ extends java.io.FilterInputStream

#include <java/io/FilterInputStream.h>

namespace java {
	namespace io {
		class InputStream;
	}
}

class TransferTo$CloseLoggingInputStream : public ::java::io::FilterInputStream {
	$class(TransferTo$CloseLoggingInputStream, $NO_CLASS_INIT, ::java::io::FilterInputStream)
public:
	TransferTo$CloseLoggingInputStream();
	void init$(::java::io::InputStream* in);
	virtual void close() override;
	virtual bool wasClosed();
	bool closed = false;
};

#endif // _TransferTo$CloseLoggingInputStream_h_