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
using $Optional = ::java::util::Optional;
using $Set = ::java::util::Set;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $Collectors = ::java::util::stream::Collectors;
using $Stream = ::java::util::stream::Stream;
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DefaultRoots$$Lambda$lambda$compute$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo DefaultRoots$$Lambda$lambda$compute$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(DefaultRoots$$Lambda$lambda$compute$0, init$, void)},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(DefaultRoots$$Lambda$lambda$compute$0, test, bool, Object$*)},
	{}
};
$ClassInfo DefaultRoots$$Lambda$lambda$compute$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.module.DefaultRoots$$Lambda$lambda$compute$0",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* DefaultRoots$$Lambda$lambda$compute$0::load$($String* name, bool initialize) {
	$loadClass(DefaultRoots$$Lambda$lambda$compute$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DefaultRoots$$Lambda$lambda$compute$0::class$ = nullptr;

class DefaultRoots$$Lambda$descriptor$1 : public $Function {
	$class(DefaultRoots$$Lambda$descriptor$1, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($ModuleReference, inst$)->descriptor());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DefaultRoots$$Lambda$descriptor$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo DefaultRoots$$Lambda$descriptor$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(DefaultRoots$$Lambda$descriptor$1, init$, void)},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DefaultRoots$$Lambda$descriptor$1, apply, $Object*, Object$*)},
	{}
};
$ClassInfo DefaultRoots$$Lambda$descriptor$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.module.DefaultRoots$$Lambda$descriptor$1",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* DefaultRoots$$Lambda$descriptor$1::load$($String* name, bool initialize) {
	$loadClass(DefaultRoots$$Lambda$descriptor$1, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DefaultRoots$$Lambda$lambda$compute$1$2>());
	}
	$ModuleFinder* finder2 = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo DefaultRoots$$Lambda$lambda$compute$1$2::fieldInfos[2] = {
	{"finder2", "Ljava/lang/module/ModuleFinder;", nullptr, $PUBLIC, $field(DefaultRoots$$Lambda$lambda$compute$1$2, finder2)},
	{}
};
$MethodInfo DefaultRoots$$Lambda$lambda$compute$1$2::methodInfos[3] = {
	{"<init>", "(Ljava/lang/module/ModuleFinder;)V", nullptr, $PUBLIC, $method(DefaultRoots$$Lambda$lambda$compute$1$2, init$, void, $ModuleFinder*)},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(DefaultRoots$$Lambda$lambda$compute$1$2, test, bool, Object$*)},
	{}
};
$ClassInfo DefaultRoots$$Lambda$lambda$compute$1$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.module.DefaultRoots$$Lambda$lambda$compute$1$2",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* DefaultRoots$$Lambda$lambda$compute$1$2::load$($String* name, bool initialize) {
	$loadClass(DefaultRoots$$Lambda$lambda$compute$1$2, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DefaultRoots$$Lambda$name$3>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo DefaultRoots$$Lambda$name$3::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(DefaultRoots$$Lambda$name$3, init$, void)},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DefaultRoots$$Lambda$name$3, apply, $Object*, Object$*)},
	{}
};
$ClassInfo DefaultRoots$$Lambda$name$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.module.DefaultRoots$$Lambda$name$3",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* DefaultRoots$$Lambda$name$3::load$($String* name, bool initialize) {
	$loadClass(DefaultRoots$$Lambda$name$3, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DefaultRoots$$Lambda$lambda$exportsAPI$2$4>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo DefaultRoots$$Lambda$lambda$exportsAPI$2$4::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(DefaultRoots$$Lambda$lambda$exportsAPI$2$4, init$, void)},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(DefaultRoots$$Lambda$lambda$exportsAPI$2$4, test, bool, Object$*)},
	{}
};
$ClassInfo DefaultRoots$$Lambda$lambda$exportsAPI$2$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.module.DefaultRoots$$Lambda$lambda$exportsAPI$2$4",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* DefaultRoots$$Lambda$lambda$exportsAPI$2$4::load$($String* name, bool initialize) {
	$loadClass(DefaultRoots$$Lambda$lambda$exportsAPI$2$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DefaultRoots$$Lambda$lambda$exportsAPI$2$4::class$ = nullptr;

$MethodInfo _DefaultRoots_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(DefaultRoots, init$, void)},
	{"compute", "(Ljava/lang/module/ModuleFinder;Ljava/lang/module/ModuleFinder;)Ljava/util/Set;", "(Ljava/lang/module/ModuleFinder;Ljava/lang/module/ModuleFinder;)Ljava/util/Set<Ljava/lang/String;>;", $STATIC, $staticMethod(DefaultRoots, compute, $Set*, $ModuleFinder*, $ModuleFinder*)},
	{"compute", "(Ljava/lang/module/ModuleFinder;)Ljava/util/Set;", "(Ljava/lang/module/ModuleFinder;)Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC | $STATIC, $staticMethod(DefaultRoots, compute, $Set*, $ModuleFinder*)},
	{"exportsAPI", "(Ljava/lang/module/ModuleDescriptor;)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(DefaultRoots, exportsAPI, bool, $ModuleDescriptor*)},
	{"lambda$compute$0", "(Ljava/lang/module/ModuleReference;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(DefaultRoots, lambda$compute$0, bool, $ModuleReference*)},
	{"lambda$compute$1", "(Ljava/lang/module/ModuleFinder;Ljava/lang/module/ModuleDescriptor;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(DefaultRoots, lambda$compute$1, bool, $ModuleFinder*, $ModuleDescriptor*)},
	{"lambda$exportsAPI$2", "(Ljava/lang/module/ModuleDescriptor$Exports;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(DefaultRoots, lambda$exportsAPI$2, bool, $ModuleDescriptor$Exports*)},
	{}
};

$ClassInfo _DefaultRoots_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"jdk.internal.module.DefaultRoots",
	"java.lang.Object",
	nullptr,
	nullptr,
	_DefaultRoots_MethodInfo_
};

$Object* allocate$DefaultRoots($Class* clazz) {
	return $of($alloc(DefaultRoots));
}

void DefaultRoots::init$() {
}

$Set* DefaultRoots::compute($ModuleFinder* finder1, $ModuleFinder* finder2) {
	$useLocalCurrentObjectStackCache();
	return $cast($Set, $nc($($nc($($nc($($nc($($nc($($nc($($nc(finder1)->findAll()))->stream()))->filter(static_cast<$Predicate*>($$new(DefaultRoots$$Lambda$lambda$compute$0)))))->map(static_cast<$Function*>($$new(DefaultRoots$$Lambda$descriptor$1)))))->filter(static_cast<$Predicate*>($$new(DefaultRoots$$Lambda$lambda$compute$1$2, finder2)))))->map(static_cast<$Function*>($$new(DefaultRoots$$Lambda$name$3)))))->collect($($Collectors::toSet())));
}

$Set* DefaultRoots::compute($ModuleFinder* finder) {
	return compute(finder, finder);
}

bool DefaultRoots::exportsAPI($ModuleDescriptor* descriptor) {
	$useLocalCurrentObjectStackCache();
	return $nc($($nc($($nc($($nc($($nc(descriptor)->exports()))->stream()))->filter(static_cast<$Predicate*>($$new(DefaultRoots$$Lambda$lambda$exportsAPI$2$4)))))->findAny()))->isPresent();
}

bool DefaultRoots::lambda$exportsAPI$2($ModuleDescriptor$Exports* e) {
	return !$nc(e)->isQualified();
}

bool DefaultRoots::lambda$compute$1($ModuleFinder* finder2, $ModuleDescriptor* descriptor) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = $nc($($nc(finder2)->find($($nc(descriptor)->name()))))->isPresent();
	return var$0 && exportsAPI(descriptor);
}

bool DefaultRoots::lambda$compute$0($ModuleReference* mref) {
	return !$ModuleResolution::doNotResolveByDefault(mref);
}

DefaultRoots::DefaultRoots() {
}

$Class* DefaultRoots::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(DefaultRoots$$Lambda$lambda$compute$0::classInfo$.name)) {
			return DefaultRoots$$Lambda$lambda$compute$0::load$(name, initialize);
		}
		if (name->equals(DefaultRoots$$Lambda$descriptor$1::classInfo$.name)) {
			return DefaultRoots$$Lambda$descriptor$1::load$(name, initialize);
		}
		if (name->equals(DefaultRoots$$Lambda$lambda$compute$1$2::classInfo$.name)) {
			return DefaultRoots$$Lambda$lambda$compute$1$2::load$(name, initialize);
		}
		if (name->equals(DefaultRoots$$Lambda$name$3::classInfo$.name)) {
			return DefaultRoots$$Lambda$name$3::load$(name, initialize);
		}
		if (name->equals(DefaultRoots$$Lambda$lambda$exportsAPI$2$4::classInfo$.name)) {
			return DefaultRoots$$Lambda$lambda$exportsAPI$2$4::load$(name, initialize);
		}
	}
	$loadClass(DefaultRoots, name, initialize, &_DefaultRoots_ClassInfo_, allocate$DefaultRoots);
	return class$;
}

$Class* DefaultRoots::class$ = nullptr;

		} // module
	} // internal
} // jdk