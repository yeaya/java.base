#include <java/lang/module/ModuleFinder$2.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/module/ModuleDescriptor.h>
#include <java/lang/module/ModuleFinder.h>
#include <java/lang/module/ModuleReference.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Optional.h>
#include <java/util/Set.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Function.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $ModuleFinder = ::java::lang::module::ModuleFinder;
using $ModuleReference = ::java::lang::module::ModuleReference;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $List = ::java::util::List;
using $Optional = ::java::util::Optional;
using $Set = ::java::util::Set;
using $Consumer = ::java::util::function::Consumer;
using $Function = ::java::util::function::Function;
using $Stream = ::java::util::stream::Stream;

namespace java {
	namespace lang {
		namespace module {

class ModuleFinder$2$$Lambda$lambda$find$0 : public $Function {
	$class(ModuleFinder$2$$Lambda$lambda$find$0, $NO_CLASS_INIT, $Function)
public:
	void init$($String* name) {
		$set(this, name, name);
	}
	virtual $Object* apply(Object$* f) override {
		 return ModuleFinder$2::lambda$find$0(name, $cast($ModuleFinder, f));
	}
	$String* name = nullptr;
};
$Class* ModuleFinder$2$$Lambda$lambda$find$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"name", "Ljava/lang/String;", nullptr, $PUBLIC, $field(ModuleFinder$2$$Lambda$lambda$find$0, name)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ModuleFinder$2$$Lambda$lambda$find$0, init$, void, $String*)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ModuleFinder$2$$Lambda$lambda$find$0, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.lang.module.ModuleFinder$2$$Lambda$lambda$find$0",
		"java.lang.Object",
		"java.util.function.Function",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ModuleFinder$2$$Lambda$lambda$find$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModuleFinder$2$$Lambda$lambda$find$0);
	});
	return class$;
}
$Class* ModuleFinder$2$$Lambda$lambda$find$0::class$ = nullptr;

class ModuleFinder$2$$Lambda$stream$1 : public $Function {
	$class(ModuleFinder$2$$Lambda$stream$1, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $sure($Optional, inst$)->stream();
	}
};
$Class* ModuleFinder$2$$Lambda$stream$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ModuleFinder$2$$Lambda$stream$1, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ModuleFinder$2$$Lambda$stream$1, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.lang.module.ModuleFinder$2$$Lambda$stream$1",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(ModuleFinder$2$$Lambda$stream$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModuleFinder$2$$Lambda$stream$1);
	});
	return class$;
}
$Class* ModuleFinder$2$$Lambda$stream$1::class$ = nullptr;

class ModuleFinder$2$$Lambda$lambda$find$1$2 : public $Consumer {
	$class(ModuleFinder$2$$Lambda$lambda$find$1$2, $NO_CLASS_INIT, $Consumer)
public:
	void init$(ModuleFinder$2* inst, $String* name) {
		$set(this, inst$, inst);
		$set(this, name, name);
	}
	virtual void accept(Object$* m) override {
		$nc(inst$)->lambda$find$1(name, $cast($ModuleReference, m));
	}
	ModuleFinder$2* inst$ = nullptr;
	$String* name = nullptr;
};
$Class* ModuleFinder$2$$Lambda$lambda$find$1$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ModuleFinder$2$$Lambda$lambda$find$1$2, inst$)},
		{"name", "Ljava/lang/String;", nullptr, $PUBLIC, $field(ModuleFinder$2$$Lambda$lambda$find$1$2, name)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/module/ModuleFinder$2;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ModuleFinder$2$$Lambda$lambda$find$1$2, init$, void, ModuleFinder$2*, $String*)},
		{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(ModuleFinder$2$$Lambda$lambda$find$1$2, accept, void, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.lang.module.ModuleFinder$2$$Lambda$lambda$find$1$2",
		"java.lang.Object",
		"java.util.function.Consumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ModuleFinder$2$$Lambda$lambda$find$1$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModuleFinder$2$$Lambda$lambda$find$1$2);
	});
	return class$;
}
$Class* ModuleFinder$2$$Lambda$lambda$find$1$2::class$ = nullptr;

