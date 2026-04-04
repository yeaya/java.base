#include <java/util/random/RandomGeneratorFactory.h>
#include <java/io/Serializable.h>
#include <java/lang/Deprecated.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/annotation/Annotation.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/math/BigInteger.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedActionException.h>
#include <java/security/PrivilegedExceptionAction.h>
#include <java/util/Collection.h>
#include <java/util/Map.h>
#include <java/util/Objects.h>
#include <java/util/ServiceLoader$Provider.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/random/RandomGenerator$ArbitrarilyJumpableGenerator.h>
#include <java/util/random/RandomGenerator$JumpableGenerator.h>
#include <java/util/random/RandomGenerator$LeapableGenerator.h>
#include <java/util/random/RandomGenerator$SplittableGenerator.h>
#include <java/util/random/RandomGenerator$StreamableGenerator.h>
#include <java/util/random/RandomGenerator.h>
#include <java/util/random/RandomGeneratorFactory$FactoryMapHolder.h>
#include <java/util/stream/Stream.h>
#include <jdk/internal/util/random/RandomSupport$RandomGeneratorProperties.h>
#include <jcpp.h>

#undef FACTORY_MAP
#undef MAX_VALUE
#undef ONE
#undef TYPE
#undef ZERO

using $ConstructorArray = $Array<::java::lang::reflect::Constructor>;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Deprecated = ::java::lang::Deprecated;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Constructor = ::java::lang::reflect::Constructor;
using $BigInteger = ::java::math::BigInteger;
using $AccessController = ::java::security::AccessController;
using $PrivilegedActionException = ::java::security::PrivilegedActionException;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $Map = ::java::util::Map;
using $Objects = ::java::util::Objects;
using $ServiceLoader$Provider = ::java::util::ServiceLoader$Provider;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $RandomGenerator = ::java::util::random::RandomGenerator;
using $RandomGenerator$ArbitrarilyJumpableGenerator = ::java::util::random::RandomGenerator$ArbitrarilyJumpableGenerator;
using $RandomGenerator$JumpableGenerator = ::java::util::random::RandomGenerator$JumpableGenerator;
using $RandomGenerator$LeapableGenerator = ::java::util::random::RandomGenerator$LeapableGenerator;
using $RandomGenerator$SplittableGenerator = ::java::util::random::RandomGenerator$SplittableGenerator;
using $RandomGenerator$StreamableGenerator = ::java::util::random::RandomGenerator$StreamableGenerator;
using $RandomGeneratorFactory$FactoryMapHolder = ::java::util::random::RandomGeneratorFactory$FactoryMapHolder;
using $Stream = ::java::util::stream::Stream;
using $RandomSupport$RandomGeneratorProperties = ::jdk::internal::util::random::RandomSupport$RandomGeneratorProperties;

namespace java {
	namespace util {
		namespace random {

class RandomGeneratorFactory$$Lambda$getConstructors : public $PrivilegedExceptionAction {
	$class(RandomGeneratorFactory$$Lambda$getConstructors, $NO_CLASS_INIT, $PrivilegedExceptionAction)
public:
	void init$($Class* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* run() override {
		 return $nc(inst$)->getConstructors();
	}
	$Class* inst$ = nullptr;
};
$Class* RandomGeneratorFactory$$Lambda$getConstructors::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(RandomGeneratorFactory$$Lambda$getConstructors, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Class;)V", nullptr, $PUBLIC, $method(RandomGeneratorFactory$$Lambda$getConstructors, init$, void, $Class*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(RandomGeneratorFactory$$Lambda$getConstructors, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.random.RandomGeneratorFactory$$Lambda$getConstructors",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(RandomGeneratorFactory$$Lambda$getConstructors, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RandomGeneratorFactory$$Lambda$getConstructors);
	});
	return class$;
}
$Class* RandomGeneratorFactory$$Lambda$getConstructors::class$ = nullptr;

class RandomGeneratorFactory$$Lambda$lambda$all$0$1 : public $Predicate {
	$class(RandomGeneratorFactory$$Lambda$lambda$all$0$1, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* p) override {
		 return RandomGeneratorFactory::lambda$all$0($cast($ServiceLoader$Provider, p));
	}
};
$Class* RandomGeneratorFactory$$Lambda$lambda$all$0$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(RandomGeneratorFactory$$Lambda$lambda$all$0$1, init$, void)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(RandomGeneratorFactory$$Lambda$lambda$all$0$1, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.random.RandomGeneratorFactory$$Lambda$lambda$all$0$1",
		"java.lang.Object",
		"java.util.function.Predicate",
		nullptr,
		methodInfos$$
	};
	$loadClass(RandomGeneratorFactory$$Lambda$lambda$all$0$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RandomGeneratorFactory$$Lambda$lambda$all$0$1);
	});
	return class$;
}
$Class* RandomGeneratorFactory$$Lambda$lambda$all$0$1::class$ = nullptr;

