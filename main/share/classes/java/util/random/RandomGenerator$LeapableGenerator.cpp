#include <java/util/random/RandomGenerator$LeapableGenerator.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Objects.h>
#include <java/util/function/Supplier.h>
#include <java/util/random/RandomGenerator$JumpableGenerator.h>
#include <java/util/random/RandomGenerator.h>
#include <java/util/random/RandomGeneratorFactory.h>
#include <java/util/stream/BaseStream.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Objects = ::java::util::Objects;
using $Supplier = ::java::util::function::Supplier;
using $RandomGenerator$JumpableGenerator = ::java::util::random::RandomGenerator$JumpableGenerator;
using $RandomGeneratorFactory = ::java::util::random::RandomGeneratorFactory;
using $Stream = ::java::util::stream::Stream;

namespace java {
	namespace util {
		namespace random {

class RandomGenerator$LeapableGenerator$$Lambda$copyAndLeap : public $Supplier {
	$class(RandomGenerator$LeapableGenerator$$Lambda$copyAndLeap, $NO_CLASS_INIT, $Supplier)
public:
	void init$(RandomGenerator$LeapableGenerator* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* get() override {
		 return $nc(inst$)->copyAndLeap();
	}
	RandomGenerator$LeapableGenerator* inst$ = nullptr;
};
$Class* RandomGenerator$LeapableGenerator$$Lambda$copyAndLeap::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(RandomGenerator$LeapableGenerator$$Lambda$copyAndLeap, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/random/RandomGenerator$LeapableGenerator;)V", nullptr, $PUBLIC, $method(RandomGenerator$LeapableGenerator$$Lambda$copyAndLeap, init$, void, RandomGenerator$LeapableGenerator*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(RandomGenerator$LeapableGenerator$$Lambda$copyAndLeap, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.random.RandomGenerator$LeapableGenerator$$Lambda$copyAndLeap",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(RandomGenerator$LeapableGenerator$$Lambda$copyAndLeap, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RandomGenerator$LeapableGenerator$$Lambda$copyAndLeap);
	});
	return class$;
}
$Class* RandomGenerator$LeapableGenerator$$Lambda$copyAndLeap::class$ = nullptr;

RandomGenerator$LeapableGenerator* RandomGenerator$LeapableGenerator::of($String* name) {
	$init(RandomGenerator$LeapableGenerator);
	$Objects::requireNonNull(name);
	return $cast(RandomGenerator$LeapableGenerator, $RandomGeneratorFactory::of(name, RandomGenerator$LeapableGenerator::class$));
}

$Stream* RandomGenerator$LeapableGenerator::leaps() {
	$useLocalObjectStack();
	return $cast($Stream, $$nc($Stream::generate($$new(RandomGenerator$LeapableGenerator$$Lambda$copyAndLeap, this)))->sequential());
}

$Stream* RandomGenerator$LeapableGenerator::leaps(int64_t streamSize) {
	return $$nc(leaps())->limit(streamSize);
}

$RandomGenerator$JumpableGenerator* RandomGenerator$LeapableGenerator::copyAndLeap() {
	$var($RandomGenerator$JumpableGenerator, result, copy());
	leap();
	return result;
}

$Class* RandomGenerator$LeapableGenerator::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("java.util.random.RandomGenerator$LeapableGenerator$$Lambda$copyAndLeap")) {
			return RandomGenerator$LeapableGenerator$$Lambda$copyAndLeap::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"copy", "()Ljava/util/random/RandomGenerator$LeapableGenerator;", nullptr, $PUBLIC | $ABSTRACT},
		{"copyAndLeap", "()Ljava/util/random/RandomGenerator$JumpableGenerator;", nullptr, $PUBLIC, $virtualMethod(RandomGenerator$LeapableGenerator, copyAndLeap, $RandomGenerator$JumpableGenerator*)},
		{"leap", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RandomGenerator$LeapableGenerator, leap, void)},
		{"leapDistance", "()D", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RandomGenerator$LeapableGenerator, leapDistance, double)},
		{"leaps", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<Ljava/util/random/RandomGenerator$JumpableGenerator;>;", $PUBLIC, $virtualMethod(RandomGenerator$LeapableGenerator, leaps, $Stream*)},
		{"leaps", "(J)Ljava/util/stream/Stream;", "(J)Ljava/util/stream/Stream<Ljava/util/random/RandomGenerator$JumpableGenerator;>;", $PUBLIC, $virtualMethod(RandomGenerator$LeapableGenerator, leaps, $Stream*, int64_t)},
		{"of", "(Ljava/lang/String;)Ljava/util/random/RandomGenerator$LeapableGenerator;", nullptr, $PUBLIC | $STATIC, $staticMethod(RandomGenerator$LeapableGenerator, of, RandomGenerator$LeapableGenerator*, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.random.RandomGenerator$LeapableGenerator", "java.util.random.RandomGenerator", "LeapableGenerator", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"java.util.random.RandomGenerator$JumpableGenerator", "java.util.random.RandomGenerator", "JumpableGenerator", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.random.RandomGenerator$LeapableGenerator",
		nullptr,
		"java.util.random.RandomGenerator$JumpableGenerator",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.random.RandomGenerator"
	};
	$loadClass(RandomGenerator$LeapableGenerator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RandomGenerator$LeapableGenerator);
	});
	return class$;
}

$Class* RandomGenerator$LeapableGenerator::class$ = nullptr;

		} // random
	} // util
} // java