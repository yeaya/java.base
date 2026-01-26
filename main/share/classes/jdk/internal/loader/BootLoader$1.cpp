#include <jdk/internal/loader/BootLoader$1.h>

#include <jdk/internal/loader/BootLoader.h>
#include <jdk/internal/loader/NativeLibraries.h>
#include <jdk/internal/loader/NativeLibrary.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BootLoader = ::jdk::internal::loader::BootLoader;
using $NativeLibraries = ::jdk::internal::loader::NativeLibraries;

namespace jdk {
	namespace internal {
		namespace loader {

$FieldInfo _BootLoader$1_FieldInfo_[] = {
	{"val$name", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(BootLoader$1, val$name)},
	{}
};

$MethodInfo _BootLoader$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(BootLoader$1, init$, void, $String*)},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(BootLoader$1, run, $Object*)},
	{}
};

$EnclosingMethodInfo _BootLoader$1_EnclosingMethodInfo_ = {
	"jdk.internal.loader.BootLoader",
	"loadLibrary",
	"(Ljava/lang/String;)V"
};

$InnerClassInfo _BootLoader$1_InnerClassesInfo_[] = {
	{"jdk.internal.loader.BootLoader$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _BootLoader$1_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.loader.BootLoader$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_BootLoader$1_FieldInfo_,
	_BootLoader$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
	&_BootLoader$1_EnclosingMethodInfo_,
	_BootLoader$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.loader.BootLoader"
};

$Object* allocate$BootLoader$1($Class* clazz) {
	return $of($alloc(BootLoader$1));
}

void BootLoader$1::init$($String* val$name) {
	$set(this, val$name, val$name);
}

$Object* BootLoader$1::run() {
	$nc($($BootLoader::getNativeLibraries()))->loadLibrary(this->val$name);
	return $of(nullptr);
}

BootLoader$1::BootLoader$1() {
}

$Class* BootLoader$1::load$($String* name, bool initialize) {
	$loadClass(BootLoader$1, name, initialize, &_BootLoader$1_ClassInfo_, allocate$BootLoader$1);
	return class$;
}

$Class* BootLoader$1::class$ = nullptr;

		} // loader
	} // internal
} // jdk