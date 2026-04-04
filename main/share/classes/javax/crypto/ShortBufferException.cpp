#include <javax/crypto/ShortBufferException.h>
#include <java/security/GeneralSecurityException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;

namespace javax {
	namespace crypto {

void ShortBufferException::init$() {
	$GeneralSecurityException::init$();
}

void ShortBufferException::init$($String* msg) {
	$GeneralSecurityException::init$(msg);
}

ShortBufferException::ShortBufferException() {
}

ShortBufferException::ShortBufferException(const ShortBufferException& e) : $GeneralSecurityException(e) {
}

void ShortBufferException::throw$() {
	throw *this;
}

$Class* ShortBufferException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ShortBufferException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ShortBufferException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ShortBufferException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.crypto.ShortBufferException",
		"java.security.GeneralSecurityException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ShortBufferException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ShortBufferException);
	});
	return class$;
}

$Class* ShortBufferException::class$ = nullptr;

	} // crypto
} // javax