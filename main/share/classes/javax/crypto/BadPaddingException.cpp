#include <javax/crypto/BadPaddingException.h>

#include <java/security/GeneralSecurityException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;

namespace javax {
	namespace crypto {

$FieldInfo _BadPaddingException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BadPaddingException, serialVersionUID)},
	{}
};

$MethodInfo _BadPaddingException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(BadPaddingException, init$, void)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(BadPaddingException, init$, void, $String*)},
	{}
};

$ClassInfo _BadPaddingException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.crypto.BadPaddingException",
	"java.security.GeneralSecurityException",
	nullptr,
	_BadPaddingException_FieldInfo_,
	_BadPaddingException_MethodInfo_
};

$Object* allocate$BadPaddingException($Class* clazz) {
	return $of($alloc(BadPaddingException));
}

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
	$loadClass(BadPaddingException, name, initialize, &_BadPaddingException_ClassInfo_, allocate$BadPaddingException);
	return class$;
}

$Class* BadPaddingException::class$ = nullptr;

	} // crypto
} // javax