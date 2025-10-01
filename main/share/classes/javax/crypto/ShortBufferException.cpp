#include <javax/crypto/ShortBufferException.h>

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

$FieldInfo _ShortBufferException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ShortBufferException, serialVersionUID)},
	{}
};

$MethodInfo _ShortBufferException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ShortBufferException::*)()>(&ShortBufferException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ShortBufferException::*)($String*)>(&ShortBufferException::init$))},
	{}
};

$ClassInfo _ShortBufferException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.crypto.ShortBufferException",
	"java.security.GeneralSecurityException",
	nullptr,
	_ShortBufferException_FieldInfo_,
	_ShortBufferException_MethodInfo_
};

$Object* allocate$ShortBufferException($Class* clazz) {
	return $of($alloc(ShortBufferException));
}

void ShortBufferException::init$() {
	$GeneralSecurityException::init$();
}

void ShortBufferException::init$($String* msg) {
	$GeneralSecurityException::init$(msg);
}

ShortBufferException::ShortBufferException() {
}

ShortBufferException::ShortBufferException(const ShortBufferException& e) {
}

ShortBufferException ShortBufferException::wrapper$() {
	$pendingException(this);
	return *this;
}

void ShortBufferException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* ShortBufferException::load$($String* name, bool initialize) {
	$loadClass(ShortBufferException, name, initialize, &_ShortBufferException_ClassInfo_, allocate$ShortBufferException);
	return class$;
}

$Class* ShortBufferException::class$ = nullptr;

	} // crypto
} // javax