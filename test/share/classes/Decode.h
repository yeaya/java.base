#ifndef _Decode_h_
#define _Decode_h_
//$ class Decode
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export Decode : public ::java::lang::Object {
	$class(Decode, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Decode();
	void init$();
	static void check($String* ashort, int16_t expected);
	static void checkFailure($String* val, $String* message);
	static void main($StringArray* args);
};

#endif // _Decode_h_