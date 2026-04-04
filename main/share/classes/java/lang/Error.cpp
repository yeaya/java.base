#include <java/lang/Error.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

void Error::init$() {
	$Throwable::init$();
}

void Error::init$($String* message) {
	$Throwable::init$(message);
}

void Error::init$($String* message, $Throwable* cause) {
	$Throwable::init$(message, cause);
}

void Error::init$($Throwable* cause) {
	$Throwable::init$(cause);
}

void Error::init$($String* message, $Throwable* cause, bool enableSuppression, bool writableStackTrace) {
	$Throwable::init$(message, cause, enableSuppression, writableStackTrace);
}

Error::Error() {
}

Error::Error(const Error& e) : $Throwable(e) {
}

void Error::throw$() {
	throw *this;
}

$Class* Error::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(Error, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Error, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(Error, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(Error, init$, void, $String*, $Throwable*)},
		{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(Error, init$, void, $Throwable*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;ZZ)V", nullptr, $PROTECTED, $method(Error, init$, void, $String*, $Throwable*, bool, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.lang.Error",
		"java.lang.Throwable",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Error, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Error);
	});
	return class$;
}

$Class* Error::class$ = nullptr;

	} // lang
} // java