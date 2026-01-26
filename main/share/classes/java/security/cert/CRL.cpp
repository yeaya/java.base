#include <java/security/cert/CRL.h>

#include <java/security/cert/Certificate.h>
#include <jcpp.h>

#undef CRL

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Certificate = ::java::security::cert::Certificate;

namespace java {
	namespace security {
		namespace cert {

$FieldInfo _CRL_FieldInfo_[] = {
	{"type", "Ljava/lang/String;", nullptr, $PRIVATE, $field(CRL, type)},
	{}
};

$MethodInfo _CRL_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $method(CRL, init$, void, $String*)},
	{"getType", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(CRL, getType, $String*)},
	{"isRevoked", "(Ljava/security/cert/Certificate;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CRL, isRevoked, bool, $Certificate*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _CRL_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.security.cert.CRL",
	"java.lang.Object",
	nullptr,
	_CRL_FieldInfo_,
	_CRL_MethodInfo_
};

$Object* allocate$CRL($Class* clazz) {
	return $of($alloc(CRL));
}

$String* CRL::toString() {
	 return this->$Object::toString();
}

void CRL::init$($String* type) {
	$set(this, type, type);
}

$String* CRL::getType() {
	return this->type;
}

CRL::CRL() {
}

$Class* CRL::load$($String* name, bool initialize) {
	$loadClass(CRL, name, initialize, &_CRL_ClassInfo_, allocate$CRL);
	return class$;
}

$Class* CRL::class$ = nullptr;

		} // cert
	} // security
} // java