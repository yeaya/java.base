#include <java/util/random/RandomGenerator$SplittableGenerator.h>

#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Objects.h>
#include <java/util/function/Function.h>
#include <java/util/random/RandomGenerator$StreamableGenerator.h>
#include <java/util/random/RandomGenerator.h>
#include <java/util/random/RandomGeneratorFactory.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Objects = ::java::util::Objects;
using $Function = ::java::util::function::Function;
using $RandomGenerator = ::java::util::random::RandomGenerator;
using $RandomGenerator$StreamableGenerator = ::java::util::random::RandomGenerator$StreamableGenerator;
using $RandomGeneratorFactory = ::java::util::random::RandomGeneratorFactory;
using $Stream = ::java::util::stream::Stream;

namespace java {
	namespace util {
		namespace random {

class RandomGenerator$SplittableGenerator$$Lambda$lambda$rngs$0 : public $Function {
	$class(RandomGenerator$SplittableGenerator$$Lambda$lambda$rngs$0, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* x) override {
		 return $of(RandomGenerator$SplittableGenerator::lambda$rngs$0($cast(RandomGenerator$SplittableGenerator, x)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<RandomGenerator$SplittableGenerator$$Lambda$lambda$rngs$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo RandomGenerator$SplittableGenerator$$Lambda$lambda$rngs$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(RandomGenerator$SplittableGenerator$$Lambda$lambda$rngs$0::*)()>(&RandomGenerator$SplittableGenerator$$Lambda$lambda$rngs$0::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo RandomGenerator$SplittableGenerator$$Lambda$lambda$rngs$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.random.RandomGenerator$SplittableGenerator$$Lambda$lambda$rngs$0",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* RandomGenerator$SplittableGenerator$$Lambda$lambda$rngs$0::load$($String* name, bool initialize) {
	$loadClass(RandomGenerator$SplittableGenerator$$Lambda$lambda$rngs$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* RandomGenerator$SplittableGenerator$$Lambda$lambda$rngs$0::class$ = nullptr;

$MethodInfo _RandomGenerator$SplittableGenerator_MethodInfo_[] = {
	{"lambda$rngs$0", "(Ljava/util/random/RandomGenerator$SplittableGenerator;)Ljava/util/random/RandomGenerator;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$RandomGenerator*(*)(RandomGenerator$SplittableGenerator*)>(&RandomGenerator$SplittableGenerator::lambda$rngs$0))},
	{"of", "(Ljava/lang/String;)Ljava/util/random/RandomGenerator$SplittableGenerator;", nullptr, $PUBLIC | $STATIC, $method(static_cast<RandomGenerator$SplittableGenerator*(*)($String*)>(&RandomGenerator$SplittableGenerator::of))},
	{"rngs", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<Ljava/util/random/RandomGenerator;>;", $PUBLIC},
	{"rngs", "(J)Ljava/util/stream/Stream;", "(J)Ljava/util/stream/Stream<Ljava/util/random/RandomGenerator;>;", $PUBLIC},
	{"split", "()Ljava/util/random/RandomGenerator$SplittableGenerator;", nullptr, $PUBLIC | $ABSTRACT},
	{"split", "(Ljava/util/random/RandomGenerator$SplittableGenerator;)Ljava/util/random/RandomGenerator$SplittableGenerator;", nullptr, $PUBLIC | $ABSTRACT},
	{"splits", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<Ljava/util/random/RandomGenerator$SplittableGenerator;>;", $PUBLIC},
	{"splits", "(J)Ljava/util/stream/Stream;", "(J)Ljava/util/stream/Stream<Ljava/util/random/RandomGenerator$SplittableGenerator;>;", $PUBLIC | $ABSTRACT},
	{"splits", "(Ljava/util/random/RandomGenerator$SplittableGenerator;)Ljava/util/stream/Stream;", "(Ljava/util/random/RandomGenerator$SplittableGenerator;)Ljava/util/stream/Stream<Ljava/util/random/RandomGenerator$SplittableGenerator;>;", $PUBLIC | $ABSTRACT},
	{"splits", "(JLjava/util/random/RandomGenerator$SplittableGenerator;)Ljava/util/stream/Stream;", "(JLjava/util/random/RandomGenerator$SplittableGenerator;)Ljava/util/stream/Stream<Ljava/util/random/RandomGenerator$SplittableGenerator;>;", $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _RandomGenerator$SplittableGenerator_InnerClassesInfo_[] = {
	{"java.util.random.RandomGenerator$SplittableGenerator", "java.util.random.RandomGenerator", "SplittableGenerator", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.random.RandomGenerator$StreamableGenerator", "java.util.random.RandomGenerator", "StreamableGenerator", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _RandomGenerator$SplittableGenerator_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.random.RandomGenerator$SplittableGenerator",
	nullptr,
	"java.util.random.RandomGenerator$StreamableGenerator",
	nullptr,
	_RandomGenerator$SplittableGenerator_MethodInfo_,
	nullptr,
	nullptr,
	_RandomGenerator$SplittableGenerator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.random.RandomGenerator"
};

$Object* allocate$RandomGenerator$SplittableGenerator($Class* clazz) {
	return $of($alloc(RandomGenerator$SplittableGenerator));
}

RandomGenerator$SplittableGenerator* RandomGenerator$SplittableGenerator::of($String* name) {
	$init(RandomGenerator$SplittableGenerator);
	$Objects::requireNonNull(name);
	return $cast(RandomGenerator$SplittableGenerator, $RandomGeneratorFactory::of(name, RandomGenerator$SplittableGenerator::class$));
}

$Stream* RandomGenerator$SplittableGenerator::splits() {
	return this->splits(this);
}

$Stream* RandomGenerator$SplittableGenerator::rngs() {
	$useLocalCurrentObjectStackCache();
	return $nc($(this->splits()))->map(static_cast<$Function*>($$new(RandomGenerator$SplittableGenerator$$Lambda$lambda$rngs$0)));
}

$Stream* RandomGenerator$SplittableGenerator::rngs(int64_t streamSize) {
	$useLocalCurrentObjectStackCache();
	return $nc($(this->splits(streamSize)))->map(static_cast<$Function*>($$new(RandomGenerator$SplittableGenerator$$Lambda$lambda$rngs$0)));
}

$RandomGenerator* RandomGenerator$SplittableGenerator::lambda$rngs$0(RandomGenerator$SplittableGenerator* x) {
	$init(RandomGenerator$SplittableGenerator);
	return x;
}

$Class* RandomGenerator$SplittableGenerator::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(RandomGenerator$SplittableGenerator$$Lambda$lambda$rngs$0::classInfo$.name)) {
			return RandomGenerator$SplittableGenerator$$Lambda$lambda$rngs$0::load$(name, initialize);
		}
	}
	$loadClass(RandomGenerator$SplittableGenerator, name, initialize, &_RandomGenerator$SplittableGenerator_ClassInfo_, allocate$RandomGenerator$SplittableGenerator);
	return class$;
}

$Class* RandomGenerator$SplittableGenerator::class$ = nullptr;

		} // random
	} // util
} // java