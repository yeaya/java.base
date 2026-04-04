#include <jdk/internal/module/ModuleBootstrap$SafeModuleFinder.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/module/ModuleDescriptor.h>
#include <java/lang/module/ModuleFinder.h>
#include <java/lang/module/ModuleReference.h>
#include <java/util/Collections.h>
#include <java/util/Map.h>
#include <java/util/Objects.h>
#include <java/util/Optional.h>
#include <java/util/Set.h>
#include <java/util/function/Function.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/Stream.h>
#include <jdk/internal/module/ModuleBootstrap.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $ModuleFinder = ::java::lang::module::ModuleFinder;
using $ModuleReference = ::java::lang::module::ModuleReference;
using $Collections = ::java::util::Collections;
using $Map = ::java::util::Map;
using $Objects = ::java::util::Objects;
using $Optional = ::java::util::Optional;
using $Set = ::java::util::Set;
using $Function = ::java::util::function::Function;
using $Collectors = ::java::util::stream::Collectors;

namespace jdk {
	namespace internal {
		namespace module {

class ModuleBootstrap$SafeModuleFinder$$Lambda$lambda$find$0 : public $Function {
	$class(ModuleBootstrap$SafeModuleFinder$$Lambda$lambda$find$0, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* m) override {
		 return $of(ModuleBootstrap$SafeModuleFinder::lambda$find$0($cast($ModuleReference, m)));
	}
};
$Class* ModuleBootstrap$SafeModuleFinder$$Lambda$lambda$find$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ModuleBootstrap$SafeModuleFinder$$Lambda$lambda$find$0, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ModuleBootstrap$SafeModuleFinder$$Lambda$lambda$find$0, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.module.ModuleBootstrap$SafeModuleFinder$$Lambda$lambda$find$0",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(ModuleBootstrap$SafeModuleFinder$$Lambda$lambda$find$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModuleBootstrap$SafeModuleFinder$$Lambda$lambda$find$0);
	});
	return class$;
}
$Class* ModuleBootstrap$SafeModuleFinder$$Lambda$lambda$find$0::class$ = nullptr;

void ModuleBootstrap$SafeModuleFinder::init$($ModuleFinder* finder) {
	$set(this, mrefs, $Collections::unmodifiableSet($($nc(finder)->findAll())));
}

$Optional* ModuleBootstrap$SafeModuleFinder::find($String* name) {
	$useLocalObjectStack();
	$Objects::requireNonNull(name);
	$var($Map, nameToModule, this->nameToModule);
	if (nameToModule == nullptr) {
		$var($Function, var$0, $new(ModuleBootstrap$SafeModuleFinder$$Lambda$lambda$find$0));
		$set(this, nameToModule, $assign(nameToModule, $cast($Map, $$nc($nc(this->mrefs)->stream())->collect($($Collectors::toMap(var$0, $($Function::identity())))))));
	}
	return $Optional::ofNullable($$cast($ModuleReference, $nc(nameToModule)->get(name)));
}

$Set* ModuleBootstrap$SafeModuleFinder::findAll() {
	return this->mrefs;
}

$String* ModuleBootstrap$SafeModuleFinder::lambda$find$0($ModuleReference* m) {
	$init(ModuleBootstrap$SafeModuleFinder);
	return $$nc($nc(m)->descriptor())->name();
}

ModuleBootstrap$SafeModuleFinder::ModuleBootstrap$SafeModuleFinder() {
}

$Class* ModuleBootstrap$SafeModuleFinder::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("jdk.internal.module.ModuleBootstrap$SafeModuleFinder$$Lambda$lambda$find$0")) {
			return ModuleBootstrap$SafeModuleFinder$$Lambda$lambda$find$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"mrefs", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/module/ModuleReference;>;", $PRIVATE | $FINAL, $field(ModuleBootstrap$SafeModuleFinder, mrefs)},
		{"nameToModule", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/module/ModuleReference;>;", $PRIVATE | $VOLATILE, $field(ModuleBootstrap$SafeModuleFinder, nameToModule)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/module/ModuleFinder;)V", nullptr, 0, $method(ModuleBootstrap$SafeModuleFinder, init$, void, $ModuleFinder*)},
		{"find", "(Ljava/lang/String;)Ljava/util/Optional;", "(Ljava/lang/String;)Ljava/util/Optional<Ljava/lang/module/ModuleReference;>;", $PUBLIC, $virtualMethod(ModuleBootstrap$SafeModuleFinder, find, $Optional*, $String*)},
		{"findAll", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/module/ModuleReference;>;", $PUBLIC, $virtualMethod(ModuleBootstrap$SafeModuleFinder, findAll, $Set*)},
		{"lambda$find$0", "(Ljava/lang/module/ModuleReference;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ModuleBootstrap$SafeModuleFinder, lambda$find$0, $String*, $ModuleReference*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.module.ModuleBootstrap$SafeModuleFinder", "jdk.internal.module.ModuleBootstrap", "SafeModuleFinder", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.module.ModuleBootstrap$SafeModuleFinder",
		"java.lang.Object",
		"java.lang.module.ModuleFinder",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.module.ModuleBootstrap"
	};
	$loadClass(ModuleBootstrap$SafeModuleFinder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModuleBootstrap$SafeModuleFinder);
	});
	return class$;
}

$Class* ModuleBootstrap$SafeModuleFinder::class$ = nullptr;

		} // module
	} // internal
} // jdk