class ModuleFinder$2$$Lambda$lambda$findAll$2$3 : public $Function {
	$class(ModuleFinder$2$$Lambda$lambda$findAll$2$3, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* f) override {
		 return ModuleFinder$2::lambda$findAll$2($cast($ModuleFinder, f));
	}
};
$Class* ModuleFinder$2$$Lambda$lambda$findAll$2$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ModuleFinder$2$$Lambda$lambda$findAll$2$3, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ModuleFinder$2$$Lambda$lambda$findAll$2$3, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.lang.module.ModuleFinder$2$$Lambda$lambda$findAll$2$3",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(ModuleFinder$2$$Lambda$lambda$findAll$2$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModuleFinder$2$$Lambda$lambda$findAll$2$3);
	});
	return class$;
}
$Class* ModuleFinder$2$$Lambda$lambda$findAll$2$3::class$ = nullptr;

class ModuleFinder$2$$Lambda$lambda$findAll$3$4 : public $Consumer {
	$class(ModuleFinder$2$$Lambda$lambda$findAll$3$4, $NO_CLASS_INIT, $Consumer)
public:
	void init$(ModuleFinder$2* inst, $Set* result) {
		$set(this, inst$, inst);
		$set(this, result, result);
	}
	virtual void accept(Object$* mref) override {
		$nc(inst$)->lambda$findAll$3(result, $cast($ModuleReference, mref));
	}
	ModuleFinder$2* inst$ = nullptr;
	$Set* result = nullptr;
};
$Class* ModuleFinder$2$$Lambda$lambda$findAll$3$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ModuleFinder$2$$Lambda$lambda$findAll$3$4, inst$)},
		{"result", "Ljava/util/Set;", nullptr, $PUBLIC, $field(ModuleFinder$2$$Lambda$lambda$findAll$3$4, result)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/module/ModuleFinder$2;Ljava/util/Set;)V", nullptr, $PUBLIC, $method(ModuleFinder$2$$Lambda$lambda$findAll$3$4, init$, void, ModuleFinder$2*, $Set*)},
		{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(ModuleFinder$2$$Lambda$lambda$findAll$3$4, accept, void, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.lang.module.ModuleFinder$2$$Lambda$lambda$findAll$3$4",
		"java.lang.Object",
		"java.util.function.Consumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ModuleFinder$2$$Lambda$lambda$findAll$3$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModuleFinder$2$$Lambda$lambda$findAll$3$4);
	});
	return class$;
}
$Class* ModuleFinder$2$$Lambda$lambda$findAll$3$4::class$ = nullptr;

void ModuleFinder$2::init$($List* val$finderList) {
	$set(this, val$finderList, val$finderList);
	$set(this, nameToModule, $new($HashMap));
}

$Optional* ModuleFinder$2::find($String* name) {
	$useLocalObjectStack();
	$var($ModuleReference, mref, $cast($ModuleReference, this->nameToModule->get(name)));
	if (mref != nullptr) {
		return $Optional::of(mref);
	}
	$var($Optional, omref, $$nc($$nc($$nc($nc(this->val$finderList)->stream())->map($$new(ModuleFinder$2$$Lambda$lambda$find$0, name)))->flatMap($$new(ModuleFinder$2$$Lambda$stream$1)))->findFirst());
	$nc(omref)->ifPresent($$new(ModuleFinder$2$$Lambda$lambda$find$1$2, this, name));
	return omref;
}

$Set* ModuleFinder$2::findAll() {
	$useLocalObjectStack();
	if (this->allModules != nullptr) {
		return this->allModules;
	}
	$var($Set, result, $new($HashSet, $(this->nameToModule->values())));
	$$nc($$nc($nc(this->val$finderList)->stream())->flatMap($$new(ModuleFinder$2$$Lambda$lambda$findAll$2$3)))->forEach($$new(ModuleFinder$2$$Lambda$lambda$findAll$3$4, this, result));
	$set(this, allModules, $Collections::unmodifiableSet(result));
	return this->allModules;
}

