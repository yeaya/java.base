#ifndef _IsSynthetic_h_
#define _IsSynthetic_h_
//$ class IsSynthetic
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export IsSynthetic : public ::java::lang::Object {
	$class(IsSynthetic, $NO_CLASS_INIT, ::java::lang::Object)
public:
	IsSynthetic();
	void init$();
	static void main($StringArray* argv);
	static int32_t test($Class* clazz, bool expected);
};

#endif // _IsSynthetic_h_