#ifndef _java_lang_PublicMethods_h_
#define _java_lang_PublicMethods_h_
//$ class java.lang.PublicMethods
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		namespace reflect {
			class Method;
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

class PublicMethods : public ::java::lang::Object {
	$class(PublicMethods, $NO_CLASS_INIT, ::java::lang::Object)
public:
	PublicMethods();
	void init$();
	void merge(::java::lang::reflect::Method* method);
	$Array<::java::lang::reflect::Method>* toArray();
	::java::util::Map* map = nullptr;
	int32_t methodCount = 0;
};

	} // lang
} // java

#endif // _java_lang_PublicMethods_h_