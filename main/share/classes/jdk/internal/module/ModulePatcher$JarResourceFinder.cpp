#include <jdk/internal/module/ModulePatcher$JarResourceFinder.h>

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URI.h>
#include <java/net/URL.h>
#include <java/nio/file/Path.h>
#include <java/util/function/Function.h>
#include <java/util/jar/JarEntry.h>
#include <java/util/jar/JarFile.h>
#include <java/util/stream/Stream.h>
#include <java/util/zip/ZipEntry.h>
#include <jdk/internal/loader/Resource.h>
#include <jdk/internal/module/ModulePatcher$JarResourceFinder$1.h>
#include <jdk/internal/module/ModulePatcher.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $URI = ::java::net::URI;
using $URL = ::java::net::URL;
using $Path = ::java::nio::file::Path;
using $Function = ::java::util::function::Function;
using $JarEntry = ::java::util::jar::JarEntry;
using $JarFile = ::java::util::jar::JarFile;
using $Stream = ::java::util::stream::Stream;
using $ZipEntry = ::java::util::zip::ZipEntry;
using $ZipFile = ::java::util::zip::ZipFile;
using $Resource = ::jdk::internal::loader::Resource;
using $ModulePatcher = ::jdk::internal::module::ModulePatcher;
using $ModulePatcher$JarResourceFinder$1 = ::jdk::internal::module::ModulePatcher$JarResourceFinder$1;
using $ModulePatcher$ResourceFinder = ::jdk::internal::module::ModulePatcher$ResourceFinder;

namespace jdk {
	namespace internal {
		namespace module {

class ModulePatcher$JarResourceFinder$$Lambda$getName : public $Function {
	$class(ModulePatcher$JarResourceFinder$$Lambda$getName, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($ZipEntry, inst$)->getName());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ModulePatcher$JarResourceFinder$$Lambda$getName>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ModulePatcher$JarResourceFinder$$Lambda$getName::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ModulePatcher$JarResourceFinder$$Lambda$getName::*)()>(&ModulePatcher$JarResourceFinder$$Lambda$getName::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ModulePatcher$JarResourceFinder$$Lambda$getName::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.module.ModulePatcher$JarResourceFinder$$Lambda$getName",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* ModulePatcher$JarResourceFinder$$Lambda$getName::load$($String* name, bool initialize) {
	$loadClass(ModulePatcher$JarResourceFinder$$Lambda$getName, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ModulePatcher$JarResourceFinder$$Lambda$getName::class$ = nullptr;

$FieldInfo _ModulePatcher$JarResourceFinder_FieldInfo_[] = {
	{"jf", "Ljava/util/jar/JarFile;", nullptr, $PRIVATE | $FINAL, $field(ModulePatcher$JarResourceFinder, jf)},
	{"csURL", "Ljava/net/URL;", nullptr, $PRIVATE | $FINAL, $field(ModulePatcher$JarResourceFinder, csURL)},
	{}
};

$MethodInfo _ModulePatcher$JarResourceFinder_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/file/Path;)V", nullptr, 0, $method(static_cast<void(ModulePatcher$JarResourceFinder::*)($Path*)>(&ModulePatcher$JarResourceFinder::init$)), "java.io.IOException"},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"find", "(Ljava/lang/String;)Ljdk/internal/loader/Resource;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"list", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<Ljava/lang/String;>;", $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _ModulePatcher$JarResourceFinder_InnerClassesInfo_[] = {
	{"jdk.internal.module.ModulePatcher$JarResourceFinder", "jdk.internal.module.ModulePatcher", "JarResourceFinder", $PRIVATE | $STATIC},
	{"jdk.internal.module.ModulePatcher$ResourceFinder", "jdk.internal.module.ModulePatcher", "ResourceFinder", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{"jdk.internal.module.ModulePatcher$JarResourceFinder$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ModulePatcher$JarResourceFinder_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.module.ModulePatcher$JarResourceFinder",
	"java.lang.Object",
	"jdk.internal.module.ModulePatcher$ResourceFinder",
	_ModulePatcher$JarResourceFinder_FieldInfo_,
	_ModulePatcher$JarResourceFinder_MethodInfo_,
	nullptr,
	nullptr,
	_ModulePatcher$JarResourceFinder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.module.ModulePatcher"
};

$Object* allocate$ModulePatcher$JarResourceFinder($Class* clazz) {
	return $of($alloc(ModulePatcher$JarResourceFinder));
}

void ModulePatcher$JarResourceFinder::init$($Path* path) {
	$useLocalCurrentObjectStackCache();
	$set(this, jf, $new($JarFile, $($nc(path)->toString())));
	$set(this, csURL, $nc($($nc(path)->toUri()))->toURL());
}

void ModulePatcher$JarResourceFinder::close() {
	$nc(this->jf)->close();
}

$Resource* ModulePatcher$JarResourceFinder::find($String* name) {
	$var($JarEntry, entry, $nc(this->jf)->getJarEntry(name));
	if (entry == nullptr) {
		return nullptr;
	}
	return $new($ModulePatcher$JarResourceFinder$1, this, name, entry);
}

$Stream* ModulePatcher$JarResourceFinder::list() {
	$useLocalCurrentObjectStackCache();
	return $nc($($nc(this->jf)->stream()))->map(static_cast<$Function*>($$new(ModulePatcher$JarResourceFinder$$Lambda$getName)));
}

ModulePatcher$JarResourceFinder::ModulePatcher$JarResourceFinder() {
}

$Class* ModulePatcher$JarResourceFinder::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(ModulePatcher$JarResourceFinder$$Lambda$getName::classInfo$.name)) {
			return ModulePatcher$JarResourceFinder$$Lambda$getName::load$(name, initialize);
		}
	}
	$loadClass(ModulePatcher$JarResourceFinder, name, initialize, &_ModulePatcher$JarResourceFinder_ClassInfo_, allocate$ModulePatcher$JarResourceFinder);
	return class$;
}

$Class* ModulePatcher$JarResourceFinder::class$ = nullptr;

		} // module
	} // internal
} // jdk