#include <javax/crypto/IllegalBlockSizeException.h>
#include <java/security/GeneralSecurityException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;

namespace javax {
	namespace crypto {

void IllegalBlockSizeException::init$() {
	$GeneralSecurityException::init$();
}

void IllegalBlockSizeException::init$($String* msg) {
	$GeneralSecurityException::init$(msg);
}

IllegalBlockSizeException::IllegalBlockSizeException() {
}

IllegalBlockSizeException::IllegalBlockSizeException(const IllegalBlockSizeException& e) : $GeneralSecurityException(e) {
}

void IllegalBlockSizeException::throw$() {
	throw *this;
}

$Class* IllegalBlockSizeException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IllegalBlockSizeException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(IllegalBlockSizeException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(IllegalBlockSizeException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.crypto.IllegalBlockSizeException",
		"java.security.GeneralSecurityException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(IllegalBlockSizeException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IllegalBlockSizeException);
	});
	return class$;
}

$Class* IllegalBlockSizeException::class$ = nullptr;

	} // crypto
} // javax