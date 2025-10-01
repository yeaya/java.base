#include <java/security/cert/CertPathValidatorException.h>

#include <java/io/InvalidObjectException.h>
#include <java/io/ObjectInputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/GeneralSecurityException.h>
#include <java/security/cert/CertPath.h>
#include <java/security/cert/CertPathValidatorException$BasicReason.h>
#include <java/security/cert/CertPathValidatorException$Reason.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef UNSPECIFIED

using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $CertPath = ::java::security::cert::CertPath;
using $CertPathValidatorException$BasicReason = ::java::security::cert::CertPathValidatorException$BasicReason;
using $CertPathValidatorException$Reason = ::java::security::cert::CertPathValidatorException$Reason;
using $List = ::java::util::List;

namespace java {
	namespace security {
		namespace cert {

$FieldInfo _CertPathValidatorException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CertPathValidatorException, serialVersionUID)},
	{"index", "I", nullptr, $PRIVATE, $field(CertPathValidatorException, index)},
	{"certPath", "Ljava/security/cert/CertPath;", nullptr, $PRIVATE, $field(CertPathValidatorException, certPath)},
	{"reason", "Ljava/security/cert/CertPathValidatorException$Reason;", nullptr, $PRIVATE, $field(CertPathValidatorException, reason)},
	{}
};

$MethodInfo _CertPathValidatorException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CertPathValidatorException::*)()>(&CertPathValidatorException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(CertPathValidatorException::*)($String*)>(&CertPathValidatorException::init$))},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(CertPathValidatorException::*)($Throwable*)>(&CertPathValidatorException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(CertPathValidatorException::*)($String*,$Throwable*)>(&CertPathValidatorException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;Ljava/security/cert/CertPath;I)V", nullptr, $PUBLIC, $method(static_cast<void(CertPathValidatorException::*)($String*,$Throwable*,$CertPath*,int32_t)>(&CertPathValidatorException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;Ljava/security/cert/CertPath;ILjava/security/cert/CertPathValidatorException$Reason;)V", nullptr, $PUBLIC, $method(static_cast<void(CertPathValidatorException::*)($String*,$Throwable*,$CertPath*,int32_t,$CertPathValidatorException$Reason*)>(&CertPathValidatorException::init$))},
	{"getCertPath", "()Ljava/security/cert/CertPath;", nullptr, $PUBLIC},
	{"getIndex", "()I", nullptr, $PUBLIC},
	{"getReason", "()Ljava/security/cert/CertPathValidatorException$Reason;", nullptr, $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(CertPathValidatorException::*)($ObjectInputStream*)>(&CertPathValidatorException::readObject)), "java.lang.ClassNotFoundException,java.io.IOException"},
	{}
};

$InnerClassInfo _CertPathValidatorException_InnerClassesInfo_[] = {
	{"java.security.cert.CertPathValidatorException$BasicReason", "java.security.cert.CertPathValidatorException", "BasicReason", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{"java.security.cert.CertPathValidatorException$Reason", "java.security.cert.CertPathValidatorException", "Reason", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _CertPathValidatorException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.security.cert.CertPathValidatorException",
	"java.security.GeneralSecurityException",
	nullptr,
	_CertPathValidatorException_FieldInfo_,
	_CertPathValidatorException_MethodInfo_,
	nullptr,
	nullptr,
	_CertPathValidatorException_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.security.cert.CertPathValidatorException$BasicReason,java.security.cert.CertPathValidatorException$Reason"
};

$Object* allocate$CertPathValidatorException($Class* clazz) {
	return $of($alloc(CertPathValidatorException));
}

void CertPathValidatorException::init$() {
	CertPathValidatorException::init$(nullptr, nullptr);
}

void CertPathValidatorException::init$($String* msg) {
	CertPathValidatorException::init$(msg, nullptr);
}

void CertPathValidatorException::init$($Throwable* cause) {
	CertPathValidatorException::init$((cause == nullptr ? ($String*)nullptr : $($nc(cause)->toString())), cause);
}

void CertPathValidatorException::init$($String* msg, $Throwable* cause) {
	CertPathValidatorException::init$(msg, cause, nullptr, -1);
}

void CertPathValidatorException::init$($String* msg, $Throwable* cause, $CertPath* certPath, int32_t index) {
	$init($CertPathValidatorException$BasicReason);
	CertPathValidatorException::init$(msg, cause, certPath, index, $CertPathValidatorException$BasicReason::UNSPECIFIED);
}

void CertPathValidatorException::init$($String* msg, $Throwable* cause, $CertPath* certPath, int32_t index, $CertPathValidatorException$Reason* reason) {
	$GeneralSecurityException::init$(msg, cause);
	this->index = -1;
	$init($CertPathValidatorException$BasicReason);
	$set(this, reason, $CertPathValidatorException$BasicReason::UNSPECIFIED);
	if (certPath == nullptr && index != -1) {
		$throwNew($IllegalArgumentException);
	}
	if (index < -1 || (certPath != nullptr && index >= $nc($(certPath->getCertificates()))->size())) {
		$throwNew($IndexOutOfBoundsException);
	}
	if (reason == nullptr) {
		$throwNew($NullPointerException, "reason can\'t be null"_s);
	}
	$set(this, certPath, certPath);
	this->index = index;
	$set(this, reason, reason);
}

$CertPath* CertPathValidatorException::getCertPath() {
	return this->certPath;
}

int32_t CertPathValidatorException::getIndex() {
	return this->index;
}

$CertPathValidatorException$Reason* CertPathValidatorException::getReason() {
	return this->reason;
}

void CertPathValidatorException::readObject($ObjectInputStream* stream) {
	$nc(stream)->defaultReadObject();
	if (this->reason == nullptr) {
		$init($CertPathValidatorException$BasicReason);
		$set(this, reason, $CertPathValidatorException$BasicReason::UNSPECIFIED);
	}
	if (this->certPath == nullptr && this->index != -1) {
		$throwNew($InvalidObjectException, "certpath is null and index != -1"_s);
	}
	if (this->index < -1 || (this->certPath != nullptr && this->index >= $nc($($nc(this->certPath)->getCertificates()))->size())) {
		$throwNew($InvalidObjectException, "index out of range"_s);
	}
}

CertPathValidatorException::CertPathValidatorException() {
}

CertPathValidatorException::CertPathValidatorException(const CertPathValidatorException& e) {
}

CertPathValidatorException CertPathValidatorException::wrapper$() {
	$pendingException(this);
	return *this;
}

void CertPathValidatorException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* CertPathValidatorException::load$($String* name, bool initialize) {
	$loadClass(CertPathValidatorException, name, initialize, &_CertPathValidatorException_ClassInfo_, allocate$CertPathValidatorException);
	return class$;
}

$Class* CertPathValidatorException::class$ = nullptr;

		} // cert
	} // security
} // java