#ifndef _StreamDrainer_h_
#define _StreamDrainer_h_
//$ class StreamDrainer
//$ extends java.lang.Thread

#include <java/lang/Thread.h>

namespace java {
	namespace io {
		class ByteArrayOutputStream;
		class InputStream;
	}
}

class StreamDrainer : public ::java::lang::Thread {
	$class(StreamDrainer, $NO_CLASS_INIT, ::java::lang::Thread)
public:
	StreamDrainer();
	void init$(::java::io::InputStream* is);
	virtual void run() override;
	virtual $String* toString() override;
	::java::io::InputStream* is = nullptr;
	::java::io::ByteArrayOutputStream* os = nullptr;
};

#endif // _StreamDrainer_h_