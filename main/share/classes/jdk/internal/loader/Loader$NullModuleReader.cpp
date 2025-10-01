#include <jdk/internal/loader/Loader$NullModuleReader.h>

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
#include <jdk/internal/loader/Loader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $ModuleReader = ::java::lang::module::ModuleReader;
using $Optional = ::java::util::Optional;
using $Stream = ::java::util::stream::Stream;
using $Loader = ::jdk::internal::loader::Loader;

namespace jdk {
	namespace internal {
		namespace loader {

$MethodInfo _Loader$NullModuleReader_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Loader$NullModuleReader::*)()>(&Loader$NullModuleReader::init$))},
	{"close", "()V", nullptr, $PUBLIC},
	{"find", "(Ljava/lang/String;)Ljava/util/Optional;", "(Ljava/lang/String;)Ljava/util/Optional<Ljava/net/URI;>;", $PUBLIC},
	{"list", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<Ljava/lang/String;>;", $PUBLIC},
	{}
};

$InnerClassInfo _Loader$NullModuleReader_InnerClassesInfo_[] = {
	{"jdk.internal.loader.Loader$NullModuleReader", "jdk.internal.loader.Loader", "NullModuleReader", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Loader$NullModuleReader_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.loader.Loader$NullModuleReader",
	"java.lang.Object",
	"java.lang.module.ModuleReader",
	nullptr,
	_Loader$NullModuleReader_MethodInfo_,
	nullptr,
	nullptr,
	_Loader$NullModuleReader_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.loader.Loader"
};

$Object* allocate$Loader$NullModuleReader($Class* clazz) {
	return $of($alloc(Loader$NullModuleReader));
}

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
	$loadClass(Loader$NullModuleReader, name, initialize, &_Loader$NullModuleReader_ClassInfo_, allocate$Loader$NullModuleReader);
	return class$;
}

$Class* Loader$NullModuleReader::class$ = nullptr;

		} // loader
	} // internal
} // jdk