#include <javax/crypto/IllegalBlockSizeException.h>

#include <java/security/GeneralSecurityException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;

namespace javax {
	namespace crypto {

$FieldInfo _IllegalBlockSizeException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IllegalBlockSizeException, serialVersionUID)},
	{}
};

$MethodInfo _IllegalBlockSizeException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(IllegalBlockSizeException, init$, void)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(IllegalBlockSizeException, init$, void, $String*)},
	{}
};

$ClassInfo _IllegalBlockSizeException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.crypto.IllegalBlockSizeException",
	"java.security.GeneralSecurityException",
	nullptr,
	_IllegalBlockSizeException_FieldInfo_,
	_IllegalBlockSizeException_MethodInfo_
};

$Object* allocate$IllegalBlockSizeException($Class* clazz) {
	return $of($alloc(IllegalBlockSizeException));
}

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
	$loadClass(IllegalBlockSizeException, name, initialize, &_IllegalBlockSizeException_ClassInfo_, allocate$IllegalBlockSizeException);
	return class$;
}

$Class* IllegalBlockSizeException::class$ = nullptr;

	} // crypto
} // javax