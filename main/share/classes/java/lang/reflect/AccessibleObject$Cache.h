#ifndef _java_lang_reflect_AccessibleObject$Cache_h_
#define _java_lang_reflect_AccessibleObject$Cache_h_
//$ class java.lang.reflect.AccessibleObject$Cache
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		namespace ref {
			class WeakReference;
		}
	}
}

namespace java {
	namespace lang {
		namespace reflect {

class AccessibleObject$Cache : public ::java::lang::Object {
	$class(AccessibleObject$Cache, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AccessibleObject$Cache();
	void init$($Class* caller, $Class* target);
	virtual bool isCacheFor($Class* caller, $Class* refc);
	static $Object* protectedMemberCallerCache($Class* caller, $Class* refc);
	::java::lang::ref::WeakReference* callerRef = nullptr;
	::java::lang::ref::WeakReference* targetRef = nullptr;
};

		} // reflect
	} // lang
} // java

#endif // _java_lang_reflect_AccessibleObject$Cache_h_