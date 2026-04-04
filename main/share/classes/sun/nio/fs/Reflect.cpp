#include <sun/nio/fs/Reflect.h>
#include <java/lang/AssertionError.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/NoSuchFieldException.h>
#include <java/lang/reflect/AccessibleObject.h>
#include <java/lang/reflect/Field.h>
#include <java/security/AccessController.h>
#include <sun/nio/fs/Reflect$1.h>
#include <jcpp.h>

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchFieldException = ::java::lang::NoSuchFieldException;
using $AccessibleObject = ::java::lang::reflect::AccessibleObject;
using $Field = ::java::lang::reflect::Field;
using $AccessController = ::java::security::AccessController;
using $Reflect$1 = ::sun::nio::fs::Reflect$1;

namespace sun {
	namespace nio {
		namespace fs {

void Reflect::init$() {
}

void Reflect::setAccessible($AccessibleObject* ao) {
	$load(Reflect);
	$beforeCallerSensitive();
	$AccessController::doPrivileged($$new($Reflect$1, ao));
}

$Field* Reflect::lookupField($String* className, $String* fieldName) {
	$load(Reflect);
	$beforeCallerSensitive();
	try {
		$Class* cl = $Class::forName(className);
		$var($Field, f, cl->getDeclaredField(fieldName));
		setAccessible(f);
		return f;
	} catch ($ClassNotFoundException& x) {
		$throwNew($AssertionError, $of(x));
	} catch ($NoSuchFieldException& x) {
		$throwNew($AssertionError, $of(x));
	}
	$shouldNotReachHere();
}

Reflect::Reflect() {
}

$Class* Reflect::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Reflect, init$, void)},
		{"lookupField", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/reflect/Field;", nullptr, $STATIC, $staticMethod(Reflect, lookupField, $Field*, $String*, $String*)},
		{"setAccessible", "(Ljava/lang/reflect/AccessibleObject;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(Reflect, setAccessible, void, $AccessibleObject*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.fs.Reflect$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.fs.Reflect",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.nio.fs.Reflect$1"
	};
	$loadClass(Reflect, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Reflect);
	});
	return class$;
}

$Class* Reflect::class$ = nullptr;

		} // fs
	} // nio
} // sun