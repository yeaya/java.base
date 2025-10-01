#ifndef _TransferTo$CloseLoggingOutputStream_h_
#define _TransferTo$CloseLoggingOutputStream_h_
//$ class TransferTo$CloseLoggingOutputStream
//$ extends java.io.FilterOutputStream

#include <java/io/FilterOutputStream.h>

namespace java {
	namespace io {
		class OutputStream;
	}
}

class TransferTo$CloseLoggingOutputStream : public ::java::io::FilterOutputStream {
	$class(TransferTo$CloseLoggingOutputStream, $NO_CLASS_INIT, ::java::io::FilterOutputStream)
public:
	TransferTo$CloseLoggingOutputStream();
	void init$(::java::io::OutputStream* out);
	virtual void close() override;
	virtual bool wasClosed();
	bool closed = false;
};

#endif // _TransferTo$CloseLoggingOutputStream_h_