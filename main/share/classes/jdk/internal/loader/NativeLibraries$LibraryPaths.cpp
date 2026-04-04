#include <jdk/internal/loader/NativeLibraries$LibraryPaths.h>
#include <jdk/internal/loader/ClassLoaderHelper.h>
#include <jdk/internal/loader/NativeLibraries.h>
#include <jdk/internal/util/StaticProperty.h>
#include <jcpp.h>

#undef SYS_PATHS
#undef USER_PATHS

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ClassLoaderHelper = ::jdk::internal::loader::ClassLoaderHelper;
using $StaticProperty = ::jdk::internal::util::StaticProperty;

namespace jdk {
	namespace internal {
		namespace loader {

$StringArray* NativeLibraries$LibraryPaths::SYS_PATHS = nullptr;
$StringArray* NativeLibraries$LibraryPaths::USER_PATHS = nullptr;

void NativeLibraries$LibraryPaths::init$() {
}

void NativeLibraries$LibraryPaths::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(NativeLibraries$LibraryPaths::SYS_PATHS, $ClassLoaderHelper::parsePath($($StaticProperty::sunBootLibraryPath())));
	$assignStatic(NativeLibraries$LibraryPaths::USER_PATHS, $ClassLoaderHelper::parsePath($($StaticProperty::javaLibraryPath())));
}

NativeLibraries$LibraryPaths::NativeLibraries$LibraryPaths() {
}

$Class* NativeLibraries$LibraryPaths::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"SYS_PATHS", "[Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(NativeLibraries$LibraryPaths, SYS_PATHS)},
		{"USER_PATHS", "[Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(NativeLibraries$LibraryPaths, USER_PATHS)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(NativeLibraries$LibraryPaths, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.loader.NativeLibraries$LibraryPaths", "jdk.internal.loader.NativeLibraries", "LibraryPaths", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.loader.NativeLibraries$LibraryPaths",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.loader.NativeLibraries"
	};
	$loadClass(NativeLibraries$LibraryPaths, name, initialize, &classInfo$$, NativeLibraries$LibraryPaths::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(NativeLibraries$LibraryPaths);
	});
	return class$;
}

$Class* NativeLibraries$LibraryPaths::class$ = nullptr;

		} // loader
	} // internal
} // jdk