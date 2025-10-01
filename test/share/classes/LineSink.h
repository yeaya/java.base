#ifndef _LineSink_h_
#define _LineSink_h_
//$ class LineSink
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace io {
		class BufferedReader;
		class DataInputStream;
		class InputStream;
		class PrintWriter;
	}
}

class LineSink : public ::java::lang::Runnable {
	$class(LineSink, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	LineSink();
	void init$(::java::io::InputStream* us, ::java::io::BufferedReader* ts, int32_t count, ::java::io::PrintWriter* log);
	void init$(::java::io::InputStream* us, ::java::io::BufferedReader* ts, ::java::io::PrintWriter* log);
	$String* readUTFLine();
	virtual void run() override;
	::java::io::DataInputStream* ui = nullptr;
	::java::io::BufferedReader* ti = nullptr;
	int32_t count = 0;
	::java::io::PrintWriter* log = nullptr;
};

#endif // _LineSink_h_