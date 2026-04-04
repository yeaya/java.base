#include <jdk/internal/loader/Loader$NullModuleReader.h>
#include <java/lang/InternalError.h>
#include <java/util/Optional.h>
#include <java/util/stream/Stream.h>
#include <jdk/internal/loader/Loader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $Optional = ::java::util::Optional;
using $Stream = ::java::util::stream::Stream;

namespace jdk {
	namespace internal {
		namespace loader {

void Loader$NullModuleReader::init$() {
}

$Optional* Loader$NullModuleReader::find($String* name) {
	return $Optional::empty();
}

$Stream* Loader$NullModuleReader::list() {
	return $Stream::empty();
}

void Loader$NullModuleReader::close() {
	$throwNew($InternalError, "Should not get here"_s);
}

Loader$NullModuleReader::Loader$NullModuleReader() {
}

$Class* Loader$NullModuleReader::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Loader$NullModuleReader, init$, void)},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(Loader$NullModuleReader, close, void)},
		{"find", "(Ljava/lang/String;)Ljava/util/Optional;", "(Ljava/lang/String;)Ljava/util/Optional<Ljava/net/URI;>;", $PUBLIC, $virtualMethod(Loader$NullModuleReader, find, $Optional*, $String*)},
		{"list", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(Loader$NullModuleReader, list, $Stream*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.loader.Loader$NullModuleReader", "jdk.internal.loader.Loader", "NullModuleReader", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.loader.Loader$NullModuleReader",
		"java.lang.Object",
		"java.lang.module.ModuleReader",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.loader.Loader"
	};
	$loadClass(Loader$NullModuleReader, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Loader$NullModuleReader);
	});
	return class$;
}

$Class* Loader$NullModuleReader::class$ = nullptr;

		} // loader
	} // internal
} // jdk