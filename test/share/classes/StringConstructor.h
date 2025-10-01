#ifndef _StringConstructor_h_
#define _StringConstructor_h_
//$ class StringConstructor
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export StringConstructor : public ::java::lang::Object {
	$class(StringConstructor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	StringConstructor();
	void init$();
	static void constructWithError($String* badString);
	static void constructWithoutError($String* goodString, int64_t value);
	static void main($StringArray* argv);
};

#endif // _StringConstructor_h_