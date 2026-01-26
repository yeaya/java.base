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
using $Stream = ::java::util::stream::Stream;

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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<RandomGeneratorFactory$FactoryMapHolder$$Lambda$lambda$createFactoryMap$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo RandomGeneratorFactory$FactoryMapHolder$$Lambda$lambda$createFactoryMap$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(RandomGeneratorFactory$FactoryMapHolder$$Lambda$lambda$createFactoryMap$0, init$, void)},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(RandomGeneratorFactory$FactoryMapHolder$$Lambda$lambda$createFactoryMap$0, test, bool, Object$*)},
	{}
};
$ClassInfo RandomGeneratorFactory$FactoryMapHolder$$Lambda$lambda$createFactoryMap$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.random.RandomGeneratorFactory$FactoryMapHolder$$Lambda$lambda$createFactoryMap$0",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* RandomGeneratorFactory$FactoryMapHolder$$Lambda$lambda$createFactoryMap$0::load$($String* name, bool initialize) {
	$loadClass(RandomGeneratorFactory$FactoryMapHolder$$Lambda$lambda$createFactoryMap$0, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<RandomGeneratorFactory$FactoryMapHolder$$Lambda$lambda$createFactoryMap$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo RandomGeneratorFactory$FactoryMapHolder$$Lambda$lambda$createFactoryMap$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(RandomGeneratorFactory$FactoryMapHolder$$Lambda$lambda$createFactoryMap$1$1, init$, void)},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(RandomGeneratorFactory$FactoryMapHolder$$Lambda$lambda$createFactoryMap$1$1, apply, $Object*, Object$*)},
	{}
};
$ClassInfo RandomGeneratorFactory$FactoryMapHolder$$Lambda$lambda$createFactoryMap$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.random.RandomGeneratorFactory$FactoryMapHolder$$Lambda$lambda$createFactoryMap$1$1",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* RandomGeneratorFactory$FactoryMapHolder$$Lambda$lambda$createFactoryMap$1$1::load$($String* name, bool initialize) {
	$loadClass(RandomGeneratorFactory$FactoryMapHolder$$Lambda$lambda$createFactoryMap$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* RandomGeneratorFactory$FactoryMapHolder$$Lambda$lambda$createFactoryMap$1$1::class$ = nullptr;

$FieldInfo _RandomGeneratorFactory$FactoryMapHolder_FieldInfo_[] = {
	{"FACTORY_MAP", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/util/ServiceLoader$Provider<+Ljava/util/random/RandomGenerator;>;>;", $STATIC | $FINAL, $staticField(RandomGeneratorFactory$FactoryMapHolder, FACTORY_MAP)},
	{}
};

$MethodInfo _RandomGeneratorFactory$FactoryMapHolder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(RandomGeneratorFactory$FactoryMapHolder, init$, void)},
	{"createFactoryMap", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/util/ServiceLoader$Provider<+Ljava/util/random/RandomGenerator;>;>;", $PRIVATE | $STATIC, $staticMethod(RandomGeneratorFactory$FactoryMapHolder, createFactoryMap, $Map*)},
	{"lambda$createFactoryMap$0", "(Ljava/util/ServiceLoader$Provider;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(RandomGeneratorFactory$FactoryMapHolder, lambda$createFactoryMap$0, bool, $ServiceLoader$Provider*)},
	{"lambda$createFactoryMap$1", "(Ljava/util/ServiceLoader$Provider;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(RandomGeneratorFactory$FactoryMapHolder, lambda$createFactoryMap$1, $String*, $ServiceLoader$Provider*)},
	{}
};

$InnerClassInfo _RandomGeneratorFactory$FactoryMapHolder_InnerClassesInfo_[] = {
	{"java.util.random.RandomGeneratorFactory$FactoryMapHolder", "java.util.random.RandomGeneratorFactory", "FactoryMapHolder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _RandomGeneratorFactory$FactoryMapHolder_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.random.RandomGeneratorFactory$FactoryMapHolder",
	"java.lang.Object",
	nullptr,
	_RandomGeneratorFactory$FactoryMapHolder_FieldInfo_,
	_RandomGeneratorFactory$FactoryMapHolder_MethodInfo_,
	nullptr,
	nullptr,
	_RandomGeneratorFactory$FactoryMapHolder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.random.RandomGeneratorFactory"
};

$Object* allocate$RandomGeneratorFactory$FactoryMapHolder($Class* clazz) {
	return $of($alloc(RandomGeneratorFactory$FactoryMapHolder));
}

$Map* RandomGeneratorFactory$FactoryMapHolder::FACTORY_MAP = nullptr;

void RandomGeneratorFactory$FactoryMapHolder::init$() {
}

$Map* RandomGeneratorFactory$FactoryMapHolder::createFactoryMap() {
	$init(RandomGeneratorFactory$FactoryMapHolder);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$load($RandomGenerator);
	$var($Function, var$0, static_cast<$Function*>($new(RandomGeneratorFactory$FactoryMapHolder$$Lambda$lambda$createFactoryMap$1$1)));
	return $cast($Map, $nc($($nc($($nc($($ServiceLoader::load($RandomGenerator::class$)))->stream()))->filter(static_cast<$Predicate*>($$new(RandomGeneratorFactory$FactoryMapHolder$$Lambda$lambda$createFactoryMap$0)))))->collect($($Collectors::toMap(var$0, $($Function::identity())))));
}

$String* RandomGeneratorFactory$FactoryMapHolder::lambda$createFactoryMap$1($ServiceLoader$Provider* p) {
	$init(RandomGeneratorFactory$FactoryMapHolder);
	return $nc($nc(p)->type())->getSimpleName();
}

bool RandomGeneratorFactory$FactoryMapHolder::lambda$createFactoryMap$0($ServiceLoader$Provider* p) {
	$init(RandomGeneratorFactory$FactoryMapHolder);
	return !$nc($nc(p)->type())->isInterface();
}

void clinit$RandomGeneratorFactory$FactoryMapHolder($Class* class$) {
	$assignStatic(RandomGeneratorFactory$FactoryMapHolder::FACTORY_MAP, RandomGeneratorFactory$FactoryMapHolder::createFactoryMap());
}

RandomGeneratorFactory$FactoryMapHolder::RandomGeneratorFactory$FactoryMapHolder() {
}

$Class* RandomGeneratorFactory$FactoryMapHolder::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(RandomGeneratorFactory$FactoryMapHolder$$Lambda$lambda$createFactoryMap$0::classInfo$.name)) {
			return RandomGeneratorFactory$FactoryMapHolder$$Lambda$lambda$createFactoryMap$0::load$(name, initialize);
		}
		if (name->equals(RandomGeneratorFactory$FactoryMapHolder$$Lambda$lambda$createFactoryMap$1$1::classInfo$.name)) {
			return RandomGeneratorFactory$FactoryMapHolder$$Lambda$lambda$createFactoryMap$1$1::load$(name, initialize);
		}
	}
	$loadClass(RandomGeneratorFactory$FactoryMapHolder, name, initialize, &_RandomGeneratorFactory$FactoryMapHolder_ClassInfo_, clinit$RandomGeneratorFactory$FactoryMapHolder, allocate$RandomGeneratorFactory$FactoryMapHolder);
	return class$;
}

$Class* RandomGeneratorFactory$FactoryMapHolder::class$ = nullptr;

		} // random
	} // util
} // java