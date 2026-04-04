#include <java/security/ProviderException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace java {
	namespace security {

void ProviderException::init$() {
	$RuntimeException::init$();
}

void ProviderException::init$($String* s) {
	$RuntimeException::init$(s);
}

void ProviderException::init$($String* message, $Throwable* cause) {
	$RuntimeException::init$(message, cause);
}

void ProviderException::init$($Throwable* cause) {
	$RuntimeException::init$(cause);
}

ProviderException::ProviderException() {
}

ProviderException::ProviderException(const ProviderException& e) : $RuntimeException(e) {
}

void ProviderException::throw$() {
	throw *this;
}

$Class* ProviderException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ProviderException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ProviderException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ProviderException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(ProviderException, init$, void, $String*, $Throwable*)},
		{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(ProviderException, init$, void, $Throwable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.security.ProviderException",
		"java.lang.RuntimeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ProviderException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ProviderException);
	});
	return class$;
}

$Class* ProviderException::class$ = nullptr;

	} // security
} // java