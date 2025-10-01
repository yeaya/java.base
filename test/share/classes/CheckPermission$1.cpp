#include <CheckPermission$1.h>

#include <CheckPermission.h>
#include <java/io/File.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $CheckPermission = ::CheckPermission;
using $File = ::java::io::File;
using $FilenameFilter = ::java::io::FilenameFilter;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _CheckPermission$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(CheckPermission$1::*)()>(&CheckPermission$1::init$))},
	{"accept", "(Ljava/io/File;Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _CheckPermission$1_EnclosingMethodInfo_ = {
	"CheckPermission",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _CheckPermission$1_InnerClassesInfo_[] = {
	{"CheckPermission$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CheckPermission$1_ClassInfo_ = {
	$ACC_SUPER,
	"CheckPermission$1",
	"java.lang.Object",
	"java.io.FilenameFilter",
	nullptr,
	_CheckPermission$1_MethodInfo_,
	nullptr,
	&_CheckPermission$1_EnclosingMethodInfo_,
	_CheckPermission$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"CheckPermission"
};

$Object* allocate$CheckPermission$1($Class* clazz) {
	return $of($alloc(CheckPermission$1));
}

void CheckPermission$1::init$() {
}

bool CheckPermission$1::accept($File* dir, $String* name) {
	return false;
}

CheckPermission$1::CheckPermission$1() {
}

$Class* CheckPermission$1::load$($String* name, bool initialize) {
	$loadClass(CheckPermission$1, name, initialize, &_CheckPermission$1_ClassInfo_, allocate$CheckPermission$1);
	return class$;
}

$Class* CheckPermission$1::class$ = nullptr;