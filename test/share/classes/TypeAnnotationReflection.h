#ifndef _TypeAnnotationReflection_h_
#define _TypeAnnotationReflection_h_
//$ class TypeAnnotationReflection
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export TypeAnnotationReflection : public ::java::lang::Object {
	$class(TypeAnnotationReflection, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TypeAnnotationReflection();
	void init$();
	static void check(bool b);
	static void main($StringArray* args);
	static void testArray();
	static void testClassTypeVar();
	static void testClassTypeVarBounds();
	static void testFields();
	static void testInterfaces();
	static void testMethodTypeVar();
	static void testMethodTypeVarBounds();
	static void testNested();
	static void testNestedParameterizedType();
	static void testParameterType();
	static void testParameterTypes();
	static void testParameterizedType();
	static void testReturnType();
	static void testRunException();
	static void testSuper();
	static void testWildcardType();
};

#endif // _TypeAnnotationReflection_h_