#ifndef _IsAnnotationType_h_
#define _IsAnnotationType_h_
//$ class IsAnnotationType
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export IsAnnotationType : public ::java::lang::Object {
	$class(IsAnnotationType, $NO_CLASS_INIT, ::java::lang::Object)
public:
	IsAnnotationType();
	void init$();
	static void main($StringArray* argv);
	static int32_t test($Class* clazz, bool expected);
};

#endif // _IsAnnotationType_h_