class RandomGeneratorFactory$$Lambda$RandomGeneratorFactory$2 : public $Function {
	$class(RandomGeneratorFactory$$Lambda$RandomGeneratorFactory$2, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* provider) override {
		 return $new(RandomGeneratorFactory, $cast($ServiceLoader$Provider, provider));
	}
};
$Class* RandomGeneratorFactory$$Lambda$RandomGeneratorFactory$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(RandomGeneratorFactory$$Lambda$RandomGeneratorFactory$2, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(RandomGeneratorFactory$$Lambda$RandomGeneratorFactory$2, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.random.RandomGeneratorFactory$$Lambda$RandomGeneratorFactory$2",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(RandomGeneratorFactory$$Lambda$RandomGeneratorFactory$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RandomGeneratorFactory$$Lambda$RandomGeneratorFactory$2);
	});
	return class$;
}
$Class* RandomGeneratorFactory$$Lambda$RandomGeneratorFactory$2::class$ = nullptr;

void RandomGeneratorFactory::init$($ServiceLoader$Provider* provider) {
	$set(this, provider, provider);
}

$Map* RandomGeneratorFactory::getFactoryMap() {
	$init($RandomGeneratorFactory$FactoryMapHolder);
	return $RandomGeneratorFactory$FactoryMapHolder::FACTORY_MAP;
}

$RandomSupport$RandomGeneratorProperties* RandomGeneratorFactory::getProperties() {
	if (this->properties == nullptr) {
		$synchronized(this->provider) {
			if (this->properties == nullptr) {
				$load($RandomSupport$RandomGeneratorProperties);
				$set(this, properties, $cast($RandomSupport$RandomGeneratorProperties, $nc(this->provider->type())->getDeclaredAnnotation($RandomSupport$RandomGeneratorProperties::class$)));
				$Objects::requireNonNull(this->properties, $$str({this->provider->type(), " missing annotation"_s}));
			}
		}
	}
	return this->properties;
}

bool RandomGeneratorFactory::isSubclass($Class* category) {
	return isSubclass(category, this->provider);
}

bool RandomGeneratorFactory::isSubclass($Class* category, $ServiceLoader$Provider* provider) {
	return provider != nullptr && $nc(category)->isAssignableFrom(provider->type());
}

$ServiceLoader$Provider* RandomGeneratorFactory::findProvider($String* name, $Class* category) {
	$useLocalObjectStack();
	$var($Map, fm, getFactoryMap());
	$var($ServiceLoader$Provider, provider, $cast($ServiceLoader$Provider, $nc(fm)->get(name)));
	if (provider == nullptr) {
		$throwNew($IllegalArgumentException, $$str({"No implementation of the random number generator algorithm \""_s, name, "\" is available"_s}));
	} else if (!isSubclass(category, provider)) {
		$throwNew($IllegalArgumentException, $$str({"The random number generator algorithm \""_s, name, "\" is not implemented with the interface \""_s, $($nc(category)->getSimpleName()), "\""_s}));
	}
	return provider;
}

$RandomGenerator* RandomGeneratorFactory::of($String* name, $Class* category) {
	$useLocalObjectStack();
	$var($RandomGenerator, uncheckedRandomGenerator, $cast($RandomGenerator, $$nc(findProvider(name, category))->get()));
	return uncheckedRandomGenerator;
}

