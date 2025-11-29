#include <java/security/interfaces/ECKey.h>

#include <java/security/spec/ECParameterSpec.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace security {
		namespace interfaces {

$MethodInfo _ECKey_MethodInfo_[] = {
	{"getParams", "()Ljava/security/spec/ECParameterSpec;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ECKey_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.security.interfaces.ECKey",
	nullptr,
	nullptr,
	nullptr,
	_ECKey_MethodInfo_
};

$Object* allocate$ECKey($Class* clazz) {
	return $of($alloc(ECKey));
}

$Class* ECKey::load$($String* name, bool initialize) {
	$loadClass(ECKey, name, initialize, &_ECKey_ClassInfo_, allocate$ECKey);
	return class$;
}

$Class* ECKey::class$ = nullptr;

		} // interfaces
	} // security
} // java