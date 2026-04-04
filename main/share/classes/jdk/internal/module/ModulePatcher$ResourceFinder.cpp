#include <jdk/internal/module/ModulePatcher$ResourceFinder.h>
#include <java/util/stream/Stream.h>
#include <jdk/internal/loader/Resource.h>
#include <jdk/internal/module/ModulePatcher.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Stream = ::java::util::stream::Stream;
using $Resource = ::jdk::internal::loader::Resource;

namespace jdk {
	namespace internal {
		namespace module {

$Class* ModulePatcher$ResourceFinder::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"find", "(Ljava/lang/String;)Ljdk/internal/loader/Resource;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ModulePatcher$ResourceFinder, find, $Resource*, $String*), "java.io.IOException"},
		{"list", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<Ljava/lang/String;>;", $PUBLIC | $ABSTRACT, $virtualMethod(ModulePatcher$ResourceFinder, list, $Stream*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.module.ModulePatcher$ResourceFinder", "jdk.internal.module.ModulePatcher", "ResourceFinder", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"jdk.internal.module.ModulePatcher$ResourceFinder",
		nullptr,
		"java.io.Closeable",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.module.ModulePatcher"
	};
	$loadClass(ModulePatcher$ResourceFinder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModulePatcher$ResourceFinder);
	});
	return class$;
}

$Class* ModulePatcher$ResourceFinder::class$ = nullptr;

		} // module
	} // internal
} // jdk