#ifndef _java_util_stream_Streams$1_h_
#define _java_util_stream_Streams$1_h_
//$ class java.util.stream.Streams$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace util {
		namespace stream {

class Streams$1 : public ::java::lang::Runnable {
	$class(Streams$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	Streams$1();
	void init$(::java::lang::Runnable* val$a, ::java::lang::Runnable* val$b);
	virtual void run() override;
	::java::lang::Runnable* val$b = nullptr;
	::java::lang::Runnable* val$a = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_Streams$1_h_