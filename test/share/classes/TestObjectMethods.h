#ifndef _TestObjectMethods_h_
#define _TestObjectMethods_h_
//$ class TestObjectMethods
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		namespace reflect {
			class AnnotatedType;
			class AnnotatedWildcardType;
		}
	}
}
namespace java {
	namespace util {
		namespace regex {
			class Pattern;
		}
	}
}

class $export TestObjectMethods : public ::java::lang::Object {
	$class(TestObjectMethods, 0, ::java::lang::Object)
public:
	TestObjectMethods();
	void init$();
	static void checkTypesForEquality(::java::lang::reflect::AnnotatedType* annotType1, ::java::lang::reflect::AnnotatedType* annotType2, bool expected);
	static ::java::lang::reflect::AnnotatedWildcardType* extractWildcard($String* methodName);
	static void main($StringArray* args);
	static void testAnnotationsMatterForEquals($Class* clazz1, $Class* clazz2);
	static void testEquals($Class* clazz);
	static void testEqualsReflexivity($Class* clazz);
	static void testFbounds();
	static void testGetAnnotations($Class* clazz, bool annotationsExpectedOnMethods);
	static void testToString($Class* clazz);
	static void testWildcards();
	static int32_t errors;
	static ::java::util::regex::Pattern* annotationRegex;
};

#endif // _TestObjectMethods_h_