RandomGeneratorFactory* RandomGeneratorFactory::factoryOf($String* name, $Class* category) {
	$var($ServiceLoader$Provider, uncheckedProvider, findProvider(name, category));
	return $new(RandomGeneratorFactory, uncheckedProvider);
}

void RandomGeneratorFactory::getConstructors($Class* randomGeneratorClass) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	if (this->ctor == nullptr) {
		$synchronized(this->provider) {
			if (this->ctor == nullptr) {
				$var($PrivilegedExceptionAction, ctorAction, $new(RandomGeneratorFactory$$Lambda$getConstructors, $nc(randomGeneratorClass)));
				try {
					$var($ConstructorArray, ctors, $cast($ConstructorArray, $AccessController::doPrivileged(ctorAction)));
					$var($Constructor, tmpCtor, nullptr);
					$var($Constructor, tmpCtorLong, nullptr);
					$var($Constructor, tmpCtorBytes, nullptr);
					{
						$var($ConstructorArray, arr$, ctors);
						for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
							$var($Constructor, ctorGeneric, arr$->get(i$));
							{
								$var($Constructor, ctorSpecific, ctorGeneric);
								$var($ClassArray, parameterTypes, $nc(ctorSpecific)->getParameterTypes());
								if ($nc(parameterTypes)->length == 0) {
									$assign(tmpCtor, ctorSpecific);
								} else if (parameterTypes->length == 1) {
									$Class* argType = parameterTypes->get(0);
									if (argType == $Long::TYPE) {
										$assign(tmpCtorLong, ctorSpecific);
									} else if (argType == $getClass($bytes)) {
										$assign(tmpCtorBytes, ctorSpecific);
									}
								}
							}
						}
					}
					if (tmpCtor == nullptr) {
						$throwNew($IllegalStateException, $$str({"Random algorithm "_s, $(name()), " is missing a default constructor"_s}));
					}
					$set(this, ctorBytes, tmpCtorBytes);
					$set(this, ctorLong, tmpCtorLong);
					$set(this, ctor, tmpCtor);
				} catch ($PrivilegedActionException& ex) {
				}
			}
		}
	}
}

void RandomGeneratorFactory::ensureConstructors() {
	getConstructors($nc(this->provider)->type());
}

RandomGeneratorFactory* RandomGeneratorFactory::of($String* name) {
	$Objects::requireNonNull(name);
	$load($RandomGenerator);
	$var(RandomGeneratorFactory, factory, factoryOf(name, $RandomGenerator::class$));
	return factory;
}

RandomGeneratorFactory* RandomGeneratorFactory::getDefault() {
	$load($RandomGenerator);
	return factoryOf("L32X64MixRandom"_s, $RandomGenerator::class$);
}

$Stream* RandomGeneratorFactory::all() {
	$useLocalObjectStack();
	$var($Map, fm, getFactoryMap());
	return $$nc($$nc($$nc($nc(fm)->values())->stream())->filter($$new(RandomGeneratorFactory$$Lambda$lambda$all$0$1)))->map($$new(RandomGeneratorFactory$$Lambda$RandomGeneratorFactory$2));
}

$String* RandomGeneratorFactory::name() {
	return $nc($nc(this->provider)->type())->getSimpleName();
}

$String* RandomGeneratorFactory::group() {
	return $$nc(getProperties())->group();
}

int32_t RandomGeneratorFactory::stateBits() {
	$var($RandomSupport$RandomGeneratorProperties, properties, getProperties());
	int32_t i = $nc(properties)->i();
	int32_t k = properties->k();
	return i == 0 && k == 0 ? $Integer::MAX_VALUE : i + k;
}

int32_t RandomGeneratorFactory::equidistribution() {
	return $$nc(getProperties())->equidistribution();
}

$BigInteger* RandomGeneratorFactory::period() {
	$useLocalObjectStack();
	$var($RandomSupport$RandomGeneratorProperties, properties, getProperties());
	int32_t i = $nc(properties)->i();
	int32_t j = properties->j();
	int32_t k = properties->k();
	if (i == 0 && j == 0 && k == 0) {
		$init($BigInteger);
		return $BigInteger::ZERO;
	} else {
		$init($BigInteger);
		return $($($nc($BigInteger::ONE)->shiftLeft(i))->subtract($($BigInteger::valueOf(j))))->shiftLeft(k);
	}
}

