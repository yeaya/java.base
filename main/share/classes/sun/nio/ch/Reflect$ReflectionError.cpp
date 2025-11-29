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

$FieldInfo _Reflect$ReflectionError_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Reflect$ReflectionError, serialVersionUID)},
	{}
};

$MethodInfo _Reflect$ReflectionError_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, 0, $method(static_cast<void(Reflect$ReflectionError::*)($Throwable*)>(&Reflect$ReflectionError::init$))},
	{}
};

$InnerClassInfo _Reflect$ReflectionError_InnerClassesInfo_[] = {
	{"sun.nio.ch.Reflect$ReflectionError", "sun.nio.ch.Reflect", "ReflectionError", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Reflect$ReflectionError_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.ch.Reflect$ReflectionError",
	"java.lang.Error",
	nullptr,
	_Reflect$ReflectionError_FieldInfo_,
	_Reflect$ReflectionError_MethodInfo_,
	nullptr,
	nullptr,
	_Reflect$ReflectionError_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.ch.Reflect"
};

$Object* allocate$Reflect$ReflectionError($Class* clazz) {
	return $of($alloc(Reflect$ReflectionError));
}

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
	$loadClass(Reflect$ReflectionError, name, initialize, &_Reflect$ReflectionError_ClassInfo_, allocate$Reflect$ReflectionError);
	return class$;
}

$Class* Reflect$ReflectionError::class$ = nullptr;

		} // ch
	} // nio
} // sun