void ModuleFinder$2::lambda$findAll$3($Set* result, $ModuleReference* mref) {
	$useLocalObjectStack();
	$var($String, name, $$nc($nc(mref)->descriptor())->name());
	if (this->nameToModule->putIfAbsent(name, mref) == nullptr) {
		$nc(result)->add(mref);
	}
}

$Stream* ModuleFinder$2::lambda$findAll$2($ModuleFinder* f) {
	$init(ModuleFinder$2);
	return $$nc($nc(f)->findAll())->stream();
}

void ModuleFinder$2::lambda$find$1($String* name, $ModuleReference* m) {
	this->nameToModule->put(name, m);
}

$Optional* ModuleFinder$2::lambda$find$0($String* name, $ModuleFinder* f) {
	$init(ModuleFinder$2);
	return $nc(f)->find(name);
}

ModuleFinder$2::ModuleFinder$2() {
}

$Class* ModuleFinder$2::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("java.lang.module.ModuleFinder$2$$Lambda$lambda$find$0")) {
			return ModuleFinder$2$$Lambda$lambda$find$0::load$(name, initialize);
		}
		if (name->equals("java.lang.module.ModuleFinder$2$$Lambda$stream$1")) {
			return ModuleFinder$2$$Lambda$stream$1::load$(name, initialize);
		}
		if (name->equals("java.lang.module.ModuleFinder$2$$Lambda$lambda$find$1$2")) {
			return ModuleFinder$2$$Lambda$lambda$find$1$2::load$(name, initialize);
		}
		if (name->equals("java.lang.module.ModuleFinder$2$$Lambda$lambda$findAll$2$3")) {
			return ModuleFinder$2$$Lambda$lambda$findAll$2$3::load$(name, initialize);
		}
		if (name->equals("java.lang.module.ModuleFinder$2$$Lambda$lambda$findAll$3$4")) {
			return ModuleFinder$2$$Lambda$lambda$findAll$3$4::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"val$finderList", "Ljava/util/List;", nullptr, $FINAL | $SYNTHETIC, $field(ModuleFinder$2, val$finderList)},
		{"nameToModule", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/module/ModuleReference;>;", $PRIVATE | $FINAL, $field(ModuleFinder$2, nameToModule)},
		{"allModules", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/module/ModuleReference;>;", $PRIVATE, $field(ModuleFinder$2, allModules)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/List;)V", "()V", 0, $method(ModuleFinder$2, init$, void, $List*)},
		{"find", "(Ljava/lang/String;)Ljava/util/Optional;", "(Ljava/lang/String;)Ljava/util/Optional<Ljava/lang/module/ModuleReference;>;", $PUBLIC, $virtualMethod(ModuleFinder$2, find, $Optional*, $String*)},
		{"findAll", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/module/ModuleReference;>;", $PUBLIC, $virtualMethod(ModuleFinder$2, findAll, $Set*)},
		{"lambda$find$0", "(Ljava/lang/String;Ljava/lang/module/ModuleFinder;)Ljava/util/Optional;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ModuleFinder$2, lambda$find$0, $Optional*, $String*, $ModuleFinder*)},
		{"lambda$find$1", "(Ljava/lang/String;Ljava/lang/module/ModuleReference;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(ModuleFinder$2, lambda$find$1, void, $String*, $ModuleReference*)},
		{"lambda$findAll$2", "(Ljava/lang/module/ModuleFinder;)Ljava/util/stream/Stream;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ModuleFinder$2, lambda$findAll$2, $Stream*, $ModuleFinder*)},
		{"lambda$findAll$3", "(Ljava/util/Set;Ljava/lang/module/ModuleReference;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(ModuleFinder$2, lambda$findAll$3, void, $Set*, $ModuleReference*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.lang.module.ModuleFinder",
		"compose",
		"([Ljava/lang/module/ModuleFinder;)Ljava/lang/module/ModuleFinder;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.module.ModuleFinder$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.module.ModuleFinder$2",
		"java.lang.Object",
		"java.lang.module.ModuleFinder",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.module.ModuleFinder"
	};
	$loadClass(ModuleFinder$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModuleFinder$2);
	});
	return class$;
}

$Class* ModuleFinder$2::class$ = nullptr;

		} // module
	} // lang
} // java