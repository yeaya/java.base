#include <jdk/internal/module/DefaultRoots.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/module/ModuleDescriptor$Exports.h>
#include <java/lang/module/ModuleDescriptor.h>
#include <java/lang/module/ModuleFinder.h>
#include <java/lang/module/ModuleReference.h>
#include <java/util/Optional.h>
#include <java/util/Set.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/Stream.h>
#include <jdk/internal/module/ModuleResolution.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $ModuleDescriptor = ::java::lang::module::ModuleDescriptor;
using $ModuleDescriptor$Exports = ::java::lang::module::ModuleDescriptor$Exports;
using $ModuleFinder = ::java::lang::module::ModuleFinder;
using $ModuleReference = ::java::lang::module::ModuleReference;
using $Set = ::java::util::Set;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $Collectors = ::java::util::stream::Collectors;
using $ModuleResolution = ::jdk::internal::module::ModuleResolution;

namespace jdk {
	namespace internal {
		namespace module {

class DefaultRoots$$Lambda$lambda$compute$0 : public $Predicate {
	$class(DefaultRoots$$Lambda$lambda$compute$0, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* mref) override {
		 return DefaultRoots::lambda$compute$0($cast($ModuleReference, mref));
	}
};
$Class* DefaultRoots$$Lambda$lambda$compute$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DefaultRoots$$Lambda$lambda$compute$0, init$, void)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(DefaultRoots$$Lambda$lambda$compute$0, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.module.DefaultRoots$$Lambda$lambda$compute$0",
		"java.lang.Object",
		"java.util.function.Predicate",
		nullptr,
		methodInfos$$
	};
	$loadClass(DefaultRoots$$Lambda$lambda$compute$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultRoots$$Lambda$lambda$compute$0);
	});
	return class$;
}
$Class* DefaultRoots$$Lambda$lambda$compute$0::class$ = nullptr;

class DefaultRoots$$Lambda$descriptor$1 : public $Function {
	$class(DefaultRoots$$Lambda$descriptor$1, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $sure($ModuleReference, inst$)->descriptor();
	}
};
$Class* DefaultRoots$$Lambda$descriptor$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DefaultRoots$$Lambda$descriptor$1, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DefaultRoots$$Lambda$descriptor$1, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.module.DefaultRoots$$Lambda$descriptor$1",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(DefaultRoots$$Lambda$descriptor$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultRoots$$Lambda$descriptor$1);
	});
	return class$;
}
$Class* DefaultRoots$$Lambda$descriptor$1::class$ = nullptr;

class DefaultRoots$$Lambda$lambda$compute$1$2 : public $Predicate {
	$class(DefaultRoots$$Lambda$lambda$compute$1$2, $NO_CLASS_INIT, $Predicate)
public:
	void init$($ModuleFinder* finder2) {
		$set(this, finder2, finder2);
	}
	virtual bool test(Object$* descriptor) override {
		 return DefaultRoots::lambda$compute$1(finder2, $cast($ModuleDescriptor, descriptor));
	}
	$ModuleFinder* finder2 = nullptr;
};
$Class* DefaultRoots$$Lambda$lambda$compute$1$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"finder2", "Ljava/lang/module/ModuleFinder;", nullptr, $PUBLIC, $field(DefaultRoots$$Lambda$lambda$compute$1$2, finder2)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/module/ModuleFinder;)V", nullptr, $PUBLIC, $method(DefaultRoots$$Lambda$lambda$compute$1$2, init$, void, $ModuleFinder*)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(DefaultRoots$$Lambda$lambda$compute$1$2, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.module.DefaultRoots$$Lambda$lambda$compute$1$2",
		"java.lang.Object",
		"java.util.function.Predicate",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DefaultRoots$$Lambda$lambda$compute$1$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultRoots$$Lambda$lambda$compute$1$2);
	});
	return class$;
}
$Class* DefaultRoots$$Lambda$lambda$compute$1$2::class$ = nullptr;

class DefaultRoots$$Lambda$name$3 : public $Function {
	$class(DefaultRoots$$Lambda$name$3, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($ModuleDescriptor, inst$)->name());
	}
};
$Class* DefaultRoots$$Lambda$name$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DefaultRoots$$Lambda$name$3, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DefaultRoots$$Lambda$name$3, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.module.DefaultRoots$$Lambda$name$3",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(DefaultRoots$$Lambda$name$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultRoots$$Lambda$name$3);
	});
	return class$;
}
$Class* DefaultRoots$$Lambda$name$3::class$ = nullptr;

