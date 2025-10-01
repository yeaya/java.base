#ifndef _Write$Sink_h_
#define _Write$Sink_h_
//$ class Write$Sink
//$ extends java.io.OutputStream

#include <java/io/OutputStream.h>

class $export Write$Sink : public ::java::io::OutputStream {
	$class(Write$Sink, $NO_CLASS_INIT, ::java::io::OutputStream)
public:
	Write$Sink();
	void init$();
	using ::java::io::OutputStream::write;
	virtual void write(int32_t b) override;
};

#endif // _Write$Sink_h_