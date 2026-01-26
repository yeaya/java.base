#include <jdk/internal/jimage/NativeImageBuffer$1.h>

#include <jdk/internal/jimage/NativeImageBuffer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace jimage {

$MethodInfo _NativeImageBuffer$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(NativeImageBuffer$1, init$, void)},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(NativeImageBuffer$1, run, $Object*)},
	{}
};

$EnclosingMethodInfo _NativeImageBuffer$1_EnclosingMethodInfo_ = {
	"jdk.internal.jimage.NativeImageBuffer",
	nullptr,
	nullptr
};

$InnerClassInfo _NativeImageBuffer$1_InnerClassesInfo_[] = {
	{"jdk.internal.jimage.NativeImageBuffer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _NativeImageBuffer$1_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.jimage.NativeImageBuffer$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_NativeImageBuffer$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_NativeImageBuffer$1_EnclosingMethodInfo_,
	_NativeImageBuffer$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.jimage.NativeImageBuffer"
};

$Object* allocate$NativeImageBuffer$1($Class* clazz) {
	return $of($alloc(NativeImageBuffer$1));
}

void NativeImageBuffer$1::init$() {
}

$Object* NativeImageBuffer$1::run() {
	$beforeCallerSensitive();
	$System::loadLibrary("jimage"_s);
	return $of(nullptr);
}

NativeImageBuffer$1::NativeImageBuffer$1() {
}

$Class* NativeImageBuffer$1::load$($String* name, bool initialize) {
	$loadClass(NativeImageBuffer$1, name, initialize, &_NativeImageBuffer$1_ClassInfo_, allocate$NativeImageBuffer$1);
	return class$;
}

$Class* NativeImageBuffer$1::class$ = nullptr;

		} // jimage
	} // internal
} // jdk