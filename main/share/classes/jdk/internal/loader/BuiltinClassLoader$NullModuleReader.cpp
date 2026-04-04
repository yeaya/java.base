#include <jdk/internal/loader/BuiltinClassLoader$NullModuleReader.h>
#include <java/lang/InternalError.h>
#include <java/util/Optional.h>
#include <java/util/stream/Stream.h>
#include <jdk/internal/loader/BuiltinClassLoader.h>
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

void BuiltinClassLoader$NullModuleReader::init$() {
}

$Optional* BuiltinClassLoader$NullModuleReader::find($String* name) {
	return $Optional::empty();
}

$Stream* BuiltinClassLoader$NullModuleReader::list() {
	return $Stream::empty();
}

void BuiltinClassLoader$NullModuleReader::close() {
	$throwNew($InternalError, "Should not get here"_s);
}

BuiltinClassLoader$NullModuleReader::BuiltinClassLoader$NullModuleReader() {
}

$Class* BuiltinClassLoader$NullModuleReader::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(BuiltinClassLoader$NullModuleReader, init$, void)},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(BuiltinClassLoader$NullModuleReader, close, void)},
		{"find", "(Ljava/lang/String;)Ljava/util/Optional;", "(Ljava/lang/String;)Ljava/util/Optional<Ljava/net/URI;>;", $PUBLIC, $virtualMethod(BuiltinClassLoader$NullModuleReader, find, $Optional*, $String*)},
		{"list", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(BuiltinClassLoader$NullModuleReader, list, $Stream*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.loader.BuiltinClassLoader$NullModuleReader", "jdk.internal.loader.BuiltinClassLoader", "NullModuleReader", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.loader.BuiltinClassLoader$NullModuleReader",
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
		"jdk.internal.loader.BuiltinClassLoader"
	};
	$loadClass(BuiltinClassLoader$NullModuleReader, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BuiltinClassLoader$NullModuleReader);
	});
	return class$;
}

$Class* BuiltinClassLoader$NullModuleReader::class$ = nullptr;

		} // loader
	} // internal
} // jdk