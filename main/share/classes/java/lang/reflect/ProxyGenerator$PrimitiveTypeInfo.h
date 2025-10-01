#ifndef _java_lang_reflect_ProxyGenerator$PrimitiveTypeInfo_h_
#define _java_lang_reflect_ProxyGenerator$PrimitiveTypeInfo_h_
//$ class java.lang.reflect.ProxyGenerator$PrimitiveTypeInfo
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Map;
	}
}

namespace java {
	namespace lang {
		namespace reflect {

class ProxyGenerator$PrimitiveTypeInfo : public ::java::lang::Object {
	$class(ProxyGenerator$PrimitiveTypeInfo, 0, ::java::lang::Object)
public:
	ProxyGenerator$PrimitiveTypeInfo();
	void init$($Class* primitiveClass, $Class* wrapperClass);
	static void add($Class* primitiveClass, $Class* wrapperClass);
	static ::java::lang::reflect::ProxyGenerator$PrimitiveTypeInfo* get($Class* cl);
	static bool $assertionsDisabled;
	static ::java::util::Map* table;
	$String* wrapperClassName = nullptr;
	$String* wrapperValueOfDesc = nullptr;
	$String* unwrapMethodName = nullptr;
	$String* unwrapMethodDesc = nullptr;
};

		} // reflect
	} // lang
} // java

#endif // _java_lang_reflect_ProxyGenerator$PrimitiveTypeInfo_h_