#ifndef _TestParameterizedType_h_
#define _TestParameterizedType_h_
//$ class TestParameterizedType
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class List;
		class Map;
		class Set;
	}
}

class $export TestParameterizedType : public ::java::lang::Object {
	$class(TestParameterizedType, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TestParameterizedType();
	void init$();
	static ::java::util::List* createTypes();
	virtual $Object* genericMethod0();
	virtual ::java::util::Set* genericMethod1();
	virtual ::java::util::Set* genericMethod2();
	virtual ::java::util::List* genericMethod3();
	virtual ::java::util::Map* genericMethod4();
	virtual $ObjectArray* genericMethod5();
	virtual $ObjectArray* genericMethod6();
	virtual ::java::util::Set* genericMethod7();
	virtual ::java::util::Set* genericMethod8();
	virtual ::java::util::Set* genericMethod9();
	static void main($StringArray* argv);
	static bool testReflexes(::java::util::List* typeList);
};

#endif // _TestParameterizedType_h_