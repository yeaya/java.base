#include <java/security/ProviderException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace java {
	namespace security {

$FieldInfo _ProviderException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ProviderException, serialVersionUID)},
	{}
};

$MethodInfo _ProviderException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ProviderException::*)()>(&ProviderException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ProviderException::*)($String*)>(&ProviderException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(ProviderException::*)($String*,$Throwable*)>(&ProviderException::init$))},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(ProviderException::*)($Throwable*)>(&ProviderException::init$))},
	{}
};

$ClassInfo _ProviderException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.security.ProviderException",
	"java.lang.RuntimeException",
	nullptr,
	_ProviderException_FieldInfo_,
	_ProviderException_MethodInfo_
};

$Object* allocate$ProviderException($Class* clazz) {
	return $of($alloc(ProviderException));
}

void ProviderException::init$() {
	$RuntimeException::init$();
}

void ProviderException::init$($String* s) {
	$RuntimeException::init$(s);
}

void ProviderException::init$($String* message, $Throwable* cause) {
	$RuntimeException::init$(message, cause);
}

void ProviderException::init$($Throwable* cause) {
	$RuntimeException::init$(cause);
}

ProviderException::ProviderException() {
}

ProviderException::ProviderException(const ProviderException& e) {
}

ProviderException ProviderException::wrapper$() {
	$pendingException(this);
	return *this;
}

void ProviderException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* ProviderException::load$($String* name, bool initialize) {
	$loadClass(ProviderException, name, initialize, &_ProviderException_ClassInfo_, allocate$ProviderException);
	return class$;
}

$Class* ProviderException::class$ = nullptr;

	} // security
} // java