#ifndef _Position_h_
#define _Position_h_
//$ class Position
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("ISO8859_1")
#undef ISO8859_1

namespace java {
	namespace nio {
		namespace charset {
			class Charset;
		}
	}
}
namespace java {
	namespace nio {
		namespace file {
			class Path;
		}
	}
}
namespace java {
	namespace util {
		class Random;
	}
}

class $export Position : public ::java::lang::Object {
	$class(Position, 0, ::java::lang::Object)
public:
	Position();
	void init$();
	static void initTestFile(::java::nio::file::Path* blah);
	static void main($StringArray* args);
	static ::java::nio::charset::Charset* ISO8859_1;
	static ::java::util::Random* generator;
};

#pragma pop_macro("ISO8859_1")

#endif // _Position_h_