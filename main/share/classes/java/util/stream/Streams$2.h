#ifndef _java_util_stream_Streams$2_h_
#define _java_util_stream_Streams$2_h_
//$ class java.util.stream.Streams$2
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace util {
		namespace stream {
			class BaseStream;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class Streams$2 : public ::java::lang::Runnable {
	$class(Streams$2, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	Streams$2();
	void init$(::java::util::stream::BaseStream* val$a, ::java::util::stream::BaseStream* val$b);
	virtual void run() override;
	::java::util::stream::BaseStream* val$b = nullptr;
	::java::util::stream::BaseStream* val$a = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_Streams$2_h_