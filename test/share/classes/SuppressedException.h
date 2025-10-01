#ifndef _SuppressedException_h_
#define _SuppressedException_h_
//$ class SuppressedException
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("CLOSE_MESSAGE")
#undef CLOSE_MESSAGE
#pragma push_macro("SAME_MESSAGE")
#undef SAME_MESSAGE
#pragma push_macro("FLUSH_MESSAGE")
#undef FLUSH_MESSAGE

namespace java {
	namespace io {
		class FilterOutputStream;
		class OutputStream;
	}
}

class $export SuppressedException : public ::java::lang::Object {
	$class(SuppressedException, 0, ::java::lang::Object)
public:
	SuppressedException();
	void init$();
	::java::io::FilterOutputStream* createOutputStream(::java::io::OutputStream* out, bool isBuffered);
	static void main($StringArray* args);
	void test();
	static $String* CLOSE_MESSAGE;
	static $String* FLUSH_MESSAGE;
	static $String* SAME_MESSAGE;
};

#pragma pop_macro("CLOSE_MESSAGE")
#pragma pop_macro("SAME_MESSAGE")
#pragma pop_macro("FLUSH_MESSAGE")

#endif // _SuppressedException_h_