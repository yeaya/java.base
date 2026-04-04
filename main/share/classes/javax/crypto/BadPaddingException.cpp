#include <javax/crypto/BadPaddingException.h>
#include <java/security/GeneralSecurityException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;

namespace javax {
	namespace crypto {

void BadPaddingException::init$() {
	$GeneralSecurityException::init$();
}

void BadPaddingException::init$($String* msg) {
	$GeneralSecurityException::init$(msg);
}

BadPaddingException::BadPaddingException() {
}

BadPaddingException::BadPaddingException(const BadPaddingException& e) : $GeneralSecurityException(e) {
}

void BadPaddingException::throw$() {
	throw *this;
}

$Class* BadPaddingException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BadPaddingException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BadPaddingException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(BadPaddingException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.crypto.BadPaddingException",
		"java.security.GeneralSecurityException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(BadPaddingException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BadPaddingException);
	});
	return class$;
}

$Class* BadPaddingException::class$ = nullptr;

	} // crypto
} // javax