bool RandomGeneratorFactory::isStatistical() {
	return !$$nc(getProperties())->isStochastic();
}

bool RandomGeneratorFactory::isStochastic() {
	return $$nc(getProperties())->isStochastic();
}

bool RandomGeneratorFactory::isHardware() {
	return $$nc(getProperties())->isHardware();
}

bool RandomGeneratorFactory::isArbitrarilyJumpable() {
	$load($RandomGenerator$ArbitrarilyJumpableGenerator);
	return isSubclass($RandomGenerator$ArbitrarilyJumpableGenerator::class$);
}

bool RandomGeneratorFactory::isJumpable() {
	$load($RandomGenerator$JumpableGenerator);
	return isSubclass($RandomGenerator$JumpableGenerator::class$);
}

bool RandomGeneratorFactory::isLeapable() {
	$load($RandomGenerator$LeapableGenerator);
	return isSubclass($RandomGenerator$LeapableGenerator::class$);
}

bool RandomGeneratorFactory::isSplittable() {
	$load($RandomGenerator$SplittableGenerator);
	return isSubclass($RandomGenerator$SplittableGenerator::class$);
}

bool RandomGeneratorFactory::isStreamable() {
	$load($RandomGenerator$StreamableGenerator);
	return isSubclass($RandomGenerator$StreamableGenerator::class$);
}

bool RandomGeneratorFactory::isDeprecated() {
	$load($Deprecated);
	return $nc($nc(this->provider)->type())->isAnnotationPresent($Deprecated::class$);
}

$RandomGenerator* RandomGeneratorFactory::create() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	try {
		ensureConstructors();
		return $cast($RandomGenerator, $nc(this->ctor)->newInstance($$new($ObjectArray, 0)));
	} catch ($Exception& ex) {
		$throwNew($IllegalStateException, $$str({"Random algorithm "_s, $(name()), " is missing a default constructor"_s}), ex);
	}
	$shouldNotReachHere();
}

$RandomGenerator* RandomGeneratorFactory::create(int64_t seed) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	try {
		ensureConstructors();
		return $cast($RandomGenerator, $nc(this->ctorLong)->newInstance($$new($ObjectArray, {$($Long::valueOf(seed))})));
	} catch ($Exception& ex) {
		return create();
	}
	$shouldNotReachHere();
}

$RandomGenerator* RandomGeneratorFactory::create($bytes* seed) {
	$beforeCallerSensitive();
	$Objects::requireNonNull(seed, "seed must not be null"_s);
	try {
		ensureConstructors();
		return $cast($RandomGenerator, $nc(this->ctorBytes)->newInstance($$new($ObjectArray, {seed})));
	} catch ($Exception& ex) {
		return create();
	}
	$shouldNotReachHere();
}

bool RandomGeneratorFactory::lambda$all$0($ServiceLoader$Provider* p) {
	$load($Deprecated);
	bool var$0 = !$nc($nc(p)->type())->isAnnotationPresent($Deprecated::class$);
	$load($RandomSupport$RandomGeneratorProperties);
	return var$0 && $nc(p->type())->isAnnotationPresent($RandomSupport$RandomGeneratorProperties::class$);
}

RandomGeneratorFactory::RandomGeneratorFactory() {
}

