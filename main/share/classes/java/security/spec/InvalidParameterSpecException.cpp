#include <java/security/spec/InvalidParameterSpecException.h>
#include <java/security/GeneralSecurityException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;

namespace java {
	namespace security {
		namespace spec {

void InvalidParameterSpecException::init$() {
	$GeneralSecurityException::init$();
}

void InvalidParameterSpecException::init$($String* msg) {
	$GeneralSecurityException::init$(msg);
}

InvalidParameterSpecException::InvalidParameterSpecException() {
}

InvalidParameterSpecException::InvalidParameterSpecException(const InvalidParameterSpecException& e) : $GeneralSecurityException(e) {
}

void InvalidParameterSpecException::throw$() {
	throw *this;
}

$Class* InvalidParameterSpecException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InvalidParameterSpecException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(InvalidParameterSpecException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(InvalidParameterSpecException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.security.spec.InvalidParameterSpecException",
		"java.security.GeneralSecurityException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(InvalidParameterSpecException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InvalidParameterSpecException);
	});
	return class$;
}

$Class* InvalidParameterSpecException::class$ = nullptr;

		} // spec
	} // security
} // java