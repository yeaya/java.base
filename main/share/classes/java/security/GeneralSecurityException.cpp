#include <java/security/GeneralSecurityException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace security {

$FieldInfo _GeneralSecurityException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(GeneralSecurityException, serialVersionUID)},
	{}
};

$MethodInfo _GeneralSecurityException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GeneralSecurityException::*)()>(&GeneralSecurityException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(GeneralSecurityException::*)($String*)>(&GeneralSecurityException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(GeneralSecurityException::*)($String*,$Throwable*)>(&GeneralSecurityException::init$))},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(GeneralSecurityException::*)($Throwable*)>(&GeneralSecurityException::init$))},
	{}
};

$ClassInfo _GeneralSecurityException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.security.GeneralSecurityException",
	"java.lang.Exception",
	nullptr,
	_GeneralSecurityException_FieldInfo_,
	_GeneralSecurityException_MethodInfo_
};

$Object* allocate$GeneralSecurityException($Class* clazz) {
	return $of($alloc(GeneralSecurityException));
}

void GeneralSecurityException::init$() {
	$Exception::init$();
}

void GeneralSecurityException::init$($String* msg) {
	$Exception::init$(msg);
}

void GeneralSecurityException::init$($String* message, $Throwable* cause) {
	$Exception::init$(message, cause);
}

void GeneralSecurityException::init$($Throwable* cause) {
	$Exception::init$(cause);
}

GeneralSecurityException::GeneralSecurityException() {
}

GeneralSecurityException::GeneralSecurityException(const GeneralSecurityException& e) {
}

GeneralSecurityException GeneralSecurityException::wrapper$() {
	$pendingException(this);
	return *this;
}

void GeneralSecurityException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* GeneralSecurityException::load$($String* name, bool initialize) {
	$loadClass(GeneralSecurityException, name, initialize, &_GeneralSecurityException_ClassInfo_, allocate$GeneralSecurityException);
	return class$;
}

$Class* GeneralSecurityException::class$ = nullptr;

	} // security
} // java