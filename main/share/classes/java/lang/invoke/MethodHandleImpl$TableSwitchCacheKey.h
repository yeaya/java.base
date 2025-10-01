#ifndef _java_lang_invoke_MethodHandleImpl$TableSwitchCacheKey_h_
#define _java_lang_invoke_MethodHandleImpl$TableSwitchCacheKey_h_
//$ class java.lang.invoke.MethodHandleImpl$TableSwitchCacheKey
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("CACHE")
#undef CACHE

namespace java {
	namespace lang {
		namespace invoke {
			class MethodType;
		}
	}
}
namespace java {
	namespace util {
		class Map;
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class MethodHandleImpl$TableSwitchCacheKey : public ::java::lang::Object {
	$class(MethodHandleImpl$TableSwitchCacheKey, 0, ::java::lang::Object)
public:
	MethodHandleImpl$TableSwitchCacheKey();
	void init$(::java::lang::invoke::MethodType* basicType, int32_t numberOfCases);
	virtual bool equals(Object$* o) override;
	virtual int32_t hashCode() override;
	static ::java::util::Map* CACHE;
	::java::lang::invoke::MethodType* basicType = nullptr;
	int32_t numberOfCases = 0;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("CACHE")

#endif // _java_lang_invoke_MethodHandleImpl$TableSwitchCacheKey_h_