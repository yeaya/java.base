#include <CheckPermission$3.h>

#include <CheckPermission.h>
#include <java/io/File.h>
#include <jcpp.h>

using $CheckPermission = ::CheckPermission;
using $File = ::java::io::File;
using $FileFilter = ::java::io::FileFilter;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _CheckPermission$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(CheckPermission$3::*)()>(&CheckPermission$3::init$))},
	{"accept", "(Ljava/io/File;)Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _CheckPermission$3_EnclosingMethodInfo_ = {
	"CheckPermission",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _CheckPermission$3_InnerClassesInfo_[] = {
	{"CheckPermission$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CheckPermission$3_ClassInfo_ = {
	$ACC_SUPER,
	"CheckPermission$3",
	"java.lang.Object",
	"java.io.FileFilter",
	nullptr,
	_CheckPermission$3_MethodInfo_,
	nullptr,
	&_CheckPermission$3_EnclosingMethodInfo_,
	_CheckPermission$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"CheckPermission"
};

$Object* allocate$CheckPermission$3($Class* clazz) {
	return $of($alloc(CheckPermission$3));
}

void CheckPermission$3::init$() {
}

bool CheckPermission$3::accept($File* file) {
	return false;
}

CheckPermission$3::CheckPermission$3() {
}

$Class* CheckPermission$3::load$($String* name, bool initialize) {
	$loadClass(CheckPermission$3, name, initialize, &_CheckPermission$3_ClassInfo_, allocate$CheckPermission$3);
	return class$;
}

$Class* CheckPermission$3::class$ = nullptr;