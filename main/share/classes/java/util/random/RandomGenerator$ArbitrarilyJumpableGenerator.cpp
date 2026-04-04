#include <java/util/random/RandomGenerator$ArbitrarilyJumpableGenerator.h>
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
using $RandomGeneratorFactory = ::java::util::random::RandomGeneratorFactory;
using $Stream = ::java::util::stream::Stream;

namespace java {
	namespace util {
		namespace random {

class RandomGenerator$ArbitrarilyJumpableGenerator$$Lambda$lambda$jumps$0 : public $Supplier {
	$class(RandomGenerator$ArbitrarilyJumpableGenerator$$Lambda$lambda$jumps$0, $NO_CLASS_INIT, $Supplier)
public:
	void init$(RandomGenerator$ArbitrarilyJumpableGenerator* inst, double distance) {
		$set(this, inst$, inst);
		this->distance = distance;
	}
	virtual $Object* get() override {
		 return $nc(inst$)->lambda$jumps$0(distance);
	}
	RandomGenerator$ArbitrarilyJumpableGenerator* inst$ = nullptr;
	double distance = 0.0;
};
$Class* RandomGenerator$ArbitrarilyJumpableGenerator$$Lambda$lambda$jumps$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(RandomGenerator$ArbitrarilyJumpableGenerator$$Lambda$lambda$jumps$0, inst$)},
		{"distance", "D", nullptr, $PUBLIC, $field(RandomGenerator$ArbitrarilyJumpableGenerator$$Lambda$lambda$jumps$0, distance)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/random/RandomGenerator$ArbitrarilyJumpableGenerator;D)V", nullptr, $PUBLIC, $method(RandomGenerator$ArbitrarilyJumpableGenerator$$Lambda$lambda$jumps$0, init$, void, RandomGenerator$ArbitrarilyJumpableGenerator*, double)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(RandomGenerator$ArbitrarilyJumpableGenerator$$Lambda$lambda$jumps$0, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.random.RandomGenerator$ArbitrarilyJumpableGenerator$$Lambda$lambda$jumps$0",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(RandomGenerator$ArbitrarilyJumpableGenerator$$Lambda$lambda$jumps$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RandomGenerator$ArbitrarilyJumpableGenerator$$Lambda$lambda$jumps$0);
	});
	return class$;
}
$Class* RandomGenerator$ArbitrarilyJumpableGenerator$$Lambda$lambda$jumps$0::class$ = nullptr;

RandomGenerator$ArbitrarilyJumpableGenerator* RandomGenerator$ArbitrarilyJumpableGenerator::of($String* name) {
	$init(RandomGenerator$ArbitrarilyJumpableGenerator);
	$Objects::requireNonNull(name);
	return $cast(RandomGenerator$ArbitrarilyJumpableGenerator, $RandomGeneratorFactory::of(name, RandomGenerator$ArbitrarilyJumpableGenerator::class$));
}

void RandomGenerator$ArbitrarilyJumpableGenerator::jump() {
	jump(jumpDistance());
}

$Stream* RandomGenerator$ArbitrarilyJumpableGenerator::jumps(double distance) {
	$useLocalObjectStack();
	return $cast($Stream, $$nc($Stream::generate($$new(RandomGenerator$ArbitrarilyJumpableGenerator$$Lambda$lambda$jumps$0, this, distance)))->sequential());
}

$Stream* RandomGenerator$ArbitrarilyJumpableGenerator::jumps(int64_t streamSize, double distance) {
	return $$nc(jumps(distance))->limit(streamSize);
}

void RandomGenerator$ArbitrarilyJumpableGenerator::leap() {
	jump(leapDistance());
}

RandomGenerator$ArbitrarilyJumpableGenerator* RandomGenerator$ArbitrarilyJumpableGenerator::copyAndJump(double distance) {
	$var(RandomGenerator$ArbitrarilyJumpableGenerator, result, copy());
	jump(distance);
	return result;
}

RandomGenerator$ArbitrarilyJumpableGenerator* RandomGenerator$ArbitrarilyJumpableGenerator::lambda$jumps$0(double distance) {
	return copyAndJump(distance);
}

$Class* RandomGenerator$ArbitrarilyJumpableGenerator::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("java.util.random.RandomGenerator$ArbitrarilyJumpableGenerator$$Lambda$lambda$jumps$0")) {
			return RandomGenerator$ArbitrarilyJumpableGenerator$$Lambda$lambda$jumps$0::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"copy", "()Ljava/util/random/RandomGenerator$ArbitrarilyJumpableGenerator;", nullptr, $PUBLIC | $ABSTRACT},
		{"copyAndJump", "(D)Ljava/util/random/RandomGenerator$ArbitrarilyJumpableGenerator;", nullptr, $PUBLIC, $virtualMethod(RandomGenerator$ArbitrarilyJumpableGenerator, copyAndJump, RandomGenerator$ArbitrarilyJumpableGenerator*, double)},
		{"jump", "(D)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RandomGenerator$ArbitrarilyJumpableGenerator, jump, void, double)},
		{"jump", "()V", nullptr, $PUBLIC, $virtualMethod(RandomGenerator$ArbitrarilyJumpableGenerator, jump, void)},
		{"jumpPowerOfTwo", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RandomGenerator$ArbitrarilyJumpableGenerator, jumpPowerOfTwo, void, int32_t)},
		{"jumps", "(D)Ljava/util/stream/Stream;", "(D)Ljava/util/stream/Stream<Ljava/util/random/RandomGenerator$ArbitrarilyJumpableGenerator;>;", $PUBLIC, $virtualMethod(RandomGenerator$ArbitrarilyJumpableGenerator, jumps, $Stream*, double)},
		{"jumps", "(JD)Ljava/util/stream/Stream;", "(JD)Ljava/util/stream/Stream<Ljava/util/random/RandomGenerator$ArbitrarilyJumpableGenerator;>;", $PUBLIC, $virtualMethod(RandomGenerator$ArbitrarilyJumpableGenerator, jumps, $Stream*, int64_t, double)},
		{"lambda$jumps$0", "(D)Ljava/util/random/RandomGenerator$ArbitrarilyJumpableGenerator;", nullptr, $PRIVATE | $SYNTHETIC, $method(RandomGenerator$ArbitrarilyJumpableGenerator, lambda$jumps$0, RandomGenerator$ArbitrarilyJumpableGenerator*, double)},
		{"leap", "()V", nullptr, $PUBLIC, $virtualMethod(RandomGenerator$ArbitrarilyJumpableGenerator, leap, void)},
		{"of", "(Ljava/lang/String;)Ljava/util/random/RandomGenerator$ArbitrarilyJumpableGenerator;", nullptr, $PUBLIC | $STATIC, $staticMethod(RandomGenerator$ArbitrarilyJumpableGenerator, of, RandomGenerator$ArbitrarilyJumpableGenerator*, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.random.RandomGenerator$ArbitrarilyJumpableGenerator", "java.util.random.RandomGenerator", "ArbitrarilyJumpableGenerator", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"java.util.random.RandomGenerator$LeapableGenerator", "java.util.random.RandomGenerator", "LeapableGenerator", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.random.RandomGenerator$ArbitrarilyJumpableGenerator",
		nullptr,
		"java.util.random.RandomGenerator$LeapableGenerator",
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
	$loadClass(RandomGenerator$ArbitrarilyJumpableGenerator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RandomGenerator$ArbitrarilyJumpableGenerator);
	});
	return class$;
}

$Class* RandomGenerator$ArbitrarilyJumpableGenerator::class$ = nullptr;

		} // random
	} // util
} // java