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
using $NativeLibraries = ::jdk::internal::loader::NativeLibraries;

namespace jdk {
	namespace internal {
		namespace loader {

void NativeLibraries$1::init$($NativeLibraries* this$0, $File* val$file) {
	$set(this, this$0, this$0);
	$set(this, val$file, val$file);
}

$Object* NativeLibraries$1::run() {
	try {
		return $of($nc(this->val$file)->exists() ? this->val$file->getCanonicalPath() : ($String*)nullptr);
	} catch ($IOException& e) {
		return nullptr;
	}
	$shouldNotReachHere();
}

NativeLibraries$1::NativeLibraries$1() {
}

$Class* NativeLibraries$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljdk/internal/loader/NativeLibraries;", nullptr, $FINAL | $SYNTHETIC, $field(NativeLibraries$1, this$0)},
		{"val$file", "Ljava/io/File;", nullptr, $FINAL | $SYNTHETIC, $field(NativeLibraries$1, val$file)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/loader/NativeLibraries;Ljava/io/File;)V", nullptr, 0, $method(NativeLibraries$1, init$, void, $NativeLibraries*, $File*)},
		{"run", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(NativeLibraries$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"jdk.internal.loader.NativeLibraries",
		"loadLibrary",
		"(Ljava/lang/Class;Ljava/io/File;)Ljdk/internal/loader/NativeLibrary;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.loader.NativeLibraries$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.loader.NativeLibraries$1",
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
		"jdk.internal.loader.NativeLibraries"
	};
	$loadClass(NativeLibraries$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NativeLibraries$1);
	});
	return class$;
}

$Class* NativeLibraries$1::class$ = nullptr;

		} // loader
	} // internal
} // jdk