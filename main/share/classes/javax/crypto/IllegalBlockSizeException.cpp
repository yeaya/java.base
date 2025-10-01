#include <javax/crypto/IllegalBlockSizeException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IllegalBlockSizeException::*)()>(&IllegalBlockSizeException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(IllegalBlockSizeException::*)($String*)>(&IllegalBlockSizeException::init$))},
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

IllegalBlockSizeException::IllegalBlockSizeException(const IllegalBlockSizeException& e) {
}

IllegalBlockSizeException IllegalBlockSizeException::wrapper$() {
	$pendingException(this);
	return *this;
}

void IllegalBlockSizeException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* IllegalBlockSizeException::load$($String* name, bool initialize) {
	$loadClass(IllegalBlockSizeException, name, initialize, &_IllegalBlockSizeException_ClassInfo_, allocate$IllegalBlockSizeException);
	return class$;
}

$Class* IllegalBlockSizeException::class$ = nullptr;

	} // crypto
} // javax