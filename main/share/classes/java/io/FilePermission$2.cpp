#include <java/io/FilePermission$2.h>
#include <java/io/File.h>
#include <java/io/FilePermission.h>
#include <java/io/IOException.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $FilePermission = ::java::io::FilePermission;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

void FilePermission$2::init$($FilePermission* this$0) {
	$set(this, this$0, this$0);
}

$Object* FilePermission$2::run() {
	$useLocalObjectStack();
	try {
		$var($String, path, this->this$0->cpath);
		if ($nc(this->this$0->cpath)->endsWith("*"_s)) {
			$assign(path, $str({$($nc(path)->substring(0, $nc(path)->length() - 1)), "-"_s}));
			$assign(path, $$new($File, path)->getCanonicalPath());
			return $of($str({$($nc(path)->substring(0, $nc(path)->length() - 1)), "*"_s}));
		} else {
			return $of($$new($File, path)->getCanonicalPath());
		}
	} catch ($IOException& ioe) {
		return $of(this->this$0->cpath);
	}
	$shouldNotReachHere();
}

FilePermission$2::FilePermission$2() {
}

$Class* FilePermission$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/io/FilePermission;", nullptr, $FINAL | $SYNTHETIC, $field(FilePermission$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/FilePermission;)V", nullptr, 0, $method(FilePermission$2, init$, void, $FilePermission*)},
		{"run", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(FilePermission$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.io.FilePermission",
		"init",
		"(I)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.io.FilePermission$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.io.FilePermission$2",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.io.FilePermission"
	};
	$loadClass(FilePermission$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FilePermission$2);
	});
	return class$;
}

$Class* FilePermission$2::class$ = nullptr;

	} // io
} // java