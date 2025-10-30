#include <sun/security/util/PermissionFactory.h>

#include <java/security/Permission.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Permission = ::java::security::Permission;

namespace sun {
	namespace security {
		namespace util {

$MethodInfo _PermissionFactory_MethodInfo_[] = {
	{"newPermission", "(Ljava/lang/String;)Ljava/security/Permission;", "(Ljava/lang/String;)TT;", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _PermissionFactory_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.security.util.PermissionFactory",
	nullptr,
	nullptr,
	nullptr,
	_PermissionFactory_MethodInfo_,
	"<T:Ljava/security/Permission;>Ljava/lang/Object;"
};

$Object* allocate$PermissionFactory($Class* clazz) {
	return $of($alloc(PermissionFactory));
}

$Class* PermissionFactory::load$($String* name, bool initialize) {
	$loadClass(PermissionFactory, name, initialize, &_PermissionFactory_ClassInfo_, allocate$PermissionFactory);
	return class$;
}

$Class* PermissionFactory::class$ = nullptr;

		} // util
	} // security
} // sun