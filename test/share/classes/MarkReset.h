#ifndef _MarkReset_h_
#define _MarkReset_h_
//$ class MarkReset
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class PushbackReader;
	}
}

class $export MarkReset : public ::java::lang::Object {
	$class(MarkReset, $NO_CLASS_INIT, ::java::lang::Object)
public:
	MarkReset();
	void init$();
	static void main($StringArray* args);
	static bool testMark(::java::io::PushbackReader* pb);
	static bool testReset(::java::io::PushbackReader* pb);
};

#endif // _MarkReset_h_