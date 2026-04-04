#include <javax/crypto/AEADBadTagException.h>
#include <javax/crypto/BadPaddingException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BadPaddingException = ::javax::crypto::BadPaddingException;

namespace javax {
	namespace crypto {

void AEADBadTagException::init$() {
	$BadPaddingException::init$();
}

void AEADBadTagException::init$($String* msg) {
	$BadPaddingException::init$(msg);
}

AEADBadTagException::AEADBadTagException() {
}

AEADBadTagException::AEADBadTagException(const AEADBadTagException& e) : $BadPaddingException(e) {
}

void AEADBadTagException::throw$() {
	throw *this;
}

$Class* AEADBadTagException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AEADBadTagException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AEADBadTagException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(AEADBadTagException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.crypto.AEADBadTagException",
		"javax.crypto.BadPaddingException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AEADBadTagException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AEADBadTagException);
	});
	return class$;
}

$Class* AEADBadTagException::class$ = nullptr;

	} // crypto
} // javax