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
using $NativeLibraries = ::jdk::internal::loader::NativeLibraries;
using $StaticProperty = ::jdk::internal::util::StaticProperty;

namespace jdk {
	namespace internal {
		namespace loader {

$FieldInfo _NativeLibraries$LibraryPaths_FieldInfo_[] = {
	{"SYS_PATHS", "[Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(NativeLibraries$LibraryPaths, SYS_PATHS)},
	{"USER_PATHS", "[Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(NativeLibraries$LibraryPaths, USER_PATHS)},
	{}
};

$MethodInfo _NativeLibraries$LibraryPaths_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(NativeLibraries$LibraryPaths::*)()>(&NativeLibraries$LibraryPaths::init$))},
	{}
};

$InnerClassInfo _NativeLibraries$LibraryPaths_InnerClassesInfo_[] = {
	{"jdk.internal.loader.NativeLibraries$LibraryPaths", "jdk.internal.loader.NativeLibraries", "LibraryPaths", $STATIC},
	{}
};

$ClassInfo _NativeLibraries$LibraryPaths_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.loader.NativeLibraries$LibraryPaths",
	"java.lang.Object",
	nullptr,
	_NativeLibraries$LibraryPaths_FieldInfo_,
	_NativeLibraries$LibraryPaths_MethodInfo_,
	nullptr,
	nullptr,
	_NativeLibraries$LibraryPaths_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.loader.NativeLibraries"
};

$Object* allocate$NativeLibraries$LibraryPaths($Class* clazz) {
	return $of($alloc(NativeLibraries$LibraryPaths));
}

$StringArray* NativeLibraries$LibraryPaths::SYS_PATHS = nullptr;
$StringArray* NativeLibraries$LibraryPaths::USER_PATHS = nullptr;

void NativeLibraries$LibraryPaths::init$() {
}

void clinit$NativeLibraries$LibraryPaths($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(NativeLibraries$LibraryPaths::SYS_PATHS, $ClassLoaderHelper::parsePath($($StaticProperty::sunBootLibraryPath())));
	$assignStatic(NativeLibraries$LibraryPaths::USER_PATHS, $ClassLoaderHelper::parsePath($($StaticProperty::javaLibraryPath())));
}

NativeLibraries$LibraryPaths::NativeLibraries$LibraryPaths() {
}

$Class* NativeLibraries$LibraryPaths::load$($String* name, bool initialize) {
	$loadClass(NativeLibraries$LibraryPaths, name, initialize, &_NativeLibraries$LibraryPaths_ClassInfo_, clinit$NativeLibraries$LibraryPaths, allocate$NativeLibraries$LibraryPaths);
	return class$;
}

$Class* NativeLibraries$LibraryPaths::class$ = nullptr;

		} // loader
	} // internal
} // jdk