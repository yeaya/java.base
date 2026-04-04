#include <sun/nio/ch/Reflect$1.h>
#include <java/lang/reflect/AccessibleObject.h>
#include <sun/nio/ch/Reflect.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleObject = ::java::lang::reflect::AccessibleObject;

namespace sun {
	namespace nio {
		namespace ch {

void Reflect$1::init$($AccessibleObject* val$ao) {
	$set(this, val$ao, val$ao);
}

$Object* Reflect$1::run() {
	$beforeCallerSensitive();
	$nc(this->val$ao)->setAccessible(true);
	return nullptr;
}

Reflect$1::Reflect$1() {
}

$Class* Reflect$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$ao", "Ljava/lang/reflect/AccessibleObject;", nullptr, $FINAL | $SYNTHETIC, $field(Reflect$1, val$ao)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/reflect/AccessibleObject;)V", "()V", 0, $method(Reflect$1, init$, void, $AccessibleObject*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(Reflect$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.nio.ch.Reflect",
		"setAccessible",
		"(Ljava/lang/reflect/AccessibleObject;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.ch.Reflect$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.ch.Reflect$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.ch.Reflect"
	};
	$loadClass(Reflect$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Reflect$1);
	});
	return class$;
}

$Class* Reflect$1::class$ = nullptr;

		} // ch
	} // nio
} // sun