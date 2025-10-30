#include <java/security/interfaces/DSAKey.h>

#include <java/security/interfaces/DSAParams.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DSAParams = ::java::security::interfaces::DSAParams;

namespace java {
	namespace security {
		namespace interfaces {

$MethodInfo _DSAKey_MethodInfo_[] = {
	{"getParams", "()Ljava/security/interfaces/DSAParams;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _DSAKey_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.security.interfaces.DSAKey",
	nullptr,
	nullptr,
	nullptr,
	_DSAKey_MethodInfo_
};

$Object* allocate$DSAKey($Class* clazz) {
	return $of($alloc(DSAKey));
}

$Class* DSAKey::load$($String* name, bool initialize) {
	$loadClass(DSAKey, name, initialize, &_DSAKey_ClassInfo_, allocate$DSAKey);
	return class$;
}

$Class* DSAKey::class$ = nullptr;

		} // interfaces
	} // security
} // java