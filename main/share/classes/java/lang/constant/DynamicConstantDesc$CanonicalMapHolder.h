#ifndef _java_lang_constant_DynamicConstantDesc$CanonicalMapHolder_h_
#define _java_lang_constant_DynamicConstantDesc$CanonicalMapHolder_h_
//$ class java.lang.constant.DynamicConstantDesc$CanonicalMapHolder
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("CANONICAL_MAP")
#undef CANONICAL_MAP

namespace java {
	namespace util {
		class Map;
	}
}

namespace java {
	namespace lang {
		namespace constant {

class DynamicConstantDesc$CanonicalMapHolder : public ::java::lang::Object {
	$class(DynamicConstantDesc$CanonicalMapHolder, 0, ::java::lang::Object)
public:
	DynamicConstantDesc$CanonicalMapHolder();
	void init$();
	static ::java::util::Map* CANONICAL_MAP;
};

		} // constant
	} // lang
} // java

#pragma pop_macro("CANONICAL_MAP")

#endif // _java_lang_constant_DynamicConstantDesc$CanonicalMapHolder_h_