#include <jdk/internal/module/ModulePatcher$ExplodedResourceFinder.h>

#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/nio/file/FileVisitOption.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/Path.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <jdk/internal/loader/Resource.h>
#include <jdk/internal/module/ModulePatcher$ExplodedResourceFinder$1.h>
#include <jdk/internal/module/ModulePatcher.h>
#include <jdk/internal/module/Resources.h>
#include <jcpp.h>

#undef MAX_VALUE

using $FileVisitOptionArray = $Array<::java::nio::file::FileVisitOption>;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Files = ::java::nio::file::Files;
using $Path = ::java::nio::file::Path;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $Stream = ::java::util::stream::Stream;
using $Resource = ::jdk::internal::loader::Resource;
using $ModulePatcher$ExplodedResourceFinder$1 = ::jdk::internal::module::ModulePatcher$ExplodedResourceFinder$1;
using $Resources = ::jdk::internal::module::Resources;

namespace jdk {
	namespace internal {
		namespace module {

class ModulePatcher$ExplodedResourceFinder$$Lambda$lambda$list$0 : public $Function {
	$class(ModulePatcher$ExplodedResourceFinder$$Lambda$lambda$list$0, $NO_CLASS_INIT, $Function)
public:
	void init$(ModulePatcher$ExplodedResourceFinder* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(Object$* f) override {
		 return $of($nc(inst$)->lambda$list$0($cast($Path, f)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ModulePatcher$ExplodedResourceFinder$$Lambda$lambda$list$0>());
	}
	ModulePatcher$ExplodedResourceFinder* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ModulePatcher$ExplodedResourceFinder$$Lambda$lambda$list$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ModulePatcher$ExplodedResourceFinder$$Lambda$lambda$list$0, inst$)},
	{}
};
$MethodInfo ModulePatcher$ExplodedResourceFinder$$Lambda$lambda$list$0::methodInfos[3] = {
	{"<init>", "(Ljdk/internal/module/ModulePatcher$ExplodedResourceFinder;)V", nullptr, $PUBLIC, $method(ModulePatcher$ExplodedResourceFinder$$Lambda$lambda$list$0, init$, void, ModulePatcher$ExplodedResourceFinder*)},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ModulePatcher$ExplodedResourceFinder$$Lambda$lambda$list$0, apply, $Object*, Object$*)},
	{}
};
$ClassInfo ModulePatcher$ExplodedResourceFinder$$Lambda$lambda$list$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.module.ModulePatcher$ExplodedResourceFinder$$Lambda$lambda$list$0",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* ModulePatcher$ExplodedResourceFinder$$Lambda$lambda$list$0::load$($String* name, bool initialize) {
	$loadClass(ModulePatcher$ExplodedResourceFinder$$Lambda$lambda$list$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ModulePatcher$ExplodedResourceFinder$$Lambda$lambda$list$0::class$ = nullptr;

class ModulePatcher$ExplodedResourceFinder$$Lambda$lambda$list$1$1 : public $Predicate {
	$class(ModulePatcher$ExplodedResourceFinder$$Lambda$lambda$list$1$1, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* s) override {
		 return ModulePatcher$ExplodedResourceFinder::lambda$list$1($cast($String, s));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ModulePatcher$ExplodedResourceFinder$$Lambda$lambda$list$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ModulePatcher$ExplodedResourceFinder$$Lambda$lambda$list$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ModulePatcher$ExplodedResourceFinder$$Lambda$lambda$list$1$1, init$, void)},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ModulePatcher$ExplodedResourceFinder$$Lambda$lambda$list$1$1, test, bool, Object$*)},
	{}
};
$ClassInfo ModulePatcher$ExplodedResourceFinder$$Lambda$lambda$list$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.module.ModulePatcher$ExplodedResourceFinder$$Lambda$lambda$list$1$1",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* ModulePatcher$ExplodedResourceFinder$$Lambda$lambda$list$1$1::load$($String* name, bool initialize) {
	$loadClass(ModulePatcher$ExplodedResourceFinder$$Lambda$lambda$list$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ModulePatcher$ExplodedResourceFinder$$Lambda$lambda$list$1$1::class$ = nullptr;

$FieldInfo _ModulePatcher$ExplodedResourceFinder_FieldInfo_[] = {
	{"dir", "Ljava/nio/file/Path;", nullptr, $PRIVATE | $FINAL, $field(ModulePatcher$ExplodedResourceFinder, dir)},
	{}
};

$MethodInfo _ModulePatcher$ExplodedResourceFinder_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/file/Path;)V", nullptr, 0, $method(ModulePatcher$ExplodedResourceFinder, init$, void, $Path*)},
	{"close", "()V", nullptr, $PUBLIC, $virtualMethod(ModulePatcher$ExplodedResourceFinder, close, void)},
	{"find", "(Ljava/lang/String;)Ljdk/internal/loader/Resource;", nullptr, $PUBLIC, $virtualMethod(ModulePatcher$ExplodedResourceFinder, find, $Resource*, $String*), "java.io.IOException"},
	{"lambda$list$0", "(Ljava/nio/file/Path;)Ljava/lang/String;", nullptr, $PRIVATE | $SYNTHETIC, $method(ModulePatcher$ExplodedResourceFinder, lambda$list$0, $String*, $Path*)},
	{"lambda$list$1", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ModulePatcher$ExplodedResourceFinder, lambda$list$1, bool, $String*)},
	{"list", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(ModulePatcher$ExplodedResourceFinder, list, $Stream*), "java.io.IOException"},
	{"newResource", "(Ljava/lang/String;Ljava/nio/file/Path;Ljava/nio/file/Path;)Ljdk/internal/loader/Resource;", nullptr, $PRIVATE, $method(ModulePatcher$ExplodedResourceFinder, newResource, $Resource*, $String*, $Path*, $Path*)},
	{}
};

