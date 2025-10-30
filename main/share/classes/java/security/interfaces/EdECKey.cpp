#include <java/security/interfaces/EdECKey.h>

#include <java/security/spec/NamedParameterSpec.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedParameterSpec = ::java::security::spec::NamedParameterSpec;

namespace java {
	namespace security {
		namespace interfaces {

$MethodInfo _EdECKey_MethodInfo_[] = {
	{"getParams", "()Ljava/security/spec/NamedParameterSpec;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _EdECKey_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.security.interfaces.EdECKey",
	nullptr,
	nullptr,
	nullptr,
	_EdECKey_MethodInfo_
};

$Object* allocate$EdECKey($Class* clazz) {
	return $of($alloc(EdECKey));
}

$Class* EdECKey::load$($String* name, bool initialize) {
	$loadClass(EdECKey, name, initialize, &_EdECKey_ClassInfo_, allocate$EdECKey);
	return class$;
}

$Class* EdECKey::class$ = nullptr;

		} // interfaces
	} // security
} // java