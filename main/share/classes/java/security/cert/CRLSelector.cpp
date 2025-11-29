#include <java/security/cert/CRLSelector.h>

#include <java/lang/Cloneable.h>
#include <java/security/cert/CRL.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Cloneable = ::java::lang::Cloneable;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace security {
		namespace cert {

$MethodInfo _CRLSelector_MethodInfo_[] = {
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"match", "(Ljava/security/cert/CRL;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _CRLSelector_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.security.cert.CRLSelector",
	nullptr,
	"java.lang.Cloneable",
	nullptr,
	_CRLSelector_MethodInfo_
};

$Object* allocate$CRLSelector($Class* clazz) {
	return $of($alloc(CRLSelector));
}

$Object* CRLSelector::clone() {
	 return this->$Cloneable::clone();
}

$Class* CRLSelector::load$($String* name, bool initialize) {
	$loadClass(CRLSelector, name, initialize, &_CRLSelector_ClassInfo_, allocate$CRLSelector);
	return class$;
}

$Class* CRLSelector::class$ = nullptr;

		} // cert
	} // security
} // java