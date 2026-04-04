#include <java/io/FilePermission$1.h>
#include <java/io/FilePermission.h>
#include <java/nio/file/Path.h>
#include <jcpp.h>

using $FilePermission = ::java::io::FilePermission;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Path = ::java::nio::file::Path;

namespace java {
	namespace io {

void FilePermission$1::init$() {
}

$FilePermission* FilePermission$1::newPermPlusAltPath($FilePermission* input) {
	$useLocalObjectStack();
	if (!$nc(input)->invalid && input->npath2 == nullptr && !input->allFiles) {
		$var($Path, npath2, $FilePermission::altPath(input->npath));
		if (npath2 != nullptr) {
			return $new($FilePermission, $$str({$(input->getName()), "#plus"_s}), input, input->npath, npath2, input->mask, input->actions);
		}
	}
	return input;
}

$FilePermission* FilePermission$1::newPermUsingAltPath($FilePermission* input) {
	$useLocalObjectStack();
	if (!$nc(input)->invalid && !input->allFiles) {
		$var($Path, npath2, $FilePermission::altPath(input->npath));
		if (npath2 != nullptr) {
			return $new($FilePermission, $$str({$(input->getName()), "#using"_s}), input, npath2, nullptr, input->mask, input->actions);
		}
	}
	return nullptr;
}

FilePermission$1::FilePermission$1() {
}

$Class* FilePermission$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(FilePermission$1, init$, void)},
		{"newPermPlusAltPath", "(Ljava/io/FilePermission;)Ljava/io/FilePermission;", nullptr, $PUBLIC, $virtualMethod(FilePermission$1, newPermPlusAltPath, $FilePermission*, $FilePermission*)},
		{"newPermUsingAltPath", "(Ljava/io/FilePermission;)Ljava/io/FilePermission;", nullptr, $PUBLIC, $virtualMethod(FilePermission$1, newPermUsingAltPath, $FilePermission*, $FilePermission*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.io.FilePermission",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.io.FilePermission$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.io.FilePermission$1",
		"java.lang.Object",
		"jdk.internal.access.JavaIOFilePermissionAccess",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.io.FilePermission"
	};
	$loadClass(FilePermission$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FilePermission$1);
	});
	return class$;
}

$Class* FilePermission$1::class$ = nullptr;

	} // io
} // java