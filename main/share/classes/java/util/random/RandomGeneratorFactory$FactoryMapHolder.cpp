#include <java/util/random/RandomGeneratorFactory$FactoryMapHolder.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Map.h>
#include <java/util/ServiceLoader$Provider.h>
#include <java/util/ServiceLoader.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/random/RandomGenerator.h>
#include <java/util/random/RandomGeneratorFactory.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef FACTORY_MAP

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Map = ::java::util::Map;
using $ServiceLoader = ::java::util::ServiceLoader;
using $ServiceLoader$Provider = ::java::util::ServiceLoader$Provider;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $RandomGenerator = ::java::util::random::RandomGenerator;
using $Collectors = ::java::util::stream::Collectors;

namespace java {
	namespace util {
		namespace random {

class RandomGeneratorFactory$FactoryMapHolder$$Lambda$lambda$createFactoryMap$0 : public $Predicate {
	$class(RandomGeneratorFactory$FactoryMapHolder$$Lambda$lambda$createFactoryMap$0, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* p) override {
		 return RandomGeneratorFactory$FactoryMapHolder::lambda$createFactoryMap$0($cast($ServiceLoader$Provider, p));
	}
};
$Class* RandomGeneratorFactory$FactoryMapHolder$$Lambda$lambda$createFactoryMap$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(RandomGeneratorFactory$FactoryMapHolder$$Lambda$lambda$createFactoryMap$0, init$, void)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(RandomGeneratorFactory$FactoryMapHolder$$Lambda$lambda$createFactoryMap$0, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.random.RandomGeneratorFactory$FactoryMapHolder$$Lambda$lambda$createFactoryMap$0",
		"java.lang.Object",
		"java.util.function.Predicate",
		nullptr,
		methodInfos$$
	};
	$loadClass(RandomGeneratorFactory$FactoryMapHolder$$Lambda$lambda$createFactoryMap$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RandomGeneratorFactory$FactoryMapHolder$$Lambda$lambda$createFactoryMap$0);
	});
	return class$;
}
$Class* RandomGeneratorFactory$FactoryMapHolder$$Lambda$lambda$createFactoryMap$0::class$ = nullptr;

class RandomGeneratorFactory$FactoryMapHolder$$Lambda$lambda$createFactoryMap$1$1 : public $Function {
	$class(RandomGeneratorFactory$FactoryMapHolder$$Lambda$lambda$createFactoryMap$1$1, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* p) override {
		 return $of(RandomGeneratorFactory$FactoryMapHolder::lambda$createFactoryMap$1($cast($ServiceLoader$Provider, p)));
	}
};
$Class* RandomGeneratorFactory$FactoryMapHolder$$Lambda$lambda$createFactoryMap$1$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(RandomGeneratorFactory$FactoryMapHolder$$Lambda$lambda$createFactoryMap$1$1, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(RandomGeneratorFactory$FactoryMapHolder$$Lambda$lambda$createFactoryMap$1$1, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.random.RandomGeneratorFactory$FactoryMapHolder$$Lambda$lambda$createFactoryMap$1$1",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(RandomGeneratorFactory$FactoryMapHolder$$Lambda$lambda$createFactoryMap$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RandomGeneratorFactory$FactoryMapHolder$$Lambda$lambda$createFactoryMap$1$1);
	});
	return class$;
}
$Class* RandomGeneratorFactory$FactoryMapHolder$$Lambda$lambda$createFactoryMap$1$1::class$ = nullptr;

$Map* RandomGeneratorFactory$FactoryMapHolder::FACTORY_MAP = nullptr;

void RandomGeneratorFactory$FactoryMapHolder::init$() {
}

$Map* RandomGeneratorFactory$FactoryMapHolder::createFactoryMap() {
	$init(RandomGeneratorFactory$FactoryMapHolder);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$load($RandomGenerator);
	$var($Function, var$0, $new(RandomGeneratorFactory$FactoryMapHolder$$Lambda$lambda$createFactoryMap$1$1));
	return $cast($Map, $$nc($$nc($$nc($ServiceLoader::load($RandomGenerator::class$))->stream())->filter($$new(RandomGeneratorFactory$FactoryMapHolder$$Lambda$lambda$createFactoryMap$0)))->collect($($Collectors::toMap(var$0, $($Function::identity())))));
}

$String* RandomGeneratorFactory$FactoryMapHolder::lambda$createFactoryMap$1($ServiceLoader$Provider* p) {
	$init(RandomGeneratorFactory$FactoryMapHolder);
	return $nc($nc(p)->type())->getSimpleName();
}

bool RandomGeneratorFactory$FactoryMapHolder::lambda$createFactoryMap$0($ServiceLoader$Provider* p) {
	$init(RandomGeneratorFactory$FactoryMapHolder);
	return !$nc($nc(p)->type())->isInterface();
}

void RandomGeneratorFactory$FactoryMapHolder::clinit$($Class* clazz) {
	$assignStatic(RandomGeneratorFactory$FactoryMapHolder::FACTORY_MAP, RandomGeneratorFactory$FactoryMapHolder::createFactoryMap());
}

RandomGeneratorFactory$FactoryMapHolder::RandomGeneratorFactory$FactoryMapHolder() {
}

$Class* RandomGeneratorFactory$FactoryMapHolder::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("java.util.random.RandomGeneratorFactory$FactoryMapHolder$$Lambda$lambda$createFactoryMap$0")) {
			return RandomGeneratorFactory$FactoryMapHolder$$Lambda$lambda$createFactoryMap$0::load$(name, initialize);
		}
		if (name->equals("java.util.random.RandomGeneratorFactory$FactoryMapHolder$$Lambda$lambda$createFactoryMap$1$1")) {
			return RandomGeneratorFactory$FactoryMapHolder$$Lambda$lambda$createFactoryMap$1$1::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"FACTORY_MAP", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/util/ServiceLoader$Provider<+Ljava/util/random/RandomGenerator;>;>;", $STATIC | $FINAL, $staticField(RandomGeneratorFactory$FactoryMapHolder, FACTORY_MAP)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(RandomGeneratorFactory$FactoryMapHolder, init$, void)},
		{"createFactoryMap", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/util/ServiceLoader$Provider<+Ljava/util/random/RandomGenerator;>;>;", $PRIVATE | $STATIC, $staticMethod(RandomGeneratorFactory$FactoryMapHolder, createFactoryMap, $Map*)},
		{"lambda$createFactoryMap$0", "(Ljava/util/ServiceLoader$Provider;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(RandomGeneratorFactory$FactoryMapHolder, lambda$createFactoryMap$0, bool, $ServiceLoader$Provider*)},
		{"lambda$createFactoryMap$1", "(Ljava/util/ServiceLoader$Provider;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(RandomGeneratorFactory$FactoryMapHolder, lambda$createFactoryMap$1, $String*, $ServiceLoader$Provider*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.random.RandomGeneratorFactory$FactoryMapHolder", "java.util.random.RandomGeneratorFactory", "FactoryMapHolder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.random.RandomGeneratorFactory$FactoryMapHolder",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.random.RandomGeneratorFactory"
	};
	$loadClass(RandomGeneratorFactory$FactoryMapHolder, name, initialize, &classInfo$$, RandomGeneratorFactory$FactoryMapHolder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(RandomGeneratorFactory$FactoryMapHolder);
	});
	return class$;
}

$Class* RandomGeneratorFactory$FactoryMapHolder::class$ = nullptr;

		} // random
	} // util
} // java