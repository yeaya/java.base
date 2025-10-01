#include <jdk/internal/module/ModulePatcher$ResourceFinder.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/stream/Stream.h>
#include <jdk/internal/loader/Resource.h>
#include <jdk/internal/module/ModulePatcher.h>
#include <jcpp.h>

using $Closeable = ::java::io::Closeable;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Stream = ::java::util::stream::Stream;
using $Resource = ::jdk::internal::loader::Resource;
using $ModulePatcher = ::jdk::internal::module::ModulePatcher;

namespace jdk {
	namespace internal {
		namespace module {

$MethodInfo _ModulePatcher$ResourceFinder_MethodInfo_[] = {
	{"find", "(Ljava/lang/String;)Ljdk/internal/loader/Resource;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"list", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<Ljava/lang/String;>;", $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _ModulePatcher$ResourceFinder_InnerClassesInfo_[] = {
	{"jdk.internal.module.ModulePatcher$ResourceFinder", "jdk.internal.module.ModulePatcher", "ResourceFinder", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ModulePatcher$ResourceFinder_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"jdk.internal.module.ModulePatcher$ResourceFinder",
	nullptr,
	"java.io.Closeable",
	nullptr,
	_ModulePatcher$ResourceFinder_MethodInfo_,
	nullptr,
	nullptr,
	_ModulePatcher$ResourceFinder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.module.ModulePatcher"
};

$Object* allocate$ModulePatcher$ResourceFinder($Class* clazz) {
	return $of($alloc(ModulePatcher$ResourceFinder));
}

$Class* ModulePatcher$ResourceFinder::load$($String* name, bool initialize) {
	$loadClass(ModulePatcher$ResourceFinder, name, initialize, &_ModulePatcher$ResourceFinder_ClassInfo_, allocate$ModulePatcher$ResourceFinder);
	return class$;
}

$Class* ModulePatcher$ResourceFinder::class$ = nullptr;

		} // module
	} // internal
} // jdk