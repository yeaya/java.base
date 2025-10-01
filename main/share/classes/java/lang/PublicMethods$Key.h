#ifndef _java_lang_PublicMethods$Key_h_
#define _java_lang_PublicMethods$Key_h_
//$ class java.lang.PublicMethods$Key
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		namespace reflect {
			class Method;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace reflect {
			class ReflectionFactory;
		}
	}
}

namespace java {
	namespace lang {

class PublicMethods$Key : public ::java::lang::Object {
	$class(PublicMethods$Key, $PRELOAD, ::java::lang::Object)
public:
	PublicMethods$Key();
	void init$(::java::lang::reflect::Method* method);
	virtual bool equals(Object$* o) override;
	virtual int32_t hashCode() override;
	static bool matches(::java::lang::reflect::Method* method, $String* name, $ClassArray* ptypes);
	static ::jdk::internal::reflect::ReflectionFactory* reflectionFactory;
	$String* name = nullptr;
	$ClassArray* ptypes = nullptr;
};

	} // lang
} // java

#endif // _java_lang_PublicMethods$Key_h_