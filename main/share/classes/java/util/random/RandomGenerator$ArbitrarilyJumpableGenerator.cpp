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
		 return $of($nc(inst$)->lambda$jumps$0(distance));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<RandomGenerator$ArbitrarilyJumpableGenerator$$Lambda$lambda$jumps$0>());
	}
	RandomGenerator$ArbitrarilyJumpableGenerator* inst$ = nullptr;
	double distance = 0.0;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo RandomGenerator$ArbitrarilyJumpableGenerator$$Lambda$lambda$jumps$0::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(RandomGenerator$ArbitrarilyJumpableGenerator$$Lambda$lambda$jumps$0, inst$)},
	{"distance", "D", nullptr, $PUBLIC, $field(RandomGenerator$ArbitrarilyJumpableGenerator$$Lambda$lambda$jumps$0, distance)},
	{}
};
$MethodInfo RandomGenerator$ArbitrarilyJumpableGenerator$$Lambda$lambda$jumps$0::methodInfos[3] = {
	{"<init>", "(Ljava/util/random/RandomGenerator$ArbitrarilyJumpableGenerator;D)V", nullptr, $PUBLIC, $method(static_cast<void(RandomGenerator$ArbitrarilyJumpableGenerator$$Lambda$lambda$jumps$0::*)(RandomGenerator$ArbitrarilyJumpableGenerator*,double)>(&RandomGenerator$ArbitrarilyJumpableGenerator$$Lambda$lambda$jumps$0::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo RandomGenerator$ArbitrarilyJumpableGenerator$$Lambda$lambda$jumps$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.random.RandomGenerator$ArbitrarilyJumpableGenerator$$Lambda$lambda$jumps$0",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* RandomGenerator$ArbitrarilyJumpableGenerator$$Lambda$lambda$jumps$0::load$($String* name, bool initialize) {
	$loadClass(RandomGenerator$ArbitrarilyJumpableGenerator$$Lambda$lambda$jumps$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* RandomGenerator$ArbitrarilyJumpableGenerator$$Lambda$lambda$jumps$0::class$ = nullptr;

$MethodInfo _RandomGenerator$ArbitrarilyJumpableGenerator_MethodInfo_[] = {
	{"copy", "()Ljava/util/random/RandomGenerator$ArbitrarilyJumpableGenerator;", nullptr, $PUBLIC | $ABSTRACT},
	{"copyAndJump", "(D)Ljava/util/random/RandomGenerator$ArbitrarilyJumpableGenerator;", nullptr, $PUBLIC},
	{"jump", "(D)V", nullptr, $PUBLIC | $ABSTRACT},
	{"jump", "()V", nullptr, $PUBLIC},
	{"jumpPowerOfTwo", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"jumps", "(D)Ljava/util/stream/Stream;", "(D)Ljava/util/stream/Stream<Ljava/util/random/RandomGenerator$ArbitrarilyJumpableGenerator;>;", $PUBLIC},
	{"jumps", "(JD)Ljava/util/stream/Stream;", "(JD)Ljava/util/stream/Stream<Ljava/util/random/RandomGenerator$ArbitrarilyJumpableGenerator;>;", $PUBLIC},
	{"lambda$jumps$0", "(D)Ljava/util/random/RandomGenerator$ArbitrarilyJumpableGenerator;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<RandomGenerator$ArbitrarilyJumpableGenerator*(RandomGenerator$ArbitrarilyJumpableGenerator::*)(double)>(&RandomGenerator$ArbitrarilyJumpableGenerator::lambda$jumps$0))},
	{"leap", "()V", nullptr, $PUBLIC},
	{"of", "(Ljava/lang/String;)Ljava/util/random/RandomGenerator$ArbitrarilyJumpableGenerator;", nullptr, $PUBLIC | $STATIC, $method(static_cast<RandomGenerator$ArbitrarilyJumpableGenerator*(*)($String*)>(&RandomGenerator$ArbitrarilyJumpableGenerator::of))},
	{}
};

$InnerClassInfo _RandomGenerator$ArbitrarilyJumpableGenerator_InnerClassesInfo_[] = {
	{"java.util.random.RandomGenerator$ArbitrarilyJumpableGenerator", "java.util.random.RandomGenerator", "ArbitrarilyJumpableGenerator", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.random.RandomGenerator$LeapableGenerator", "java.util.random.RandomGenerator", "LeapableGenerator", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _RandomGenerator$ArbitrarilyJumpableGenerator_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.random.RandomGenerator$ArbitrarilyJumpableGenerator",
	nullptr,
	"java.util.random.RandomGenerator$LeapableGenerator",
	nullptr,
	_RandomGenerator$ArbitrarilyJumpableGenerator_MethodInfo_,
	nullptr,
	nullptr,
	_RandomGenerator$ArbitrarilyJumpableGenerator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.random.RandomGenerator"
};

$Object* allocate$RandomGenerator$ArbitrarilyJumpableGenerator($Class* clazz) {
	return $of($alloc(RandomGenerator$ArbitrarilyJumpableGenerator));
}

RandomGenerator$ArbitrarilyJumpableGenerator* RandomGenerator$ArbitrarilyJumpableGenerator::of($String* name) {
	$init(RandomGenerator$ArbitrarilyJumpableGenerator);
	$Objects::requireNonNull(name);
	return $cast(RandomGenerator$ArbitrarilyJumpableGenerator, $RandomGeneratorFactory::of(name, RandomGenerator$ArbitrarilyJumpableGenerator::class$));
}

void RandomGenerator$ArbitrarilyJumpableGenerator::jump() {
	jump(jumpDistance());
}

$Stream* RandomGenerator$ArbitrarilyJumpableGenerator::jumps(double distance) {
	$useLocalCurrentObjectStackCache();
	return $cast($Stream, $nc($($Stream::generate(static_cast<$Supplier*>($$new(RandomGenerator$ArbitrarilyJumpableGenerator$$Lambda$lambda$jumps$0, this, distance)))))->sequential());
}

$Stream* RandomGenerator$ArbitrarilyJumpableGenerator::jumps(int64_t streamSize, double distance) {
	return $nc($(jumps(distance)))->limit(streamSize);
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
		if (name->equals(RandomGenerator$ArbitrarilyJumpableGenerator$$Lambda$lambda$jumps$0::classInfo$.name)) {
			return RandomGenerator$ArbitrarilyJumpableGenerator$$Lambda$lambda$jumps$0::load$(name, initialize);
		}
	}
	$loadClass(RandomGenerator$ArbitrarilyJumpableGenerator, name, initialize, &_RandomGenerator$ArbitrarilyJumpableGenerator_ClassInfo_, allocate$RandomGenerator$ArbitrarilyJumpableGenerator);
	return class$;
}

$Class* RandomGenerator$ArbitrarilyJumpableGenerator::class$ = nullptr;

		} // random
	} // util
} // java