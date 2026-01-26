#include <javax/crypto/AEADBadTagException.h>

#include <javax/crypto/BadPaddingException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BadPaddingException = ::javax::crypto::BadPaddingException;

namespace javax {
	namespace crypto {

$FieldInfo _AEADBadTagException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AEADBadTagException, serialVersionUID)},
	{}
};

$MethodInfo _AEADBadTagException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(AEADBadTagException, init$, void)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(AEADBadTagException, init$, void, $String*)},
	{}
};

$ClassInfo _AEADBadTagException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.crypto.AEADBadTagException",
	"javax.crypto.BadPaddingException",
	nullptr,
	_AEADBadTagException_FieldInfo_,
	_AEADBadTagException_MethodInfo_
};

$Object* allocate$AEADBadTagException($Class* clazz) {
	return $of($alloc(AEADBadTagException));
}

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
	$loadClass(AEADBadTagException, name, initialize, &_AEADBadTagException_ClassInfo_, allocate$AEADBadTagException);
	return class$;
}

$Class* AEADBadTagException::class$ = nullptr;

	} // crypto
} // javax