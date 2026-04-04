#include <jdk/internal/access/JavaIOFilePermissionAccess.h>
#include <java/io/FilePermission.h>
#include <jcpp.h>

using $FilePermission = ::java::io::FilePermission;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace access {

$Class* JavaIOFilePermissionAccess::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"newPermPlusAltPath", "(Ljava/io/FilePermission;)Ljava/io/FilePermission;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaIOFilePermissionAccess, newPermPlusAltPath, $FilePermission*, $FilePermission*)},
		{"newPermUsingAltPath", "(Ljava/io/FilePermission;)Ljava/io/FilePermission;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaIOFilePermissionAccess, newPermUsingAltPath, $FilePermission*, $FilePermission*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.access.JavaIOFilePermissionAccess",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(JavaIOFilePermissionAccess, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavaIOFilePermissionAccess);
	});
	return class$;
}

$Class* JavaIOFilePermissionAccess::class$ = nullptr;

		} // access
	} // internal
} // jdk