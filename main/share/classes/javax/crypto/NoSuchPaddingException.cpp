#include <javax/crypto/NoSuchPaddingException.h>

#include <java/security/GeneralSecurityException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;

namespace javax {
	namespace crypto {

$FieldInfo _NoSuchPaddingException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NoSuchPaddingException, serialVersionUID)},
	{}
};

$MethodInfo _NoSuchPaddingException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(NoSuchPaddingException, init$, void)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(NoSuchPaddingException, init$, void, $String*)},
	{}
};

$ClassInfo _NoSuchPaddingException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.crypto.NoSuchPaddingException",
	"java.security.GeneralSecurityException",
	nullptr,
	_NoSuchPaddingException_FieldInfo_,
	_NoSuchPaddingException_MethodInfo_
};

$Object* allocate$NoSuchPaddingException($Class* clazz) {
	return $of($alloc(NoSuchPaddingException));
}

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
	$loadClass(NoSuchPaddingException, name, initialize, &_NoSuchPaddingException_ClassInfo_, allocate$NoSuchPaddingException);
	return class$;
}

$Class* NoSuchPaddingException::class$ = nullptr;

	} // crypto
} // javax