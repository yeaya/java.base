#ifndef _Encodings_h_
#define _Encodings_h_
//$ class Encodings
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export Encodings : public ::java::lang::Object {
	$class(Encodings, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Encodings();
	using ::java::lang::Object::equals;
	void init$();
	static bool equals($bytes* a, $bytes* b);
	static void go($String* enc, $String* str, $bytes* bytes, bool bidir);
	static void go($String* enc, $String* str, $bytes* bytes);
	static void main($StringArray* args);
};

#endif // _Encodings_h_