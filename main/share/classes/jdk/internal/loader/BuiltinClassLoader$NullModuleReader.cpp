#include <jdk/internal/loader/BuiltinClassLoader$NullModuleReader.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InternalError.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Optional.h>
#include <java/util/stream/Stream.h>
#include <jdk/internal/loader/BuiltinClassLoader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $ModuleReader = ::java::lang::module::ModuleReader;
using $Optional = ::java::util::Optional;
using $Stream = ::java::util::stream::Stream;
using $BuiltinClassLoader = ::jdk::internal::loader::BuiltinClassLoader;

namespace jdk {
	namespace internal {
		namespace loader {

$MethodInfo _BuiltinClassLoader$NullModuleReader_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(BuiltinClassLoader$NullModuleReader::*)()>(&BuiltinClassLoader$NullModuleReader::init$))},
	{"close", "()V", nullptr, $PUBLIC},
	{"find", "(Ljava/lang/String;)Ljava/util/Optional;", "(Ljava/lang/String;)Ljava/util/Optional<Ljava/net/URI;>;", $PUBLIC},
	{"list", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<Ljava/lang/String;>;", $PUBLIC},
	{}
};

$InnerClassInfo _BuiltinClassLoader$NullModuleReader_InnerClassesInfo_[] = {
	{"jdk.internal.loader.BuiltinClassLoader$NullModuleReader", "jdk.internal.loader.BuiltinClassLoader", "NullModuleReader", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _BuiltinClassLoader$NullModuleReader_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.loader.BuiltinClassLoader$NullModuleReader",
	"java.lang.Object",
	"java.lang.module.ModuleReader",
	nullptr,
	_BuiltinClassLoader$NullModuleReader_MethodInfo_,
	nullptr,
	nullptr,
	_BuiltinClassLoader$NullModuleReader_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.loader.BuiltinClassLoader"
};

$Object* allocate$BuiltinClassLoader$NullModuleReader($Class* clazz) {
	return $of($alloc(BuiltinClassLoader$NullModuleReader));
}

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
	$loadClass(BuiltinClassLoader$NullModuleReader, name, initialize, &_BuiltinClassLoader$NullModuleReader_ClassInfo_, allocate$BuiltinClassLoader$NullModuleReader);
	return class$;
}

$Class* BuiltinClassLoader$NullModuleReader::class$ = nullptr;

		} // loader
	} // internal
} // jdk