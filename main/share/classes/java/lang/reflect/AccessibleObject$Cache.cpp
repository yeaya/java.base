#include <java/lang/reflect/AccessibleObject$Cache.h>

#include <java/lang/ref/WeakReference.h>
#include <java/lang/reflect/AccessibleObject.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Reference = ::java::lang::ref::Reference;
using $WeakReference = ::java::lang::ref::WeakReference;
using $AccessibleObject = ::java::lang::reflect::AccessibleObject;

namespace java {
	namespace lang {
		namespace reflect {

$FieldInfo _AccessibleObject$Cache_FieldInfo_[] = {
	{"callerRef", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Ljava/lang/Class<*>;>;", $FINAL, $field(AccessibleObject$Cache, callerRef)},
	{"targetRef", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Ljava/lang/Class<*>;>;", $FINAL, $field(AccessibleObject$Cache, targetRef)},
	{}
};

$MethodInfo _AccessibleObject$Cache_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;Ljava/lang/Class<*>;)V", 0, $method(static_cast<void(AccessibleObject$Cache::*)($Class*,$Class*)>(&AccessibleObject$Cache::init$))},
	{"isCacheFor", "(Ljava/lang/Class;Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;Ljava/lang/Class<*>;)Z", 0},
	{"protectedMemberCallerCache", "(Ljava/lang/Class;Ljava/lang/Class;)Ljava/lang/Object;", "(Ljava/lang/Class<*>;Ljava/lang/Class<*>;)Ljava/lang/Object;", $STATIC, $method(static_cast<$Object*(*)($Class*,$Class*)>(&AccessibleObject$Cache::protectedMemberCallerCache))},
	{}
};

$InnerClassInfo _AccessibleObject$Cache_InnerClassesInfo_[] = {
	{"java.lang.reflect.AccessibleObject$Cache", "java.lang.reflect.AccessibleObject", "Cache", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _AccessibleObject$Cache_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.reflect.AccessibleObject$Cache",
	"java.lang.Object",
	nullptr,
	_AccessibleObject$Cache_FieldInfo_,
	_AccessibleObject$Cache_MethodInfo_,
	nullptr,
	nullptr,
	_AccessibleObject$Cache_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.reflect.AccessibleObject"
};

$Object* allocate$AccessibleObject$Cache($Class* clazz) {
	return $of($alloc(AccessibleObject$Cache));
}

void AccessibleObject$Cache::init$($Class* caller, $Class* target) {
	$set(this, callerRef, $new($WeakReference, caller));
	$set(this, targetRef, $new($WeakReference, target));
}

bool AccessibleObject$Cache::isCacheFor($Class* caller, $Class* refc) {
	bool var$0 = $nc(this->callerRef)->refersTo(caller);
	return var$0 && $nc(this->targetRef)->refersTo(refc);
}

$Object* AccessibleObject$Cache::protectedMemberCallerCache($Class* caller, $Class* refc) {
	return $of($new(AccessibleObject$Cache, caller, refc));
}

AccessibleObject$Cache::AccessibleObject$Cache() {
}

$Class* AccessibleObject$Cache::load$($String* name, bool initialize) {
	$loadClass(AccessibleObject$Cache, name, initialize, &_AccessibleObject$Cache_ClassInfo_, allocate$AccessibleObject$Cache);
	return class$;
}

$Class* AccessibleObject$Cache::class$ = nullptr;

		} // reflect
	} // lang
} // java