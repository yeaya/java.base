#include <jdk/internal/jrtfs/SystemImage$2.h>

#include <java/nio/file/Files.h>
#include <java/nio/file/LinkOption.h>
#include <java/nio/file/Path.h>
#include <jdk/internal/jrtfs/SystemImage.h>
#include <jcpp.h>

using $LinkOptionArray = $Array<::java::nio::file::LinkOption>;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Files = ::java::nio::file::Files;
using $SystemImage = ::jdk::internal::jrtfs::SystemImage;

namespace jdk {
	namespace internal {
		namespace jrtfs {

$MethodInfo _SystemImage$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SystemImage$2::*)()>(&SystemImage$2::init$))},
	{"run", "()Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SystemImage$2_EnclosingMethodInfo_ = {
	"jdk.internal.jrtfs.SystemImage",
	nullptr,
	nullptr
};

$InnerClassInfo _SystemImage$2_InnerClassesInfo_[] = {
	{"jdk.internal.jrtfs.SystemImage$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SystemImage$2_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.jrtfs.SystemImage$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_SystemImage$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Boolean;>;",
	&_SystemImage$2_EnclosingMethodInfo_,
	_SystemImage$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.jrtfs.SystemImage"
};

$Object* allocate$SystemImage$2($Class* clazz) {
	return $of($alloc(SystemImage$2));
}

void SystemImage$2::init$() {
}

$Object* SystemImage$2::run() {
	$init($SystemImage);
	return $of($Boolean::valueOf($Files::isRegularFile($SystemImage::moduleImageFile, $$new($LinkOptionArray, 0))));
}

SystemImage$2::SystemImage$2() {
}

$Class* SystemImage$2::load$($String* name, bool initialize) {
	$loadClass(SystemImage$2, name, initialize, &_SystemImage$2_ClassInfo_, allocate$SystemImage$2);
	return class$;
}

$Class* SystemImage$2::class$ = nullptr;

		} // jrtfs
	} // internal
} // jdk