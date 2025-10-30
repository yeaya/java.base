#include <java/security/cert/CertSelector.h>

#include <java/lang/Cloneable.h>
#include <java/security/cert/Certificate.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Cloneable = ::java::lang::Cloneable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Certificate = ::java::security::cert::Certificate;

namespace java {
	namespace security {
		namespace cert {

$MethodInfo _CertSelector_MethodInfo_[] = {
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"match", "(Ljava/security/cert/Certificate;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _CertSelector_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.security.cert.CertSelector",
	nullptr,
	"java.lang.Cloneable",
	nullptr,
	_CertSelector_MethodInfo_
};

$Object* allocate$CertSelector($Class* clazz) {
	return $of($alloc(CertSelector));
}

$Object* CertSelector::clone() {
	 return this->$Cloneable::clone();
}

$Class* CertSelector::load$($String* name, bool initialize) {
	$loadClass(CertSelector, name, initialize, &_CertSelector_ClassInfo_, allocate$CertSelector);
	return class$;
}

$Class* CertSelector::class$ = nullptr;

		} // cert
	} // security
} // java