#ifndef _DecodeNonEncoded_h_
#define _DecodeNonEncoded_h_
//$ class DecodeNonEncoded
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export DecodeNonEncoded : public ::java::lang::Object {
	$class(DecodeNonEncoded, 0, ::java::lang::Object)
public:
	DecodeNonEncoded();
	void init$();
	static void main($StringArray* args);
	static $StringArray* errorStrings;
	static $StringArray* ignoreStrings;
};

#endif // _DecodeNonEncoded_h_