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
using $Boolean = ::java::lang::Boolean;
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
using $Void = ::java::lang::Void;
using $Annotation = ::java::lang::annotation::Annotation;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Constructor = ::java::lang::reflect::Constructor;
using $BigInteger = ::java::math::BigInteger;
using $AccessController = ::java::security::AccessController;
using $PrivilegedActionException = ::java::security::PrivilegedActionException;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $Collection = ::java::util::Collection;
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
		 return $of($nc(inst$)->getConstructors());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<RandomGeneratorFactory$$Lambda$getConstructors>());
	}
	$Class* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo RandomGeneratorFactory$$Lambda$getConstructors::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(RandomGeneratorFactory$$Lambda$getConstructors, inst$)},
	{}
};
$MethodInfo RandomGeneratorFactory$$Lambda$getConstructors::methodInfos[3] = {
	{"<init>", "(Ljava/lang/Class;)V", nullptr, $PUBLIC, $method(static_cast<void(RandomGeneratorFactory$$Lambda$getConstructors::*)($Class*)>(&RandomGeneratorFactory$$Lambda$getConstructors::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo RandomGeneratorFactory$$Lambda$getConstructors::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.random.RandomGeneratorFactory$$Lambda$getConstructors",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	fieldInfos,
	methodInfos
};
$Class* RandomGeneratorFactory$$Lambda$getConstructors::load$($String* name, bool initialize) {
	$loadClass(RandomGeneratorFactory$$Lambda$getConstructors, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<RandomGeneratorFactory$$Lambda$lambda$all$0$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo RandomGeneratorFactory$$Lambda$lambda$all$0$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(RandomGeneratorFactory$$Lambda$lambda$all$0$1::*)()>(&RandomGeneratorFactory$$Lambda$lambda$all$0$1::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo RandomGeneratorFactory$$Lambda$lambda$all$0$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.random.RandomGeneratorFactory$$Lambda$lambda$all$0$1",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* RandomGeneratorFactory$$Lambda$lambda$all$0$1::load$($String* name, bool initialize) {
	$loadClass(RandomGeneratorFactory$$Lambda$lambda$all$0$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* RandomGeneratorFactory$$Lambda$lambda$all$0$1::class$ = nullptr;

class RandomGeneratorFactory$$Lambda$RandomGeneratorFactory$2 : public $Function {
	$class(RandomGeneratorFactory$$Lambda$RandomGeneratorFactory$2, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* provider) override {
		 return $of($new(RandomGeneratorFactory, $cast($ServiceLoader$Provider, provider)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<RandomGeneratorFactory$$Lambda$RandomGeneratorFactory$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo RandomGeneratorFactory$$Lambda$RandomGeneratorFactory$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(RandomGeneratorFactory$$Lambda$RandomGeneratorFactory$2::*)()>(&RandomGeneratorFactory$$Lambda$RandomGeneratorFactory$2::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo RandomGeneratorFactory$$Lambda$RandomGeneratorFactory$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.random.RandomGeneratorFactory$$Lambda$RandomGeneratorFactory$2",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* RandomGeneratorFactory$$Lambda$RandomGeneratorFactory$2::load$($String* name, bool initialize) {
	$loadClass(RandomGeneratorFactory$$Lambda$RandomGeneratorFactory$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* RandomGeneratorFactory$$Lambda$RandomGeneratorFactory$2::class$ = nullptr;

$FieldInfo _RandomGeneratorFactory_FieldInfo_[] = {
	{"provider", "Ljava/util/ServiceLoader$Provider;", "Ljava/util/ServiceLoader$Provider<+Ljava/util/random/RandomGenerator;>;", $PRIVATE | $FINAL, $field(RandomGeneratorFactory, provider)},
	{"properties", "Ljdk/internal/util/random/RandomSupport$RandomGeneratorProperties;", nullptr, $PRIVATE | $VOLATILE, $field(RandomGeneratorFactory, properties)},
	{"ctor", "Ljava/lang/reflect/Constructor;", "Ljava/lang/reflect/Constructor<TT;>;", $PRIVATE | $VOLATILE, $field(RandomGeneratorFactory, ctor)},
	{"ctorLong", "Ljava/lang/reflect/Constructor;", "Ljava/lang/reflect/Constructor<TT;>;", $PRIVATE, $field(RandomGeneratorFactory, ctorLong)},
	{"ctorBytes", "Ljava/lang/reflect/Constructor;", "Ljava/lang/reflect/Constructor<TT;>;", $PRIVATE, $field(RandomGeneratorFactory, ctorBytes)},
	{}
};

$MethodInfo _RandomGeneratorFactory_MethodInfo_[] = {
	{"<init>", "(Ljava/util/ServiceLoader$Provider;)V", "(Ljava/util/ServiceLoader$Provider<+Ljava/util/random/RandomGenerator;>;)V", $PRIVATE, $method(static_cast<void(RandomGeneratorFactory::*)($ServiceLoader$Provider*)>(&RandomGeneratorFactory::init$))},
	{"all", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<Ljava/util/random/RandomGeneratorFactory<Ljava/util/random/RandomGenerator;>;>;", $PUBLIC | $STATIC, $method(static_cast<$Stream*(*)()>(&RandomGeneratorFactory::all))},
	{"create", "()Ljava/util/random/RandomGenerator;", "()TT;", $PUBLIC, $method(static_cast<$RandomGenerator*(RandomGeneratorFactory::*)()>(&RandomGeneratorFactory::create))},
	{"create", "(J)Ljava/util/random/RandomGenerator;", "(J)TT;", $PUBLIC, $method(static_cast<$RandomGenerator*(RandomGeneratorFactory::*)(int64_t)>(&RandomGeneratorFactory::create))},
	{"create", "([B)Ljava/util/random/RandomGenerator;", "([B)TT;", $PUBLIC, $method(static_cast<$RandomGenerator*(RandomGeneratorFactory::*)($bytes*)>(&RandomGeneratorFactory::create))},
	{"ensureConstructors", "()V", nullptr, $PRIVATE, $method(static_cast<void(RandomGeneratorFactory::*)()>(&RandomGeneratorFactory::ensureConstructors))},
	{"equidistribution", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(RandomGeneratorFactory::*)()>(&RandomGeneratorFactory::equidistribution))},
	{"factoryOf", "(Ljava/lang/String;Ljava/lang/Class;)Ljava/util/random/RandomGeneratorFactory;", "<T::Ljava/util/random/RandomGenerator;>(Ljava/lang/String;Ljava/lang/Class<TT;>;)Ljava/util/random/RandomGeneratorFactory<TT;>;", $STATIC, $method(static_cast<RandomGeneratorFactory*(*)($String*,$Class*)>(&RandomGeneratorFactory::factoryOf)), "java.lang.IllegalArgumentException"},
	{"findProvider", "(Ljava/lang/String;Ljava/lang/Class;)Ljava/util/ServiceLoader$Provider;", "(Ljava/lang/String;Ljava/lang/Class<+Ljava/util/random/RandomGenerator;>;)Ljava/util/ServiceLoader$Provider<+Ljava/util/random/RandomGenerator;>;", $PRIVATE | $STATIC, $method(static_cast<$ServiceLoader$Provider*(*)($String*,$Class*)>(&RandomGeneratorFactory::findProvider)), "java.lang.IllegalArgumentException"},
	{"getConstructors", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<+Ljava/util/random/RandomGenerator;>;)V", $PRIVATE, $method(static_cast<void(RandomGeneratorFactory::*)($Class*)>(&RandomGeneratorFactory::getConstructors))},
	{"getDefault", "()Ljava/util/random/RandomGeneratorFactory;", "()Ljava/util/random/RandomGeneratorFactory<Ljava/util/random/RandomGenerator;>;", $PUBLIC | $STATIC, $method(static_cast<RandomGeneratorFactory*(*)()>(&RandomGeneratorFactory::getDefault))},
	{"getFactoryMap", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/util/ServiceLoader$Provider<+Ljava/util/random/RandomGenerator;>;>;", $PRIVATE | $STATIC, $method(static_cast<$Map*(*)()>(&RandomGeneratorFactory::getFactoryMap))},
	{"getProperties", "()Ljdk/internal/util/random/RandomSupport$RandomGeneratorProperties;", nullptr, $PRIVATE, $method(static_cast<$RandomSupport$RandomGeneratorProperties*(RandomGeneratorFactory::*)()>(&RandomGeneratorFactory::getProperties))},
	{"group", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(RandomGeneratorFactory::*)()>(&RandomGeneratorFactory::group))},
	{"isArbitrarilyJumpable", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(RandomGeneratorFactory::*)()>(&RandomGeneratorFactory::isArbitrarilyJumpable))},
	{"isDeprecated", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(RandomGeneratorFactory::*)()>(&RandomGeneratorFactory::isDeprecated))},
	{"isHardware", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(RandomGeneratorFactory::*)()>(&RandomGeneratorFactory::isHardware))},
	{"isJumpable", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(RandomGeneratorFactory::*)()>(&RandomGeneratorFactory::isJumpable))},
	{"isLeapable", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(RandomGeneratorFactory::*)()>(&RandomGeneratorFactory::isLeapable))},
	{"isSplittable", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(RandomGeneratorFactory::*)()>(&RandomGeneratorFactory::isSplittable))},
	{"isStatistical", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(RandomGeneratorFactory::*)()>(&RandomGeneratorFactory::isStatistical))},
	{"isStochastic", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(RandomGeneratorFactory::*)()>(&RandomGeneratorFactory::isStochastic))},
	{"isStreamable", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(RandomGeneratorFactory::*)()>(&RandomGeneratorFactory::isStreamable))},
	{"isSubclass", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<+Ljava/util/random/RandomGenerator;>;)Z", $PRIVATE, $method(static_cast<bool(RandomGeneratorFactory::*)($Class*)>(&RandomGeneratorFactory::isSubclass))},
	{"isSubclass", "(Ljava/lang/Class;Ljava/util/ServiceLoader$Provider;)Z", "(Ljava/lang/Class<+Ljava/util/random/RandomGenerator;>;Ljava/util/ServiceLoader$Provider<+Ljava/util/random/RandomGenerator;>;)Z", $PRIVATE | $STATIC, $method(static_cast<bool(*)($Class*,$ServiceLoader$Provider*)>(&RandomGeneratorFactory::isSubclass))},
	{"lambda$all$0", "(Ljava/util/ServiceLoader$Provider;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($ServiceLoader$Provider*)>(&RandomGeneratorFactory::lambda$all$0))},
	{"name", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(RandomGeneratorFactory::*)()>(&RandomGeneratorFactory::name))},
	{"of", "(Ljava/lang/String;Ljava/lang/Class;)Ljava/util/random/RandomGenerator;", "<T::Ljava/util/random/RandomGenerator;>(Ljava/lang/String;Ljava/lang/Class<TT;>;)TT;", $STATIC, $method(static_cast<$RandomGenerator*(*)($String*,$Class*)>(&RandomGeneratorFactory::of)), "java.lang.IllegalArgumentException"},
	{"of", "(Ljava/lang/String;)Ljava/util/random/RandomGeneratorFactory;", "<T::Ljava/util/random/RandomGenerator;>(Ljava/lang/String;)Ljava/util/random/RandomGeneratorFactory<TT;>;", $PUBLIC | $STATIC, $method(static_cast<RandomGeneratorFactory*(*)($String*)>(&RandomGeneratorFactory::of))},
	{"period", "()Ljava/math/BigInteger;", nullptr, $PUBLIC, $method(static_cast<$BigInteger*(RandomGeneratorFactory::*)()>(&RandomGeneratorFactory::period))},
	{"stateBits", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(RandomGeneratorFactory::*)()>(&RandomGeneratorFactory::stateBits))},
	{}
};

$InnerClassInfo _RandomGeneratorFactory_InnerClassesInfo_[] = {
	{"java.util.random.RandomGeneratorFactory$FactoryMapHolder", "java.util.random.RandomGeneratorFactory", "FactoryMapHolder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _RandomGeneratorFactory_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.util.random.RandomGeneratorFactory",
	"java.lang.Object",
	nullptr,
	_RandomGeneratorFactory_FieldInfo_,
	_RandomGeneratorFactory_MethodInfo_,
	"<T::Ljava/util/random/RandomGenerator;>Ljava/lang/Object;",
	nullptr,
	_RandomGeneratorFactory_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.util.random.RandomGeneratorFactory$FactoryMapHolder"
};

$Object* allocate$RandomGeneratorFactory($Class* clazz) {
	return $of($alloc(RandomGeneratorFactory));
}

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
				$set(this, properties, $cast($RandomSupport$RandomGeneratorProperties, $nc($nc(this->provider)->type())->getDeclaredAnnotation($RandomSupport$RandomGeneratorProperties::class$)));
				$Objects::requireNonNull($of(this->properties), $$str({$nc(this->provider)->type(), " missing annotation"_s}));
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
	$useLocalCurrentObjectStackCache();
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
	$useLocalCurrentObjectStackCache();
	$var($RandomGenerator, uncheckedRandomGenerator, $cast($RandomGenerator, $nc($(findProvider(name, category)))->get()));
	return uncheckedRandomGenerator;
}

RandomGeneratorFactory* RandomGeneratorFactory::factoryOf($String* name, $Class* category) {
	$var($ServiceLoader$Provider, uncheckedProvider, findProvider(name, category));
	return $new(RandomGeneratorFactory, uncheckedProvider);
}

void RandomGeneratorFactory::getConstructors($Class* randomGeneratorClass) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if (this->ctor == nullptr) {
		$synchronized(this->provider) {
			if (this->ctor == nullptr) {
				$var($PrivilegedExceptionAction, ctorAction, static_cast<$PrivilegedExceptionAction*>($new(RandomGeneratorFactory$$Lambda$getConstructors, static_cast<$Class*>($nc(randomGeneratorClass)))));
				try {
					$var($ConstructorArray, ctors, $cast($ConstructorArray, $AccessController::doPrivileged(ctorAction)));
					$var($Constructor, tmpCtor, nullptr);
					$var($Constructor, tmpCtorLong, nullptr);
					$var($Constructor, tmpCtorBytes, nullptr);
					{
						$var($ConstructorArray, arr$, ctors);
						int32_t len$ = $nc(arr$)->length;
						int32_t i$ = 0;
						for (; i$ < len$; ++i$) {
							$var($Constructor, ctorGeneric, arr$->get(i$));
							{
								$var($Constructor, ctorSpecific, ctorGeneric);
								$var($ClassArray, parameterTypes, $nc(ctorSpecific)->getParameterTypes());
								if ($nc(parameterTypes)->length == 0) {
									$assign(tmpCtor, ctorSpecific);
								} else if (parameterTypes->length == 1) {
									$Class* argType = parameterTypes->get(0);
									$init($Long);
									if (argType == $Long::TYPE) {
										$assign(tmpCtorLong, ctorSpecific);
									} else {
										$load($bytes);
										if (argType == $getClass($bytes)) {
											$assign(tmpCtorBytes, ctorSpecific);
										}
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
	$useLocalCurrentObjectStackCache();
	$var($Map, fm, getFactoryMap());
	return $nc($($nc($($nc($($nc(fm)->values()))->stream()))->filter(static_cast<$Predicate*>($$new(RandomGeneratorFactory$$Lambda$lambda$all$0$1)))))->map(static_cast<$Function*>($$new(RandomGeneratorFactory$$Lambda$RandomGeneratorFactory$2)));
}

$String* RandomGeneratorFactory::name() {
	return $nc($nc(this->provider)->type())->getSimpleName();
}

$String* RandomGeneratorFactory::group() {
	return $nc($(getProperties()))->group();
}

int32_t RandomGeneratorFactory::stateBits() {
	$var($RandomSupport$RandomGeneratorProperties, properties, getProperties());
	int32_t i = $nc(properties)->i();
	int32_t k = properties->k();
	return i == 0 && k == 0 ? $Integer::MAX_VALUE : i + k;
}

int32_t RandomGeneratorFactory::equidistribution() {
	return $nc($(getProperties()))->equidistribution();
}

$BigInteger* RandomGeneratorFactory::period() {
	$useLocalCurrentObjectStackCache();
	$var($RandomSupport$RandomGeneratorProperties, properties, getProperties());
	int32_t i = $nc(properties)->i();
	int32_t j = properties->j();
	int32_t k = properties->k();
	if (i == 0 && j == 0 && k == 0) {
		$init($BigInteger);
		return $BigInteger::ZERO;
	} else {
		$init($BigInteger);
		return $nc($($nc($($nc($BigInteger::ONE)->shiftLeft(i)))->subtract($($BigInteger::valueOf((int64_t)j)))))->shiftLeft(k);
	}
}

bool RandomGeneratorFactory::isStatistical() {
	return !$nc($(getProperties()))->isStochastic();
}

bool RandomGeneratorFactory::isStochastic() {
	return $nc($(getProperties()))->isStochastic();
}

bool RandomGeneratorFactory::isHardware() {
	return $nc($(getProperties()))->isHardware();
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
	$useLocalCurrentObjectStackCache();
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
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		ensureConstructors();
		return $cast($RandomGenerator, $nc(this->ctorLong)->newInstance($$new($ObjectArray, {$($of($Long::valueOf(seed)))})));
	} catch ($Exception& ex) {
		return create();
	}
	$shouldNotReachHere();
}

$RandomGenerator* RandomGeneratorFactory::create($bytes* seed) {
	$beforeCallerSensitive();
	$Objects::requireNonNull($of(seed), "seed must not be null"_s);
	try {
		ensureConstructors();
		return $cast($RandomGenerator, $nc(this->ctorBytes)->newInstance($$new($ObjectArray, {$of(seed)})));
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
		if (name->equals(RandomGeneratorFactory$$Lambda$getConstructors::classInfo$.name)) {
			return RandomGeneratorFactory$$Lambda$getConstructors::load$(name, initialize);
		}
		if (name->equals(RandomGeneratorFactory$$Lambda$lambda$all$0$1::classInfo$.name)) {
			return RandomGeneratorFactory$$Lambda$lambda$all$0$1::load$(name, initialize);
		}
		if (name->equals(RandomGeneratorFactory$$Lambda$RandomGeneratorFactory$2::classInfo$.name)) {
			return RandomGeneratorFactory$$Lambda$RandomGeneratorFactory$2::load$(name, initialize);
		}
	}
	$loadClass(RandomGeneratorFactory, name, initialize, &_RandomGeneratorFactory_ClassInfo_, allocate$RandomGeneratorFactory);
	return class$;
}

$Class* RandomGeneratorFactory::class$ = nullptr;

		} // random
	} // util
} // java