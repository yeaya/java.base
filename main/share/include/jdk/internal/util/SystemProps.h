#ifndef _jdk_internal_util_SystemProps_h_
#define _jdk_internal_util_SystemProps_h_
//$ class jdk.internal.util.SystemProps
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class HashMap;
		class Map;
	}
}

namespace jdk {
	namespace internal {
		namespace util {

class $import SystemProps : public ::java::lang::Object {
	$class(SystemProps, $PRELOAD, ::java::lang::Object)
public:
	SystemProps();
	void init$();
	static void fillI18nProps(::java::util::HashMap* cmdProps, $String* base, $String* display, $String* format);
	static ::java::util::Map* initProperties();
	static void put(::java::util::HashMap* props, $String* key, $String* value);
	static void putIfAbsent(::java::util::HashMap* props, $String* key, $String* value);
	static bool $assertionsDisabled;
};

		} // util
	} // internal
} // jdk

#endif // _jdk_internal_util_SystemProps_h_