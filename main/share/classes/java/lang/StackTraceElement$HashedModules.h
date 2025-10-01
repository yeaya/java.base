#ifndef _java_lang_StackTraceElement$HashedModules_h_
#define _java_lang_StackTraceElement$HashedModules_h_
//$ class java.lang.StackTraceElement$HashedModules
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("HASHED_MODULES")
#undef HASHED_MODULES

namespace java {
	namespace lang {
		class Module;
	}
}
namespace java {
	namespace util {
		class Set;
	}
}

namespace java {
	namespace lang {

class StackTraceElement$HashedModules : public ::java::lang::Object {
	$class(StackTraceElement$HashedModules, 0, ::java::lang::Object)
public:
	StackTraceElement$HashedModules();
	void init$();
	static bool contains(::java::lang::Module* m);
	static ::java::util::Set* hashedModules();
	static bool $assertionsDisabled;
	static ::java::util::Set* HASHED_MODULES;
};

	} // lang
} // java

#pragma pop_macro("HASHED_MODULES")

#endif // _java_lang_StackTraceElement$HashedModules_h_