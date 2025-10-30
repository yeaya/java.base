#include <jdk/internal/loader/NativeLibraries$1.h>

#include <java/io/File.h>
#include <java/io/IOException.h>
#include <jdk/internal/loader/NativeLibraries.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $NativeLibraries = ::jdk::internal::loader::NativeLibraries;

namespace jdk {
	namespace internal {
		namespace loader {

$FieldInfo _NativeLibraries$1_FieldInfo_[] = {
	{"this$0", "Ljdk/internal/loader/NativeLibraries;", nullptr, $FINAL | $SYNTHETIC, $field(NativeLibraries$1, this$0)},
	{"val$file", "Ljava/io/File;", nullptr, $FINAL | $SYNTHETIC, $field(NativeLibraries$1, val$file)},
	{}
};

$MethodInfo _NativeLibraries$1_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/loader/NativeLibraries;Ljava/io/File;)V", nullptr, 0, $method(static_cast<void(NativeLibraries$1::*)($NativeLibraries*,$File*)>(&NativeLibraries$1::init$))},
	{"run", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _NativeLibraries$1_EnclosingMethodInfo_ = {
	"jdk.internal.loader.NativeLibraries",
	"loadLibrary",
	"(Ljava/lang/Class;Ljava/io/File;)Ljdk/internal/loader/NativeLibrary;"
};

$InnerClassInfo _NativeLibraries$1_InnerClassesInfo_[] = {
	{"jdk.internal.loader.NativeLibraries$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _NativeLibraries$1_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.loader.NativeLibraries$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_NativeLibraries$1_FieldInfo_,
	_NativeLibraries$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
	&_NativeLibraries$1_EnclosingMethodInfo_,
	_NativeLibraries$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.loader.NativeLibraries"
};

$Object* allocate$NativeLibraries$1($Class* clazz) {
	return $of($alloc(NativeLibraries$1));
}

void NativeLibraries$1::init$($NativeLibraries* this$0, $File* val$file) {
	$set(this, this$0, this$0);
	$set(this, val$file, val$file);
}

$Object* NativeLibraries$1::run() {
	try {
		return $of($nc(this->val$file)->exists() ? $nc(this->val$file)->getCanonicalPath() : ($String*)nullptr);
	} catch ($IOException& e) {
		return $of(nullptr);
	}
	$shouldNotReachHere();
}

NativeLibraries$1::NativeLibraries$1() {
}

$Class* NativeLibraries$1::load$($String* name, bool initialize) {
	$loadClass(NativeLibraries$1, name, initialize, &_NativeLibraries$1_ClassInfo_, allocate$NativeLibraries$1);
	return class$;
}

$Class* NativeLibraries$1::class$ = nullptr;

		} // loader
	} // internal
} // jdk