#include <LegacyChainedExceptionSerialization$SubClass.h>

#include <LegacyChainedExceptionSerialization.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ExceptionInInitializerError.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $LegacyChainedExceptionSerialization = ::LegacyChainedExceptionSerialization;
using $ClassInfo = ::java::lang::ClassInfo;
using $ExceptionInInitializerError = ::java::lang::ExceptionInInitializerError;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _LegacyChainedExceptionSerialization$SubClass_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(LegacyChainedExceptionSerialization$SubClass::*)($Throwable*)>(&LegacyChainedExceptionSerialization$SubClass::init$))},
	{"getCause", "()Ljava/lang/Throwable;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _LegacyChainedExceptionSerialization$SubClass_InnerClassesInfo_[] = {
	{"LegacyChainedExceptionSerialization$SubClass", "LegacyChainedExceptionSerialization", "SubClass", $STATIC},
	{}
};

$ClassInfo _LegacyChainedExceptionSerialization$SubClass_ClassInfo_ = {
	$ACC_SUPER,
	"LegacyChainedExceptionSerialization$SubClass",
	"java.lang.ExceptionInInitializerError",
	nullptr,
	nullptr,
	_LegacyChainedExceptionSerialization$SubClass_MethodInfo_,
	nullptr,
	nullptr,
	_LegacyChainedExceptionSerialization$SubClass_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"LegacyChainedExceptionSerialization"
};

$Object* allocate$LegacyChainedExceptionSerialization$SubClass($Class* clazz) {
	return $of($alloc(LegacyChainedExceptionSerialization$SubClass));
}

void LegacyChainedExceptionSerialization$SubClass::init$($Throwable* t) {
	$ExceptionInInitializerError::init$(t);
}

$Throwable* LegacyChainedExceptionSerialization$SubClass::getCause() {
	return $new($Throwable, "always new"_s);
}

LegacyChainedExceptionSerialization$SubClass::LegacyChainedExceptionSerialization$SubClass() {
}

LegacyChainedExceptionSerialization$SubClass::LegacyChainedExceptionSerialization$SubClass(const LegacyChainedExceptionSerialization$SubClass& e) {
}

LegacyChainedExceptionSerialization$SubClass LegacyChainedExceptionSerialization$SubClass::wrapper$() {
	$pendingException(this);
	return *this;
}

void LegacyChainedExceptionSerialization$SubClass::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* LegacyChainedExceptionSerialization$SubClass::load$($String* name, bool initialize) {
	$loadClass(LegacyChainedExceptionSerialization$SubClass, name, initialize, &_LegacyChainedExceptionSerialization$SubClass_ClassInfo_, allocate$LegacyChainedExceptionSerialization$SubClass);
	return class$;
}

$Class* LegacyChainedExceptionSerialization$SubClass::class$ = nullptr;