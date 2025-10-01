#include <sun/nio/ch/Reflect$ReflectionError.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Error.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/nio/ch/Reflect.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Reflect = ::sun::nio::ch::Reflect;

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

Reflect$ReflectionError::Reflect$ReflectionError(const Reflect$ReflectionError& e) {
}

Reflect$ReflectionError Reflect$ReflectionError::wrapper$() {
	$pendingException(this);
	return *this;
}

void Reflect$ReflectionError::throwWrapper$() {
	$pendingException(this);
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