#include <sun/security/provider/certpath/PKIX$CertStoreTypeException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/cert/CertStoreException.h>
#include <sun/security/provider/certpath/PKIX.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CertStoreException = ::java::security::cert::CertStoreException;
using $PKIX = ::sun::security::provider::certpath::PKIX;

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

$FieldInfo _PKIX$CertStoreTypeException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PKIX$CertStoreTypeException, serialVersionUID)},
	{"type", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(PKIX$CertStoreTypeException, type)},
	{}
};

$MethodInfo _PKIX$CertStoreTypeException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/security/cert/CertStoreException;)V", nullptr, 0, $method(static_cast<void(PKIX$CertStoreTypeException::*)($String*,$CertStoreException*)>(&PKIX$CertStoreTypeException::init$))},
	{"getType", "()Ljava/lang/String;", nullptr, 0},
	{}
};

$InnerClassInfo _PKIX$CertStoreTypeException_InnerClassesInfo_[] = {
	{"sun.security.provider.certpath.PKIX$CertStoreTypeException", "sun.security.provider.certpath.PKIX", "CertStoreTypeException", $STATIC},
	{}
};

$ClassInfo _PKIX$CertStoreTypeException_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.provider.certpath.PKIX$CertStoreTypeException",
	"java.security.cert.CertStoreException",
	nullptr,
	_PKIX$CertStoreTypeException_FieldInfo_,
	_PKIX$CertStoreTypeException_MethodInfo_,
	nullptr,
	nullptr,
	_PKIX$CertStoreTypeException_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.certpath.PKIX"
};

$Object* allocate$PKIX$CertStoreTypeException($Class* clazz) {
	return $of($alloc(PKIX$CertStoreTypeException));
}

void PKIX$CertStoreTypeException::init$($String* type, $CertStoreException* cse) {
	$var($String, var$0, $nc(cse)->getMessage());
	$CertStoreException::init$(var$0, $(cse->getCause()));
	$set(this, type, type);
}

$String* PKIX$CertStoreTypeException::getType() {
	return this->type;
}

PKIX$CertStoreTypeException::PKIX$CertStoreTypeException() {
}

PKIX$CertStoreTypeException::PKIX$CertStoreTypeException(const PKIX$CertStoreTypeException& e) {
}

PKIX$CertStoreTypeException PKIX$CertStoreTypeException::wrapper$() {
	$pendingException(this);
	return *this;
}

void PKIX$CertStoreTypeException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* PKIX$CertStoreTypeException::load$($String* name, bool initialize) {
	$loadClass(PKIX$CertStoreTypeException, name, initialize, &_PKIX$CertStoreTypeException_ClassInfo_, allocate$PKIX$CertStoreTypeException);
	return class$;
}

$Class* PKIX$CertStoreTypeException::class$ = nullptr;

			} // certpath
		} // provider
	} // security
} // sun