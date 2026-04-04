#include <java/lang/invoke/LambdaConversionException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {
		namespace invoke {

void LambdaConversionException::init$() {
	$Exception::init$();
}

void LambdaConversionException::init$($String* message) {
	$Exception::init$(message);
}

void LambdaConversionException::init$($String* message, $Throwable* cause) {
	$Exception::init$(message, cause);
}

void LambdaConversionException::init$($Throwable* cause) {
	$Exception::init$(cause);
}

void LambdaConversionException::init$($String* message, $Throwable* cause, bool enableSuppression, bool writableStackTrace) {
	$Exception::init$(message, cause, enableSuppression, writableStackTrace);
}

LambdaConversionException::LambdaConversionException() {
}

LambdaConversionException::LambdaConversionException(const LambdaConversionException& e) : $Exception(e) {
}

void LambdaConversionException::throw$() {
	throw *this;
}

$Class* LambdaConversionException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LambdaConversionException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LambdaConversionException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(LambdaConversionException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(LambdaConversionException, init$, void, $String*, $Throwable*)},
		{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(LambdaConversionException, init$, void, $Throwable*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;ZZ)V", nullptr, $PUBLIC, $method(LambdaConversionException, init$, void, $String*, $Throwable*, bool, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.lang.invoke.LambdaConversionException",
		"java.lang.Exception",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(LambdaConversionException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LambdaConversionException);
	});
	return class$;
}

$Class* LambdaConversionException::class$ = nullptr;

		} // invoke
	} // lang
} // java