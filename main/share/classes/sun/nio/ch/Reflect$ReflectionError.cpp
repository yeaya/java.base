#include <sun/nio/ch/Reflect$ReflectionError.h>
#include <java/lang/Error.h>
#include <sun/nio/ch/Reflect.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace nio {
		namespace ch {

void Reflect$ReflectionError::init$($Throwable* x) {
	$Error::init$(x);
}

Reflect$ReflectionError::Reflect$ReflectionError() {
}

Reflect$ReflectionError::Reflect$ReflectionError(const Reflect$ReflectionError& e) : $Error(e) {
}

void Reflect$ReflectionError::throw$() {
	throw *this;
}

$Class* Reflect$ReflectionError::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Reflect$ReflectionError, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Throwable;)V", nullptr, 0, $method(Reflect$ReflectionError, init$, void, $Throwable*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.ch.Reflect$ReflectionError", "sun.nio.ch.Reflect", "ReflectionError", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.ch.Reflect$ReflectionError",
		"java.lang.Error",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.ch.Reflect"
	};
	$loadClass(Reflect$ReflectionError, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Reflect$ReflectionError);
	});
	return class$;
}

$Class* Reflect$ReflectionError::class$ = nullptr;

		} // ch
	} // nio
} // sun