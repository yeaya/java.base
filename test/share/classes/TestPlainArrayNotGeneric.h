#ifndef _TestPlainArrayNotGeneric_h_
#define _TestPlainArrayNotGeneric_h_
//$ class TestPlainArrayNotGeneric
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		namespace reflect {
			class Type;
		}
	}
}
namespace java {
	namespace util {
		class List;
		class Set;
	}
}

class $export TestPlainArrayNotGeneric : public ::java::lang::Object {
	$class(TestPlainArrayNotGeneric, 0, ::java::lang::Object)
public:
	TestPlainArrayNotGeneric();
	void init$(::java::util::List* p1);
	void init$(::java::util::List* p1, $StringArray* p2);
	static void check($Array<::java::lang::reflect::Type>* types, $String* elementKind, $String* what);
	static void check(::java::lang::reflect::Type* t, $String* what);
	static void check2(::java::lang::reflect::Type* t, $String* what);
	static void checkClass($Class* c);
	static void fail($String* why);
	virtual $StringArray* m1(::java::util::List* p1);
	virtual ::java::util::List* m2($StringArray* p1);
	virtual void m3(::java::util::List* p1, $StringArray* p2);
	virtual void m4(::java::util::List* p1);
	virtual ::java::util::List* m5(::java::util::List* p1);
	virtual $ObjectArray* m6($ObjectArray* p1, ::java::util::List* p2);
	virtual ::java::util::List* m6(::java::util::List* p1);
	virtual ::java::util::List* m7($Array<::java::util::List>* p1);
	virtual ::java::util::List* m8(::java::util::List* p1);
	virtual $Array<::java::util::List>* m9($Array<::java::util::List>* p1);
	static void main($StringArray* args);
	static $String* lastFailure;
	static int32_t failureCount;
	static ::java::util::Set* checking;
};

#endif // _TestPlainArrayNotGeneric_h_