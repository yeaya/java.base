#ifndef _TrailingSlash_h_
#define _TrailingSlash_h_
//$ class TrailingSlash
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class PrintStream;
	}
}

class $export TrailingSlash : public ::java::lang::Object {
	$class(TrailingSlash, 0, ::java::lang::Object)
public:
	TrailingSlash();
	void init$();
	static void check($String* what, $String* fns, bool expected, bool threw);
	static void go($String* fns, bool fis, bool raf, bool fos);
	static void go($String* fn, $String* fns);
	static void main($StringArray* args);
	static ::java::io::PrintStream* log;
	static int32_t failures;
};

#endif // _TrailingSlash_h_