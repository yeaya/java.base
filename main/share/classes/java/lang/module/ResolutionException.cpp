#include <java/lang/module/ResolutionException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace java {
	namespace lang {
		namespace module {

void ResolutionException::init$() {
	$RuntimeException::init$();
}

void ResolutionException::init$($String* msg) {
	$RuntimeException::init$(msg);
}

void ResolutionException::init$($Throwable* cause) {
	$RuntimeException::init$(cause);
}

void ResolutionException::init$($String* msg, $Throwable* cause) {
	$RuntimeException::init$(msg, cause);
}

ResolutionException::ResolutionException() {
}

ResolutionException::ResolutionException(const ResolutionException& e) : $RuntimeException(e) {
}

void ResolutionException::throw$() {
	throw *this;
}

$Class* ResolutionException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ResolutionException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ResolutionException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ResolutionException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(ResolutionException, init$, void, $Throwable*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(ResolutionException, init$, void, $String*, $Throwable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.lang.module.ResolutionException",
		"java.lang.RuntimeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ResolutionException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ResolutionException);
	});
	return class$;
}

$Class* ResolutionException::class$ = nullptr;

		} // module
	} // lang
} // java