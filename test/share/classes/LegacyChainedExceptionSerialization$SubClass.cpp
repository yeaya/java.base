#include <LegacyChainedExceptionSerialization$SubClass.h>
#include <LegacyChainedExceptionSerialization.h>
#include <java/lang/ExceptionInInitializerError.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ExceptionInInitializerError = ::java::lang::ExceptionInInitializerError;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void LegacyChainedExceptionSerialization$SubClass::init$($Throwable* t) {
	$ExceptionInInitializerError::init$(t);
}

$Throwable* LegacyChainedExceptionSerialization$SubClass::getCause() {
	return $new($Throwable, "always new"_s);
}

LegacyChainedExceptionSerialization$SubClass::LegacyChainedExceptionSerialization$SubClass() {
}

LegacyChainedExceptionSerialization$SubClass::LegacyChainedExceptionSerialization$SubClass(const LegacyChainedExceptionSerialization$SubClass& e) : $ExceptionInInitializerError(e) {
}

void LegacyChainedExceptionSerialization$SubClass::throw$() {
	throw *this;
}

$Class* LegacyChainedExceptionSerialization$SubClass::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(LegacyChainedExceptionSerialization$SubClass, init$, void, $Throwable*)},
		{"getCause", "()Ljava/lang/Throwable;", nullptr, $PUBLIC, $virtualMethod(LegacyChainedExceptionSerialization$SubClass, getCause, $Throwable*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"LegacyChainedExceptionSerialization$SubClass", "LegacyChainedExceptionSerialization", "SubClass", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"LegacyChainedExceptionSerialization$SubClass",
		"java.lang.ExceptionInInitializerError",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"LegacyChainedExceptionSerialization"
	};
	$loadClass(LegacyChainedExceptionSerialization$SubClass, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LegacyChainedExceptionSerialization$SubClass);
	});
	return class$;
}

$Class* LegacyChainedExceptionSerialization$SubClass::class$ = nullptr;