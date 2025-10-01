#ifndef _TypeParamAnnotation_h_
#define _TypeParamAnnotation_h_
//$ class TypeParamAnnotation
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export TypeParamAnnotation : public ::java::lang::Object {
	$class(TypeParamAnnotation, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TypeParamAnnotation();
	void init$();
	static void check(bool b);
	static void main($StringArray* args);
	static void testGetAnno();
	static void testGetAnnos();
	static void testOnClass();
	static void testOnMethod();
};

#endif // _TypeParamAnnotation_h_