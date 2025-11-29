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
		 return $of($nc(inst$)->copyAndLeap());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<RandomGenerator$LeapableGenerator$$Lambda$copyAndLeap>());
	}
	RandomGenerator$LeapableGenerator* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo RandomGenerator$LeapableGenerator$$Lambda$copyAndLeap::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(RandomGenerator$LeapableGenerator$$Lambda$copyAndLeap, inst$)},
	{}
};
$MethodInfo RandomGenerator$LeapableGenerator$$Lambda$copyAndLeap::methodInfos[3] = {
	{"<init>", "(Ljava/util/random/RandomGenerator$LeapableGenerator;)V", nullptr, $PUBLIC, $method(static_cast<void(RandomGenerator$LeapableGenerator$$Lambda$copyAndLeap::*)(RandomGenerator$LeapableGenerator*)>(&RandomGenerator$LeapableGenerator$$Lambda$copyAndLeap::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo RandomGenerator$LeapableGenerator$$Lambda$copyAndLeap::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.random.RandomGenerator$LeapableGenerator$$Lambda$copyAndLeap",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* RandomGenerator$LeapableGenerator$$Lambda$copyAndLeap::load$($String* name, bool initialize) {
	$loadClass(RandomGenerator$LeapableGenerator$$Lambda$copyAndLeap, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* RandomGenerator$LeapableGenerator$$Lambda$copyAndLeap::class$ = nullptr;

$MethodInfo _RandomGenerator$LeapableGenerator_MethodInfo_[] = {
	{"copy", "()Ljava/util/random/RandomGenerator$LeapableGenerator;", nullptr, $PUBLIC | $ABSTRACT},
	{"copyAndLeap", "()Ljava/util/random/RandomGenerator$JumpableGenerator;", nullptr, $PUBLIC},
	{"leap", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"leapDistance", "()D", nullptr, $PUBLIC | $ABSTRACT},
	{"leaps", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<Ljava/util/random/RandomGenerator$JumpableGenerator;>;", $PUBLIC},
	{"leaps", "(J)Ljava/util/stream/Stream;", "(J)Ljava/util/stream/Stream<Ljava/util/random/RandomGenerator$JumpableGenerator;>;", $PUBLIC},
	{"of", "(Ljava/lang/String;)Ljava/util/random/RandomGenerator$LeapableGenerator;", nullptr, $PUBLIC | $STATIC, $method(static_cast<RandomGenerator$LeapableGenerator*(*)($String*)>(&RandomGenerator$LeapableGenerator::of))},
	{}
};

$InnerClassInfo _RandomGenerator$LeapableGenerator_InnerClassesInfo_[] = {
	{"java.util.random.RandomGenerator$LeapableGenerator", "java.util.random.RandomGenerator", "LeapableGenerator", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.random.RandomGenerator$JumpableGenerator", "java.util.random.RandomGenerator", "JumpableGenerator", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _RandomGenerator$LeapableGenerator_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.random.RandomGenerator$LeapableGenerator",
	nullptr,
	"java.util.random.RandomGenerator$JumpableGenerator",
	nullptr,
	_RandomGenerator$LeapableGenerator_MethodInfo_,
	nullptr,
	nullptr,
	_RandomGenerator$LeapableGenerator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.random.RandomGenerator"
};

$Object* allocate$RandomGenerator$LeapableGenerator($Class* clazz) {
	return $of($alloc(RandomGenerator$LeapableGenerator));
}

RandomGenerator$LeapableGenerator* RandomGenerator$LeapableGenerator::of($String* name) {
	$init(RandomGenerator$LeapableGenerator);
	$Objects::requireNonNull(name);
	return $cast(RandomGenerator$LeapableGenerator, $RandomGeneratorFactory::of(name, RandomGenerator$LeapableGenerator::class$));
}

$Stream* RandomGenerator$LeapableGenerator::leaps() {
	$useLocalCurrentObjectStackCache();
	return $cast($Stream, $nc($($Stream::generate(static_cast<$Supplier*>($$new(RandomGenerator$LeapableGenerator$$Lambda$copyAndLeap, this)))))->sequential());
}

$Stream* RandomGenerator$LeapableGenerator::leaps(int64_t streamSize) {
	return $nc($(leaps()))->limit(streamSize);
}

$RandomGenerator$JumpableGenerator* RandomGenerator$LeapableGenerator::copyAndLeap() {
	$var($RandomGenerator$JumpableGenerator, result, copy());
	leap();
	return result;
}

$Class* RandomGenerator$LeapableGenerator::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(RandomGenerator$LeapableGenerator$$Lambda$copyAndLeap::classInfo$.name)) {
			return RandomGenerator$LeapableGenerator$$Lambda$copyAndLeap::load$(name, initialize);
		}
	}
	$loadClass(RandomGenerator$LeapableGenerator, name, initialize, &_RandomGenerator$LeapableGenerator_ClassInfo_, allocate$RandomGenerator$LeapableGenerator);
	return class$;
}

$Class* RandomGenerator$LeapableGenerator::class$ = nullptr;

		} // random
	} // util
} // java