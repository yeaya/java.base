#include <java/lang/reflect/AccessibleObject$Cache.h>
#include <java/lang/ref/WeakReference.h>
#include <java/lang/reflect/AccessibleObject.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WeakReference = ::java::lang::ref::WeakReference;

namespace java {
	namespace lang {
		namespace reflect {

void AccessibleObject$Cache::init$($Class* caller, $Class* target) {
	$set(this, callerRef, $new($WeakReference, caller));
	$set(this, targetRef, $new($WeakReference, target));
}

bool AccessibleObject$Cache::isCacheFor($Class* caller, $Class* refc) {
	bool var$0 = $nc(this->callerRef)->refersTo(caller);
	return var$0 && $nc(this->targetRef)->refersTo(refc);
}

$Object* AccessibleObject$Cache::protectedMemberCallerCache($Class* caller, $Class* refc) {
	return $new(AccessibleObject$Cache, caller, refc);
}

AccessibleObject$Cache::AccessibleObject$Cache() {
}

$Class* AccessibleObject$Cache::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"callerRef", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Ljava/lang/Class<*>;>;", $FINAL, $field(AccessibleObject$Cache, callerRef)},
		{"targetRef", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Ljava/lang/Class<*>;>;", $FINAL, $field(AccessibleObject$Cache, targetRef)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Class;Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;Ljava/lang/Class<*>;)V", 0, $method(AccessibleObject$Cache, init$, void, $Class*, $Class*)},
		{"isCacheFor", "(Ljava/lang/Class;Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;Ljava/lang/Class<*>;)Z", 0, $virtualMethod(AccessibleObject$Cache, isCacheFor, bool, $Class*, $Class*)},
		{"protectedMemberCallerCache", "(Ljava/lang/Class;Ljava/lang/Class;)Ljava/lang/Object;", "(Ljava/lang/Class<*>;Ljava/lang/Class<*>;)Ljava/lang/Object;", $STATIC, $staticMethod(AccessibleObject$Cache, protectedMemberCallerCache, $Object*, $Class*, $Class*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.reflect.AccessibleObject$Cache", "java.lang.reflect.AccessibleObject", "Cache", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.reflect.AccessibleObject$Cache",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.reflect.AccessibleObject"
	};
	$loadClass(AccessibleObject$Cache, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AccessibleObject$Cache);
	});
	return class$;
}

$Class* AccessibleObject$Cache::class$ = nullptr;

		} // reflect
	} // lang
} // java