#ifndef _ReadLineSync$BufferedReaderConsumer_h_
#define _ReadLineSync$BufferedReaderConsumer_h_
//$ class ReadLineSync$BufferedReaderConsumer
//$ extends java.lang.Thread

#include <java/lang/Thread.h>

namespace java {
	namespace io {
		class BufferedReader;
	}
}

class $export ReadLineSync$BufferedReaderConsumer : public ::java::lang::Thread {
	$class(ReadLineSync$BufferedReaderConsumer, $NO_CLASS_INIT, ::java::lang::Thread)
public:
	ReadLineSync$BufferedReaderConsumer();
	void init$(::java::io::BufferedReader* reader);
	virtual void run() override;
	::java::io::BufferedReader* reader = nullptr;
};

#endif // _ReadLineSync$BufferedReaderConsumer_h_