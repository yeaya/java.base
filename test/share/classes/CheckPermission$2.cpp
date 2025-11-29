#include <CheckPermission$2.h>

#include <CheckPermission.h>
#include <java/io/File.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _CheckPermission$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(CheckPermission$2::*)()>(&CheckPermission$2::init$))},
	{"accept", "(Ljava/io/File;Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _CheckPermission$2_EnclosingMethodInfo_ = {
	"CheckPermission",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _CheckPermission$2_InnerClassesInfo_[] = {
	{"CheckPermission$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CheckPermission$2_ClassInfo_ = {
	$ACC_SUPER,
	"CheckPermission$2",
	"java.lang.Object",
	"java.io.FilenameFilter",
	nullptr,
	_CheckPermission$2_MethodInfo_,
	nullptr,
	&_CheckPermission$2_EnclosingMethodInfo_,
	_CheckPermission$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"CheckPermission"
};

$Object* allocate$CheckPermission$2($Class* clazz) {
	return $of($alloc(CheckPermission$2));
}

void CheckPermission$2::init$() {
}

bool CheckPermission$2::accept($File* dir, $String* name) {
	return false;
}

CheckPermission$2::CheckPermission$2() {
}

$Class* CheckPermission$2::load$($String* name, bool initialize) {
	$loadClass(CheckPermission$2, name, initialize, &_CheckPermission$2_ClassInfo_, allocate$CheckPermission$2);
	return class$;
}

$Class* CheckPermission$2::class$ = nullptr;