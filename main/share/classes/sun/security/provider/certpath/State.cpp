#include <sun/security/provider/certpath/State.h>

#include <java/lang/Cloneable.h>
#include <java/security/cert/X509Certificate.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Cloneable = ::java::lang::Cloneable;
using $MethodInfo = ::java::lang::MethodInfo;
using $X509Certificate = ::java::security::cert::X509Certificate;

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

$MethodInfo _State_MethodInfo_[] = {
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"isInitial", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(State, isInitial, bool)},
	{"keyParamsNeeded", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(State, keyParamsNeeded, bool)},
	{"updateState", "(Ljava/security/cert/X509Certificate;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(State, updateState, void, $X509Certificate*), "java.security.cert.CertificateException,java.io.IOException,java.security.cert.CertPathValidatorException"},
	{}
};

$ClassInfo _State_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"sun.security.provider.certpath.State",
	nullptr,
	"java.lang.Cloneable",
	nullptr,
	_State_MethodInfo_
};

$Object* allocate$State($Class* clazz) {
	return $of($alloc(State));
}

$Object* State::clone() {
	 return this->$Cloneable::clone();
}

$Class* State::load$($String* name, bool initialize) {
	$loadClass(State, name, initialize, &_State_ClassInfo_, allocate$State);
	return class$;
}

$Class* State::class$ = nullptr;

			} // certpath
		} // provider
	} // security
} // sun