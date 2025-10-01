#include <java/security/KeyManagementException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/KeyException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $KeyException = ::java::security::KeyException;

namespace java {
	namespace security {

$FieldInfo _KeyManagementException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(KeyManagementException, serialVersionUID)},
	{}
};

$MethodInfo _KeyManagementException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(KeyManagementException::*)()>(&KeyManagementException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(KeyManagementException::*)($String*)>(&KeyManagementException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(KeyManagementException::*)($String*,$Throwable*)>(&KeyManagementException::init$))},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(KeyManagementException::*)($Throwable*)>(&KeyManagementException::init$))},
	{}
};

$ClassInfo _KeyManagementException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.security.KeyManagementException",
	"java.security.KeyException",
	nullptr,
	_KeyManagementException_FieldInfo_,
	_KeyManagementException_MethodInfo_
};

$Object* allocate$KeyManagementException($Class* clazz) {
	return $of($alloc(KeyManagementException));
}

void KeyManagementException::init$() {
	$KeyException::init$();
}

void KeyManagementException::init$($String* msg) {
	$KeyException::init$(msg);
}

void KeyManagementException::init$($String* message, $Throwable* cause) {
	$KeyException::init$(message, cause);
}

void KeyManagementException::init$($Throwable* cause) {
	$KeyException::init$(cause);
}

KeyManagementException::KeyManagementException() {
}

KeyManagementException::KeyManagementException(const KeyManagementException& e) {
}

KeyManagementException KeyManagementException::wrapper$() {
	$pendingException(this);
	return *this;
}

void KeyManagementException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* KeyManagementException::load$($String* name, bool initialize) {
	$loadClass(KeyManagementException, name, initialize, &_KeyManagementException_ClassInfo_, allocate$KeyManagementException);
	return class$;
}

$Class* KeyManagementException::class$ = nullptr;

	} // security
} // java