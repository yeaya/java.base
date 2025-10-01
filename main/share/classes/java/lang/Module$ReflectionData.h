#ifndef _java_lang_Module$ReflectionData_h_
#define _java_lang_Module$ReflectionData_h_
//$ class java.lang.Module$ReflectionData
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class WeakPairMap;
	}
}

namespace java {
	namespace lang {

class Module$ReflectionData : public ::java::lang::Object {
	$class(Module$ReflectionData, 0, ::java::lang::Object)
public:
	Module$ReflectionData();
	void init$();
	static ::java::lang::WeakPairMap* reads;
	static ::java::lang::WeakPairMap* exports;
	static ::java::lang::WeakPairMap* uses;
};

	} // lang
} // java

#endif // _java_lang_Module$ReflectionData_h_