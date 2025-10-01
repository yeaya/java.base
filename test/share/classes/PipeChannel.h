#ifndef _PipeChannel_h_
#define _PipeChannel_h_
//$ class PipeChannel
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class Random;
	}
}

class $export PipeChannel : public ::java::lang::Object {
	$class(PipeChannel, 0, ::java::lang::Object)
public:
	PipeChannel();
	void init$();
	static void main($StringArray* args);
	static ::java::util::Random* generator;
};

#endif // _PipeChannel_h_