$InnerClassInfo _ModulePatcher$ExplodedResourceFinder_InnerClassesInfo_[] = {
	{"jdk.internal.module.ModulePatcher$ExplodedResourceFinder", "jdk.internal.module.ModulePatcher", "ExplodedResourceFinder", $PRIVATE | $STATIC},
	{"jdk.internal.module.ModulePatcher$ResourceFinder", "jdk.internal.module.ModulePatcher", "ResourceFinder", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{"jdk.internal.module.ModulePatcher$ExplodedResourceFinder$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ModulePatcher$ExplodedResourceFinder_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.module.ModulePatcher$ExplodedResourceFinder",
	"java.lang.Object",
	"jdk.internal.module.ModulePatcher$ResourceFinder",
	_ModulePatcher$ExplodedResourceFinder_FieldInfo_,
	_ModulePatcher$ExplodedResourceFinder_MethodInfo_,
	nullptr,
	nullptr,
	_ModulePatcher$ExplodedResourceFinder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.module.ModulePatcher"
};

$Object* allocate$ModulePatcher$ExplodedResourceFinder($Class* clazz) {
	return $of($alloc(ModulePatcher$ExplodedResourceFinder));
}

void ModulePatcher$ExplodedResourceFinder::init$($Path* dir) {
	$set(this, dir, dir);
}

void ModulePatcher$ExplodedResourceFinder::close() {
}

$Resource* ModulePatcher$ExplodedResourceFinder::find($String* name) {
	$var($Path, file, $Resources::toFilePath(this->dir, name));
	if (file != nullptr) {
		return newResource(name, this->dir, file);
	} else {
		return nullptr;
	}
}

$Resource* ModulePatcher$ExplodedResourceFinder::newResource($String* name, $Path* top, $Path* file) {
	return $new($ModulePatcher$ExplodedResourceFinder$1, this, name, file, top);
}

$Stream* ModulePatcher$ExplodedResourceFinder::list() {
	$useLocalCurrentObjectStackCache();
	return $nc($($nc($($Files::walk(this->dir, $Integer::MAX_VALUE, $$new($FileVisitOptionArray, 0))))->map(static_cast<$Function*>($$new(ModulePatcher$ExplodedResourceFinder$$Lambda$lambda$list$0, this)))))->filter(static_cast<$Predicate*>($$new(ModulePatcher$ExplodedResourceFinder$$Lambda$lambda$list$1$1)));
}

bool ModulePatcher$ExplodedResourceFinder::lambda$list$1($String* s) {
	$init(ModulePatcher$ExplodedResourceFinder);
	return !$nc(s)->isEmpty();
}

$String* ModulePatcher$ExplodedResourceFinder::lambda$list$0($Path* f) {
	return $Resources::toResourceName(this->dir, f);
}

ModulePatcher$ExplodedResourceFinder::ModulePatcher$ExplodedResourceFinder() {
}

$Class* ModulePatcher$ExplodedResourceFinder::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(ModulePatcher$ExplodedResourceFinder$$Lambda$lambda$list$0::classInfo$.name)) {
			return ModulePatcher$ExplodedResourceFinder$$Lambda$lambda$list$0::load$(name, initialize);
		}
		if (name->equals(ModulePatcher$ExplodedResourceFinder$$Lambda$lambda$list$1$1::classInfo$.name)) {
			return ModulePatcher$ExplodedResourceFinder$$Lambda$lambda$list$1$1::load$(name, initialize);
		}
	}
	$loadClass(ModulePatcher$ExplodedResourceFinder, name, initialize, &_ModulePatcher$ExplodedResourceFinder_ClassInfo_, allocate$ModulePatcher$ExplodedResourceFinder);
	return class$;
}

$Class* ModulePatcher$ExplodedResourceFinder::class$ = nullptr;

		} // module
	} // internal
} // jdk