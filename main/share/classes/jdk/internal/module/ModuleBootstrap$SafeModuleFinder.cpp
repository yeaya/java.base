#include <jdk/internal/module/ModuleBootstrap$SafeModuleFinder.h>

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
#include <java/lang/module/ModuleDescriptor.h>
#include <java/lang/module/ModuleFinder.h>
#include <java/lang/module/ModuleReference.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $ModuleDescriptor = ::java::lang::module::ModuleDescriptor;
using $ModuleFinder = ::java::lang::module::ModuleFinder;
using $ModuleReference = ::java::lang::module::ModuleReference;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $Map = ::java::util::Map;
using $Objects = ::java::util::Objects;
using $Optional = ::java::util::Optional;
using $Set = ::java::util::Set;
using $Function = ::java::util::function::Function;
using $Collector = ::java::util::stream::Collector;
using $Collectors = ::java::util::stream::Collectors;
using $Stream = ::java::util::stream::Stream;
using $ModuleBootstrap = ::jdk::internal::module::ModuleBootstrap;

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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ModuleBootstrap$SafeModuleFinder$$Lambda$lambda$find$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ModuleBootstrap$SafeModuleFinder$$Lambda$lambda$find$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ModuleBootstrap$SafeModuleFinder$$Lambda$lambda$find$0::*)()>(&ModuleBootstrap$SafeModuleFinder$$Lambda$lambda$find$0::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ModuleBootstrap$SafeModuleFinder$$Lambda$lambda$find$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.module.ModuleBootstrap$SafeModuleFinder$$Lambda$lambda$find$0",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* ModuleBootstrap$SafeModuleFinder$$Lambda$lambda$find$0::load$($String* name, bool initialize) {
	$loadClass(ModuleBootstrap$SafeModuleFinder$$Lambda$lambda$find$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ModuleBootstrap$SafeModuleFinder$$Lambda$lambda$find$0::class$ = nullptr;

$FieldInfo _ModuleBootstrap$SafeModuleFinder_FieldInfo_[] = {
	{"mrefs", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/module/ModuleReference;>;", $PRIVATE | $FINAL, $field(ModuleBootstrap$SafeModuleFinder, mrefs)},
	{"nameToModule", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/module/ModuleReference;>;", $PRIVATE | $VOLATILE, $field(ModuleBootstrap$SafeModuleFinder, nameToModule)},
	{}
};

$MethodInfo _ModuleBootstrap$SafeModuleFinder_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/module/ModuleFinder;)V", nullptr, 0, $method(static_cast<void(ModuleBootstrap$SafeModuleFinder::*)($ModuleFinder*)>(&ModuleBootstrap$SafeModuleFinder::init$))},
	{"find", "(Ljava/lang/String;)Ljava/util/Optional;", "(Ljava/lang/String;)Ljava/util/Optional<Ljava/lang/module/ModuleReference;>;", $PUBLIC},
	{"findAll", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/module/ModuleReference;>;", $PUBLIC},
	{"lambda$find$0", "(Ljava/lang/module/ModuleReference;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$String*(*)($ModuleReference*)>(&ModuleBootstrap$SafeModuleFinder::lambda$find$0))},
	{}
};

$InnerClassInfo _ModuleBootstrap$SafeModuleFinder_InnerClassesInfo_[] = {
	{"jdk.internal.module.ModuleBootstrap$SafeModuleFinder", "jdk.internal.module.ModuleBootstrap", "SafeModuleFinder", $STATIC},
	{}
};

$ClassInfo _ModuleBootstrap$SafeModuleFinder_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.module.ModuleBootstrap$SafeModuleFinder",
	"java.lang.Object",
	"java.lang.module.ModuleFinder",
	_ModuleBootstrap$SafeModuleFinder_FieldInfo_,
	_ModuleBootstrap$SafeModuleFinder_MethodInfo_,
	nullptr,
	nullptr,
	_ModuleBootstrap$SafeModuleFinder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.module.ModuleBootstrap"
};

$Object* allocate$ModuleBootstrap$SafeModuleFinder($Class* clazz) {
	return $of($alloc(ModuleBootstrap$SafeModuleFinder));
}

void ModuleBootstrap$SafeModuleFinder::init$($ModuleFinder* finder) {
	$set(this, mrefs, $Collections::unmodifiableSet($($nc(finder)->findAll())));
}

$Optional* ModuleBootstrap$SafeModuleFinder::find($String* name) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(name);
	$var($Map, nameToModule, this->nameToModule);
	if (nameToModule == nullptr) {
		$var($Function, var$0, static_cast<$Function*>($new(ModuleBootstrap$SafeModuleFinder$$Lambda$lambda$find$0)));
		$set(this, nameToModule, ($assign(nameToModule, $cast($Map, $nc($($nc(this->mrefs)->stream()))->collect($($Collectors::toMap(var$0, $($Function::identity()))))))));
	}
	return $Optional::ofNullable($cast($ModuleReference, $($nc(nameToModule)->get(name))));
}

$Set* ModuleBootstrap$SafeModuleFinder::findAll() {
	return this->mrefs;
}

$String* ModuleBootstrap$SafeModuleFinder::lambda$find$0($ModuleReference* m) {
	$init(ModuleBootstrap$SafeModuleFinder);
	return $nc($($nc(m)->descriptor()))->name();
}

ModuleBootstrap$SafeModuleFinder::ModuleBootstrap$SafeModuleFinder() {
}

$Class* ModuleBootstrap$SafeModuleFinder::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(ModuleBootstrap$SafeModuleFinder$$Lambda$lambda$find$0::classInfo$.name)) {
			return ModuleBootstrap$SafeModuleFinder$$Lambda$lambda$find$0::load$(name, initialize);
		}
	}
	$loadClass(ModuleBootstrap$SafeModuleFinder, name, initialize, &_ModuleBootstrap$SafeModuleFinder_ClassInfo_, allocate$ModuleBootstrap$SafeModuleFinder);
	return class$;
}

$Class* ModuleBootstrap$SafeModuleFinder::class$ = nullptr;

		} // module
	} // internal
} // jdk