#include <sun/security/util/FilePermCompat.h>
#include <java/io/FilePermission.h>
#include <java/security/Permission.h>
#include <jdk/internal/access/JavaIOFilePermissionAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <sun/security/util/SecurityProperties.h>
#include <jcpp.h>

using $FilePermission = ::java::io::FilePermission;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Permission = ::java::security::Permission;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;
using $SecurityProperties = ::sun::security::util::SecurityProperties;

namespace sun {
	namespace security {
		namespace util {

bool FilePermCompat::nb = false;
bool FilePermCompat::compat = false;

void FilePermCompat::init$() {
}

$Permission* FilePermCompat::newPermPlusAltPath($Permission* input) {
	$init(FilePermCompat);
	if (FilePermCompat::compat && $instanceOf($FilePermission, input)) {
		return $$nc($SharedSecrets::getJavaIOFilePermissionAccess())->newPermPlusAltPath($cast($FilePermission, input));
	}
	return input;
}

$Permission* FilePermCompat::newPermUsingAltPath($Permission* input) {
	$init(FilePermCompat);
	if ($instanceOf($FilePermission, input)) {
		return $$nc($SharedSecrets::getJavaIOFilePermissionAccess())->newPermUsingAltPath($cast($FilePermission, input));
	}
	return nullptr;
}

void FilePermCompat::clinit$($Class* clazz) {
	$useLocalObjectStack();
	{
		$var($String, flag, $SecurityProperties::privilegedGetOverridable("jdk.io.permissionsUseCanonicalPath"_s));
		if (flag == nullptr) {
			$assign(flag, "false"_s);
		}
		{
			$var($String, s1860$, flag);
			int32_t tmp1860$ = -1;
			switch ($nc(s1860$)->hashCode()) {
			case 0x0036758e:
				if (s1860$->equals("true"_s)) {
					tmp1860$ = 0;
				}
				break;
			case 0x05cb1923:
				if (s1860$->equals("false"_s)) {
					tmp1860$ = 1;
				}
				break;
			}
			switch (tmp1860$) {
			case 0:
				FilePermCompat::nb = false;
				FilePermCompat::compat = false;
				break;
			case 1:
				FilePermCompat::nb = true;
				FilePermCompat::compat = true;
				break;
			default:
				$throwNew($RuntimeException, $$str({"Invalid jdk.io.permissionsUseCanonicalPath: "_s, flag}));
			}
		}
	}
}

FilePermCompat::FilePermCompat() {
}

$Class* FilePermCompat::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"nb", "Z", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(FilePermCompat, nb)},
		{"compat", "Z", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(FilePermCompat, compat)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FilePermCompat, init$, void)},
		{"newPermPlusAltPath", "(Ljava/security/Permission;)Ljava/security/Permission;", nullptr, $PUBLIC | $STATIC, $staticMethod(FilePermCompat, newPermPlusAltPath, $Permission*, $Permission*)},
		{"newPermUsingAltPath", "(Ljava/security/Permission;)Ljava/security/Permission;", nullptr, $PUBLIC | $STATIC, $staticMethod(FilePermCompat, newPermUsingAltPath, $Permission*, $Permission*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.util.FilePermCompat",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(FilePermCompat, name, initialize, &classInfo$$, FilePermCompat::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(FilePermCompat);
	});
	return class$;
}

$Class* FilePermCompat::class$ = nullptr;

		} // util
	} // security
} // sun