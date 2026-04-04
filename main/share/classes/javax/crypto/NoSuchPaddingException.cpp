#include <javax/crypto/NoSuchPaddingException.h>
#include <java/security/GeneralSecurityException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;

namespace javax {
	namespace crypto {

void NoSuchPaddingException::init$() {
	$GeneralSecurityException::init$();
}

void NoSuchPaddingException::init$($String* msg) {
	$GeneralSecurityException::init$(msg);
}

NoSuchPaddingException::NoSuchPaddingException() {
}

NoSuchPaddingException::NoSuchPaddingException(const NoSuchPaddingException& e) : $GeneralSecurityException(e) {
}

void NoSuchPaddingException::throw$() {
	throw *this;
}

$Class* NoSuchPaddingException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NoSuchPaddingException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(NoSuchPaddingException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(NoSuchPaddingException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.crypto.NoSuchPaddingException",
		"java.security.GeneralSecurityException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(NoSuchPaddingException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NoSuchPaddingException);
	});
	return class$;
}

$Class* NoSuchPaddingException::class$ = nullptr;

	} // crypto
} // javax