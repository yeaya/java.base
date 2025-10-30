#include <java/security/NoSuchProviderException.h>

#include <java/security/GeneralSecurityException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;

namespace java {
	namespace security {

$FieldInfo _NoSuchProviderException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NoSuchProviderException, serialVersionUID)},
	{}
};

$MethodInfo _NoSuchProviderException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NoSuchProviderException::*)()>(&NoSuchProviderException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(NoSuchProviderException::*)($String*)>(&NoSuchProviderException::init$))},
	{}
};

$ClassInfo _NoSuchProviderException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.security.NoSuchProviderException",
	"java.security.GeneralSecurityException",
	nullptr,
	_NoSuchProviderException_FieldInfo_,
	_NoSuchProviderException_MethodInfo_
};

$Object* allocate$NoSuchProviderException($Class* clazz) {
	return $of($alloc(NoSuchProviderException));
}

void NoSuchProviderException::init$() {
	$GeneralSecurityException::init$();
}

void NoSuchProviderException::init$($String* msg) {
	$GeneralSecurityException::init$(msg);
}

NoSuchProviderException::NoSuchProviderException() {
}

NoSuchProviderException::NoSuchProviderException(const NoSuchProviderException& e) : $GeneralSecurityException(e) {
}

void NoSuchProviderException::throw$() {
	throw *this;
}

$Class* NoSuchProviderException::load$($String* name, bool initialize) {
	$loadClass(NoSuchProviderException, name, initialize, &_NoSuchProviderException_ClassInfo_, allocate$NoSuchProviderException);
	return class$;
}

$Class* NoSuchProviderException::class$ = nullptr;

	} // security
} // java