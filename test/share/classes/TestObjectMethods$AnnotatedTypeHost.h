#ifndef _TestObjectMethods$AnnotatedTypeHost_h_
#define _TestObjectMethods$AnnotatedTypeHost_h_
//$ class TestObjectMethods$AnnotatedTypeHost
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class Number;
	}
}
namespace java {
	namespace util {
		class List;
		class Set;
	}
}

class $export TestObjectMethods$AnnotatedTypeHost : public ::java::lang::Object {
	$class(TestObjectMethods$AnnotatedTypeHost, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TestObjectMethods$AnnotatedTypeHost();
	void init$();
	virtual int32_t foo();
	virtual $Object* fooE();
	virtual ::java::lang::Number* fooF();
	virtual $Object* fooG();
	virtual $ints* fooIntArray();
	virtual ::java::util::Set* fooNumberSet();
	virtual ::java::util::Set* fooNumberSet2();
	virtual ::java::util::Set* fooNumberSet3();
	virtual ::java::util::List* fooObjectList();
	virtual ::java::util::Set* fooObjectSet();
	virtual ::java::util::Set* fooSetNumber();
	virtual ::java::util::Set* fooSetString();
	virtual $String* fooString();
	virtual $StringArray* fooStringArray();
	virtual $Array<::java::lang::String, 2>* fooStringArrayArray();
	virtual void fooVoid();
};

#endif // _TestObjectMethods$AnnotatedTypeHost_h_