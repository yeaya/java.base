#ifndef _Decoder_h_
#define _Decoder_h_
//$ class Decoder
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export Decoder : public ::java::lang::Object {
	$class(Decoder, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Decoder();
	void init$();
	static void main($StringArray* args);
	static void printString($String* s);
};

#endif // _Decoder_h_