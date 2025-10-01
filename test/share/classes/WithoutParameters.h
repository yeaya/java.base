#ifndef _WithoutParameters_h_
#define _WithoutParameters_h_
//$ class WithoutParameters
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		namespace reflect {
			class Constructor;
			class Executable;
			class Method;
		}
	}
}

class $export WithoutParameters : public ::java::lang::Object {
	$class(WithoutParameters, $NO_CLASS_INIT, ::java::lang::Object)
public:
	WithoutParameters();
	void init$();
	void abortIfTrue(bool predicate, $String* errMessage);
	void checkForErrors();
	void errorIfTrue(bool predicate, $String* errMessage);
	static void main($StringArray* argv);
	virtual void runTest(::java::lang::reflect::Executable* e);
	virtual void runTests($Array<::java::lang::reflect::Method>* methods);
	virtual void runTests($Array<::java::lang::reflect::Constructor>* constructors);
	int32_t errors = 0;
};

#endif // _WithoutParameters_h_