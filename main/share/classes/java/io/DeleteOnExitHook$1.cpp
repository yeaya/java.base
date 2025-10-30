#include <java/io/DeleteOnExitHook$1.h>

#include <java/io/DeleteOnExitHook.h>
#include <jcpp.h>

using $DeleteOnExitHook = ::java::io::DeleteOnExitHook;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

namespace java {
	namespace io {

$MethodInfo _DeleteOnExitHook$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(DeleteOnExitHook$1::*)()>(&DeleteOnExitHook$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _DeleteOnExitHook$1_EnclosingMethodInfo_ = {
	"java.io.DeleteOnExitHook",
	nullptr,
	nullptr
};

$InnerClassInfo _DeleteOnExitHook$1_InnerClassesInfo_[] = {
	{"java.io.DeleteOnExitHook$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DeleteOnExitHook$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.io.DeleteOnExitHook$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_DeleteOnExitHook$1_MethodInfo_,
	nullptr,
	&_DeleteOnExitHook$1_EnclosingMethodInfo_,
	_DeleteOnExitHook$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.io.DeleteOnExitHook"
};

$Object* allocate$DeleteOnExitHook$1($Class* clazz) {
	return $of($alloc(DeleteOnExitHook$1));
}

void DeleteOnExitHook$1::init$() {
}

void DeleteOnExitHook$1::run() {
	$DeleteOnExitHook::runHooks();
}

DeleteOnExitHook$1::DeleteOnExitHook$1() {
}

$Class* DeleteOnExitHook$1::load$($String* name, bool initialize) {
	$loadClass(DeleteOnExitHook$1, name, initialize, &_DeleteOnExitHook$1_ClassInfo_, allocate$DeleteOnExitHook$1);
	return class$;
}

$Class* DeleteOnExitHook$1::class$ = nullptr;

	} // io
} // java