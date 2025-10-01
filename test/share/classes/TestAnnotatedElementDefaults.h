#ifndef _TestAnnotatedElementDefaults_h_
#define _TestAnnotatedElementDefaults_h_
//$ class TestAnnotatedElementDefaults
//$ extends java.lang.Object

#include <java/lang/Array.h>

class AnnotatedElementDelegate;
namespace java {
	namespace util {
		class List;
	}
}

class $export TestAnnotatedElementDefaults : public ::java::lang::Object {
	$class(TestAnnotatedElementDefaults, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TestAnnotatedElementDefaults();
	void init$();
	static ::java::util::List* annotationsToTest();
	static ::java::util::List* elementsToTest();
	static void main($StringArray* args);
	static int32_t testNullHandling(::AnnotatedElementDelegate* delegate);
};

#endif // _TestAnnotatedElementDefaults_h_