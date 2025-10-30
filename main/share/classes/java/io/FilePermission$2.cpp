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
using $PrivilegedAction = ::java::security::PrivilegedAction;

namespace java {
	namespace io {

$FieldInfo _FilePermission$2_FieldInfo_[] = {
	{"this$0", "Ljava/io/FilePermission;", nullptr, $FINAL | $SYNTHETIC, $field(FilePermission$2, this$0)},
	{}
};

$MethodInfo _FilePermission$2_MethodInfo_[] = {
	{"<init>", "(Ljava/io/FilePermission;)V", nullptr, 0, $method(static_cast<void(FilePermission$2::*)($FilePermission*)>(&FilePermission$2::init$))},
	{"run", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _FilePermission$2_EnclosingMethodInfo_ = {
	"java.io.FilePermission",
	"init",
	"(I)V"
};

$InnerClassInfo _FilePermission$2_InnerClassesInfo_[] = {
	{"java.io.FilePermission$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FilePermission$2_ClassInfo_ = {
	$ACC_SUPER,
	"java.io.FilePermission$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_FilePermission$2_FieldInfo_,
	_FilePermission$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
	&_FilePermission$2_EnclosingMethodInfo_,
	_FilePermission$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.io.FilePermission"
};

$Object* allocate$FilePermission$2($Class* clazz) {
	return $of($alloc(FilePermission$2));
}

void FilePermission$2::init$($FilePermission* this$0) {
	$set(this, this$0, this$0);
}

$Object* FilePermission$2::run() {
	$useLocalCurrentObjectStackCache();
	try {
		$var($String, path, this->this$0->cpath);
		if ($nc(this->this$0->cpath)->endsWith("*"_s)) {
			$assign(path, $str({$($nc(path)->substring(0, path->length() - 1)), "-"_s}));
			$assign(path, $$new($File, path)->getCanonicalPath());
			return $of($str({$(path->substring(0, path->length() - 1)), "*"_s}));
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
	$loadClass(FilePermission$2, name, initialize, &_FilePermission$2_ClassInfo_, allocate$FilePermission$2);
	return class$;
}

$Class* FilePermission$2::class$ = nullptr;

	} // io
} // java