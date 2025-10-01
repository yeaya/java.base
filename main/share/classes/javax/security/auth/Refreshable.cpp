#include <javax/security/auth/Refreshable.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace security {
		namespace auth {

$MethodInfo _Refreshable_MethodInfo_[] = {
	{"isCurrent", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"refresh", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.security.auth.RefreshFailedException"},
	{}
};

$ClassInfo _Refreshable_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.security.auth.Refreshable",
	nullptr,
	nullptr,
	nullptr,
	_Refreshable_MethodInfo_
};

$Object* allocate$Refreshable($Class* clazz) {
	return $of($alloc(Refreshable));
}

$Class* Refreshable::load$($String* name, bool initialize) {
	$loadClass(Refreshable, name, initialize, &_Refreshable_ClassInfo_, allocate$Refreshable);
	return class$;
}

$Class* Refreshable::class$ = nullptr;

		} // auth
	} // security
} // javax