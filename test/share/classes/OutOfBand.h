#ifndef _OutOfBand_h_
#define _OutOfBand_h_
//$ class OutOfBand
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace nio {
		namespace channels {
			class SocketChannel;
		}
	}
}
namespace java {
	namespace util {
		class Random;
	}
}

class $export OutOfBand : public ::java::lang::Object {
	$class(OutOfBand, 0, ::java::lang::Object)
public:
	OutOfBand();
	void init$();
	static void main($StringArray* args);
	static void test1(::java::nio::channels::SocketChannel* client, ::java::nio::channels::SocketChannel* server);
	static void test2(::java::nio::channels::SocketChannel* client, ::java::nio::channels::SocketChannel* server);
	static void test3(::java::nio::channels::SocketChannel* client, ::java::nio::channels::SocketChannel* server);
	static bool $assertionsDisabled;
	static ::java::util::Random* rand;
};

#endif // _OutOfBand_h_