$Class* RandomGeneratorFactory::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("java.util.random.RandomGeneratorFactory$$Lambda$getConstructors")) {
			return RandomGeneratorFactory$$Lambda$getConstructors::load$(name, initialize);
		}
		if (name->equals("java.util.random.RandomGeneratorFactory$$Lambda$lambda$all$0$1")) {
			return RandomGeneratorFactory$$Lambda$lambda$all$0$1::load$(name, initialize);
		}
		if (name->equals("java.util.random.RandomGeneratorFactory$$Lambda$RandomGeneratorFactory$2")) {
			return RandomGeneratorFactory$$Lambda$RandomGeneratorFactory$2::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"provider", "Ljava/util/ServiceLoader$Provider;", "Ljava/util/ServiceLoader$Provider<+Ljava/util/random/RandomGenerator;>;", $PRIVATE | $FINAL, $field(RandomGeneratorFactory, provider)},
		{"properties", "Ljdk/internal/util/random/RandomSupport$RandomGeneratorProperties;", nullptr, $PRIVATE | $VOLATILE, $field(RandomGeneratorFactory, properties)},
		{"ctor", "Ljava/lang/reflect/Constructor;", "Ljava/lang/reflect/Constructor<TT;>;", $PRIVATE | $VOLATILE, $field(RandomGeneratorFactory, ctor)},
		{"ctorLong", "Ljava/lang/reflect/Constructor;", "Ljava/lang/reflect/Constructor<TT;>;", $PRIVATE, $field(RandomGeneratorFactory, ctorLong)},
		{"ctorBytes", "Ljava/lang/reflect/Constructor;", "Ljava/lang/reflect/Constructor<TT;>;", $PRIVATE, $field(RandomGeneratorFactory, ctorBytes)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/ServiceLoader$Provider;)V", "(Ljava/util/ServiceLoader$Provider<+Ljava/util/random/RandomGenerator;>;)V", $PRIVATE, $method(RandomGeneratorFactory, init$, void, $ServiceLoader$Provider*)},
		{"all", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<Ljava/util/random/RandomGeneratorFactory<Ljava/util/random/RandomGenerator;>;>;", $PUBLIC | $STATIC, $staticMethod(RandomGeneratorFactory, all, $Stream*)},
		{"create", "()Ljava/util/random/RandomGenerator;", "()TT;", $PUBLIC, $method(RandomGeneratorFactory, create, $RandomGenerator*)},
		{"create", "(J)Ljava/util/random/RandomGenerator;", "(J)TT;", $PUBLIC, $method(RandomGeneratorFactory, create, $RandomGenerator*, int64_t)},
		{"create", "([B)Ljava/util/random/RandomGenerator;", "([B)TT;", $PUBLIC, $method(RandomGeneratorFactory, create, $RandomGenerator*, $bytes*)},
		{"ensureConstructors", "()V", nullptr, $PRIVATE, $method(RandomGeneratorFactory, ensureConstructors, void)},
		{"equidistribution", "()I", nullptr, $PUBLIC, $method(RandomGeneratorFactory, equidistribution, int32_t)},
		{"factoryOf", "(Ljava/lang/String;Ljava/lang/Class;)Ljava/util/random/RandomGeneratorFactory;", "<T::Ljava/util/random/RandomGenerator;>(Ljava/lang/String;Ljava/lang/Class<TT;>;)Ljava/util/random/RandomGeneratorFactory<TT;>;", $STATIC, $staticMethod(RandomGeneratorFactory, factoryOf, RandomGeneratorFactory*, $String*, $Class*), "java.lang.IllegalArgumentException"},
		{"findProvider", "(Ljava/lang/String;Ljava/lang/Class;)Ljava/util/ServiceLoader$Provider;", "(Ljava/lang/String;Ljava/lang/Class<+Ljava/util/random/RandomGenerator;>;)Ljava/util/ServiceLoader$Provider<+Ljava/util/random/RandomGenerator;>;", $PRIVATE | $STATIC, $staticMethod(RandomGeneratorFactory, findProvider, $ServiceLoader$Provider*, $String*, $Class*), "java.lang.IllegalArgumentException"},
		{"getConstructors", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<+Ljava/util/random/RandomGenerator;>;)V", $PRIVATE, $method(RandomGeneratorFactory, getConstructors, void, $Class*)},
		{"getDefault", "()Ljava/util/random/RandomGeneratorFactory;", "()Ljava/util/random/RandomGeneratorFactory<Ljava/util/random/RandomGenerator;>;", $PUBLIC | $STATIC, $staticMethod(RandomGeneratorFactory, getDefault, RandomGeneratorFactory*)},
		{"getFactoryMap", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/util/ServiceLoader$Provider<+Ljava/util/random/RandomGenerator;>;>;", $PRIVATE | $STATIC, $staticMethod(RandomGeneratorFactory, getFactoryMap, $Map*)},
		{"getProperties", "()Ljdk/internal/util/random/RandomSupport$RandomGeneratorProperties;", nullptr, $PRIVATE, $method(RandomGeneratorFactory, getProperties, $RandomSupport$RandomGeneratorProperties*)},
		{"group", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(RandomGeneratorFactory, group, $String*)},
		{"isArbitrarilyJumpable", "()Z", nullptr, $PUBLIC, $method(RandomGeneratorFactory, isArbitrarilyJumpable, bool)},
		{"isDeprecated", "()Z", nullptr, $PUBLIC, $method(RandomGeneratorFactory, isDeprecated, bool)},
		{"isHardware", "()Z", nullptr, $PUBLIC, $method(RandomGeneratorFactory, isHardware, bool)},
		{"isJumpable", "()Z", nullptr, $PUBLIC, $method(RandomGeneratorFactory, isJumpable, bool)},
		{"isLeapable", "()Z", nullptr, $PUBLIC, $method(RandomGeneratorFactory, isLeapable, bool)},
		{"isSplittable", "()Z", nullptr, $PUBLIC, $method(RandomGeneratorFactory, isSplittable, bool)},
		{"isStatistical", "()Z", nullptr, $PUBLIC, $method(RandomGeneratorFactory, isStatistical, bool)},
		{"isStochastic", "()Z", nullptr, $PUBLIC, $method(RandomGeneratorFactory, isStochastic, bool)},
		{"isStreamable", "()Z", nullptr, $PUBLIC, $method(RandomGeneratorFactory, isStreamable, bool)},
		{"isSubclass", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<+Ljava/util/random/RandomGenerator;>;)Z", $PRIVATE, $method(RandomGeneratorFactory, isSubclass, bool, $Class*)},
		{"isSubclass", "(Ljava/lang/Class;Ljava/util/ServiceLoader$Provider;)Z", "(Ljava/lang/Class<+Ljava/util/random/RandomGenerator;>;Ljava/util/ServiceLoader$Provider<+Ljava/util/random/RandomGenerator;>;)Z", $PRIVATE | $STATIC, $staticMethod(RandomGeneratorFactory, isSubclass, bool, $Class*, $ServiceLoader$Provider*)},
		{"lambda$all$0", "(Ljava/util/ServiceLoader$Provider;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(RandomGeneratorFactory, lambda$all$0, bool, $ServiceLoader$Provider*)},
		{"name", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(RandomGeneratorFactory, name, $String*)},
		{"of", "(Ljava/lang/String;Ljava/lang/Class;)Ljava/util/random/RandomGenerator;", "<T::Ljava/util/random/RandomGenerator;>(Ljava/lang/String;Ljava/lang/Class<TT;>;)TT;", $STATIC, $staticMethod(RandomGeneratorFactory, of, $RandomGenerator*, $String*, $Class*), "java.lang.IllegalArgumentException"},
		{"of", "(Ljava/lang/String;)Ljava/util/random/RandomGeneratorFactory;", "<T::Ljava/util/random/RandomGenerator;>(Ljava/lang/String;)Ljava/util/random/RandomGeneratorFactory<TT;>;", $PUBLIC | $STATIC, $staticMethod(RandomGeneratorFactory, of, RandomGeneratorFactory*, $String*)},
		{"period", "()Ljava/math/BigInteger;", nullptr, $PUBLIC, $method(RandomGeneratorFactory, period, $BigInteger*)},
		{"stateBits", "()I", nullptr, $PUBLIC, $method(RandomGeneratorFactory, stateBits, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.random.RandomGeneratorFactory$FactoryMapHolder", "java.util.random.RandomGeneratorFactory", "FactoryMapHolder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"java.util.random.RandomGeneratorFactory",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<T::Ljava/util/random/RandomGenerator;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.util.random.RandomGeneratorFactory$FactoryMapHolder"
	};
	$loadClass(RandomGeneratorFactory, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RandomGeneratorFactory);
	});
	return class$;
}

$Class* RandomGeneratorFactory::class$ = nullptr;

		} // random
	} // util
} // java