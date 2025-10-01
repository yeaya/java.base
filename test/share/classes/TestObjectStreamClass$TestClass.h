#ifndef _TestObjectStreamClass$TestClass_h_
#define _TestObjectStreamClass$TestClass_h_
//$ class TestObjectStreamClass$TestClass
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

class $export TestObjectStreamClass$TestClass : public ::java::io::Serializable {
	$class(TestObjectStreamClass$TestClass, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	TestObjectStreamClass$TestClass();
	void init$();
	static const int64_t serialVersionUID = (int64_t)1;
	$String* str = nullptr;
};

#endif // _TestObjectStreamClass$TestClass_h_