class DefaultRoots$$Lambda$lambda$exportsAPI$2$4 : public $Predicate {
	$class(DefaultRoots$$Lambda$lambda$exportsAPI$2$4, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* e) override {
		 return DefaultRoots::lambda$exportsAPI$2($cast($ModuleDescriptor$Exports, e));
	}
};
$Class* DefaultRoots$$Lambda$lambda$exportsAPI$2$4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DefaultRoots$$Lambda$lambda$exportsAPI$2$4, init$, void)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(DefaultRoots$$Lambda$lambda$exportsAPI$2$4, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.module.DefaultRoots$$Lambda$lambda$exportsAPI$2$4",
		"java.lang.Object",
		"java.util.function.Predicate",
		nullptr,
		methodInfos$$
	};
	$loadClass(DefaultRoots$$Lambda$lambda$exportsAPI$2$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultRoots$$Lambda$lambda$exportsAPI$2$4);
	});
	return class$;
}
$Class* DefaultRoots$$Lambda$lambda$exportsAPI$2$4::class$ = nullptr;

void DefaultRoots::init$() {
}

$Set* DefaultRoots::compute($ModuleFinder* finder1, $ModuleFinder* finder2) {
	$useLocalObjectStack();
	return $cast($Set, $$nc($$nc($$nc($$nc($$nc($$nc($nc(finder1)->findAll())->stream())->filter($$new(DefaultRoots$$Lambda$lambda$compute$0)))->map($$new(DefaultRoots$$Lambda$descriptor$1)))->filter($$new(DefaultRoots$$Lambda$lambda$compute$1$2, finder2)))->map($$new(DefaultRoots$$Lambda$name$3)))->collect($($Collectors::toSet())));
}

$Set* DefaultRoots::compute($ModuleFinder* finder) {
	return compute(finder, finder);
}

bool DefaultRoots::exportsAPI($ModuleDescriptor* descriptor) {
	$useLocalObjectStack();
	return $$nc($$nc($$nc($$nc($nc(descriptor)->exports())->stream())->filter($$new(DefaultRoots$$Lambda$lambda$exportsAPI$2$4)))->findAny())->isPresent();
}

bool DefaultRoots::lambda$exportsAPI$2($ModuleDescriptor$Exports* e) {
	return !$nc(e)->isQualified();
}

bool DefaultRoots::lambda$compute$1($ModuleFinder* finder2, $ModuleDescriptor* descriptor) {
	$useLocalObjectStack();
	bool var$0 = $$nc($nc(finder2)->find($($nc(descriptor)->name())))->isPresent();
	return var$0 && exportsAPI(descriptor);
}

bool DefaultRoots::lambda$compute$0($ModuleReference* mref) {
	return !$ModuleResolution::doNotResolveByDefault(mref);
}

DefaultRoots::DefaultRoots() {
}

$Class* DefaultRoots::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("jdk.internal.module.DefaultRoots$$Lambda$lambda$compute$0")) {
			return DefaultRoots$$Lambda$lambda$compute$0::load$(name, initialize);
		}
		if (name->equals("jdk.internal.module.DefaultRoots$$Lambda$descriptor$1")) {
			return DefaultRoots$$Lambda$descriptor$1::load$(name, initialize);
		}
		if (name->equals("jdk.internal.module.DefaultRoots$$Lambda$lambda$compute$1$2")) {
			return DefaultRoots$$Lambda$lambda$compute$1$2::load$(name, initialize);
		}
		if (name->equals("jdk.internal.module.DefaultRoots$$Lambda$name$3")) {
			return DefaultRoots$$Lambda$name$3::load$(name, initialize);
		}
		if (name->equals("jdk.internal.module.DefaultRoots$$Lambda$lambda$exportsAPI$2$4")) {
			return DefaultRoots$$Lambda$lambda$exportsAPI$2$4::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(DefaultRoots, init$, void)},
		{"compute", "(Ljava/lang/module/ModuleFinder;Ljava/lang/module/ModuleFinder;)Ljava/util/Set;", "(Ljava/lang/module/ModuleFinder;Ljava/lang/module/ModuleFinder;)Ljava/util/Set<Ljava/lang/String;>;", $STATIC, $staticMethod(DefaultRoots, compute, $Set*, $ModuleFinder*, $ModuleFinder*)},
		{"compute", "(Ljava/lang/module/ModuleFinder;)Ljava/util/Set;", "(Ljava/lang/module/ModuleFinder;)Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC | $STATIC, $staticMethod(DefaultRoots, compute, $Set*, $ModuleFinder*)},
		{"exportsAPI", "(Ljava/lang/module/ModuleDescriptor;)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(DefaultRoots, exportsAPI, bool, $ModuleDescriptor*)},
		{"lambda$compute$0", "(Ljava/lang/module/ModuleReference;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(DefaultRoots, lambda$compute$0, bool, $ModuleReference*)},
		{"lambda$compute$1", "(Ljava/lang/module/ModuleFinder;Ljava/lang/module/ModuleDescriptor;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(DefaultRoots, lambda$compute$1, bool, $ModuleFinder*, $ModuleDescriptor*)},
		{"lambda$exportsAPI$2", "(Ljava/lang/module/ModuleDescriptor$Exports;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(DefaultRoots, lambda$exportsAPI$2, bool, $ModuleDescriptor$Exports*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"jdk.internal.module.DefaultRoots",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(DefaultRoots, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultRoots);
	});
	return class$;
}

$Class* DefaultRoots::class$ = nullptr;

		} // module
	} // internal
} // jdk