#include <sun/security/util/PermissionFactory.h>
#include <java/security/Permission.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Permission = ::java::security::Permission;

namespace sun {
	namespace security {
		namespace util {

$Class* PermissionFactory::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"newPermission", "(Ljava/lang/String;)Ljava/security/Permission;", "(Ljava/lang/String;)TT;", $PUBLIC | $ABSTRACT, $virtualMethod(PermissionFactory, newPermission, $Permission*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.security.util.PermissionFactory",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<T:Ljava/security/Permission;>Ljava/lang/Object;"
	};
	$loadClass(PermissionFactory, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PermissionFactory);
	});
	return class$;
}

$Class* PermissionFactory::class$ = nullptr;

		} // util
	} // security
} // sun