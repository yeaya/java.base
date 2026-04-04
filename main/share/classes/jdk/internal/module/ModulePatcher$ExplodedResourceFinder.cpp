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
	ModulePatcher$ExplodedResourceFinder* inst$ = nullptr;
};
$Class* ModulePatcher$ExplodedResourceFinder$$Lambda$lambda$list$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ModulePatcher$ExplodedResourceFinder$$Lambda$lambda$list$0, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/module/ModulePatcher$ExplodedResourceFinder;)V", nullptr, $PUBLIC, $method(ModulePatcher$ExplodedResourceFinder$$Lambda$lambda$list$0, init$, void, ModulePatcher$ExplodedResourceFinder*)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ModulePatcher$ExplodedResourceFinder$$Lambda$lambda$list$0, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.module.ModulePatcher$ExplodedResourceFinder$$Lambda$lambda$list$0",
		"java.lang.Object",
		"java.util.function.Function",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ModulePatcher$ExplodedResourceFinder$$Lambda$lambda$list$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModulePatcher$ExplodedResourceFinder$$Lambda$lambda$list$0);
	});
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
};
$Class* ModulePatcher$ExplodedResourceFinder$$Lambda$lambda$list$1$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ModulePatcher$ExplodedResourceFinder$$Lambda$lambda$list$1$1, init$, void)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ModulePatcher$ExplodedResourceFinder$$Lambda$lambda$list$1$1, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.module.ModulePatcher$ExplodedResourceFinder$$Lambda$lambda$list$1$1",
		"java.lang.Object",
		"java.util.function.Predicate",
		nullptr,
		methodInfos$$
	};
	$loadClass(ModulePatcher$ExplodedResourceFinder$$Lambda$lambda$list$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModulePatcher$ExplodedResourceFinder$$Lambda$lambda$list$1$1);
	});
	return class$;
}
$Class* ModulePatcher$ExplodedResourceFinder$$Lambda$lambda$list$1$1::class$ = nullptr;

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
	$useLocalObjectStack();
	return $$nc($$nc($Files::walk(this->dir, $Integer::MAX_VALUE, $$new($FileVisitOptionArray, 0)))->map($$new(ModulePatcher$ExplodedResourceFinder$$Lambda$lambda$list$0, this)))->filter($$new(ModulePatcher$ExplodedResourceFinder$$Lambda$lambda$list$1$1));
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
		if (name->equals("jdk.internal.module.ModulePatcher$ExplodedResourceFinder$$Lambda$lambda$list$0")) {
			return ModulePatcher$ExplodedResourceFinder$$Lambda$lambda$list$0::load$(name, initialize);
		}
		if (name->equals("jdk.internal.module.ModulePatcher$ExplodedResourceFinder$$Lambda$lambda$list$1$1")) {
			return ModulePatcher$ExplodedResourceFinder$$Lambda$lambda$list$1$1::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"dir", "Ljava/nio/file/Path;", nullptr, $PRIVATE | $FINAL, $field(ModulePatcher$ExplodedResourceFinder, dir)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/file/Path;)V", nullptr, 0, $method(ModulePatcher$ExplodedResourceFinder, init$, void, $Path*)},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(ModulePatcher$ExplodedResourceFinder, close, void)},
		{"find", "(Ljava/lang/String;)Ljdk/internal/loader/Resource;", nullptr, $PUBLIC, $virtualMethod(ModulePatcher$ExplodedResourceFinder, find, $Resource*, $String*), "java.io.IOException"},
		{"lambda$list$0", "(Ljava/nio/file/Path;)Ljava/lang/String;", nullptr, $PRIVATE | $SYNTHETIC, $method(ModulePatcher$ExplodedResourceFinder, lambda$list$0, $String*, $Path*)},
		{"lambda$list$1", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ModulePatcher$ExplodedResourceFinder, lambda$list$1, bool, $String*)},
		{"list", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(ModulePatcher$ExplodedResourceFinder, list, $Stream*), "java.io.IOException"},
		{"newResource", "(Ljava/lang/String;Ljava/nio/file/Path;Ljava/nio/file/Path;)Ljdk/internal/loader/Resource;", nullptr, $PRIVATE, $method(ModulePatcher$ExplodedResourceFinder, newResource, $Resource*, $String*, $Path*, $Path*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.module.ModulePatcher$ExplodedResourceFinder", "jdk.internal.module.ModulePatcher", "ExplodedResourceFinder", $PRIVATE | $STATIC},
		{"jdk.internal.module.ModulePatcher$ResourceFinder", "jdk.internal.module.ModulePatcher", "ResourceFinder", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
		{"jdk.internal.module.ModulePatcher$ExplodedResourceFinder$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.module.ModulePatcher$ExplodedResourceFinder",
		"java.lang.Object",
		"jdk.internal.module.ModulePatcher$ResourceFinder",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.module.ModulePatcher"
	};
	$loadClass(ModulePatcher$ExplodedResourceFinder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModulePatcher$ExplodedResourceFinder);
	});
	return class$;
}

$Class* ModulePatcher$ExplodedResourceFinder::class$ = nullptr;

		} // module
	} // internal
} // jdk