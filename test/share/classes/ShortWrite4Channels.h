#ifndef _ShortWrite4Channels_h_
#define _ShortWrite4Channels_h_
//$ class ShortWrite4Channels
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class Random;
	}
}

class $export ShortWrite4Channels : public ::java::lang::Object {
	$class(ShortWrite4Channels, 0, ::java::lang::Object)
public:
	ShortWrite4Channels();
	void init$();
	static void main($StringArray* args);
	static ::java::util::Random* rand;
	static int32_t bytesWritten;
};

#endif // _ShortWrite4Channels_h_