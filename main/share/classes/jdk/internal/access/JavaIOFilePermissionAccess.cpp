#include <jdk/internal/access/JavaIOFilePermissionAccess.h>

#include <java/io/FilePermission.h>
#include <jcpp.h>

using $FilePermission = ::java::io::FilePermission;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace access {

$MethodInfo _JavaIOFilePermissionAccess_MethodInfo_[] = {
	{"newPermPlusAltPath", "(Ljava/io/FilePermission;)Ljava/io/FilePermission;", nullptr, $PUBLIC | $ABSTRACT},
	{"newPermUsingAltPath", "(Ljava/io/FilePermission;)Ljava/io/FilePermission;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _JavaIOFilePermissionAccess_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.access.JavaIOFilePermissionAccess",
	nullptr,
	nullptr,
	nullptr,
	_JavaIOFilePermissionAccess_MethodInfo_
};

$Object* allocate$JavaIOFilePermissionAccess($Class* clazz) {
	return $of($alloc(JavaIOFilePermissionAccess));
}

$Class* JavaIOFilePermissionAccess::load$($String* name, bool initialize) {
	$loadClass(JavaIOFilePermissionAccess, name, initialize, &_JavaIOFilePermissionAccess_ClassInfo_, allocate$JavaIOFilePermissionAccess);
	return class$;
}

$Class* JavaIOFilePermissionAccess::class$ = nullptr;

		} // access
	} // internal
} // jdk