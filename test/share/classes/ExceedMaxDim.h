#ifndef _ExceedMaxDim_h_
#define _ExceedMaxDim_h_
//$ class ExceedMaxDim
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("IMPLICIT_LOADER")
#undef IMPLICIT_LOADER

namespace java {
	namespace lang {
		class ClassLoader;
	}
}

class $export ExceedMaxDim : public ::java::lang::Object {
	$class(ExceedMaxDim, 0, ::java::lang::Object)
public:
	ExceedMaxDim();
	void init$();
	void assertFailForName($String* name, ::java::lang::ClassLoader* cl);
	void assertSucceedForName($String* name, ::java::lang::ClassLoader* cl);
	static void main($StringArray* args);
	void testImplicitLoader();
	void testOtherLoader();
	$String* brackets = nullptr;
	$String* name254 = nullptr;
	$String* name255 = nullptr;
	$String* name256 = nullptr;
	$String* name1 = nullptr;
	$String* bigName = nullptr;
	int32_t error = 0;
	static ::java::lang::ClassLoader* IMPLICIT_LOADER;
};

#pragma pop_macro("IMPLICIT_LOADER")

#endif // _ExceedMaxDim_h_