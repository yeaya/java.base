#include <java/util/random/RandomGenerator$StreamableGenerator.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Objects.h>
#include <java/util/random/RandomGenerator.h>
#include <java/util/random/RandomGeneratorFactory.h>
#include <java/util/stream/Stream.h>
#include <jdk/internal/util/random/RandomSupport.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;
using $RandomGenerator = ::java::util::random::RandomGenerator;
using $RandomGeneratorFactory = ::java::util::random::RandomGeneratorFactory;
using $Stream = ::java::util::stream::Stream;
using $RandomSupport = ::jdk::internal::util::random::RandomSupport;

namespace java {
	namespace util {
		namespace random {

$MethodInfo _RandomGenerator$StreamableGenerator_MethodInfo_[] = {
	{"of", "(Ljava/lang/String;)Ljava/util/random/RandomGenerator$StreamableGenerator;", nullptr, $PUBLIC | $STATIC, $method(static_cast<RandomGenerator$StreamableGenerator*(*)($String*)>(&RandomGenerator$StreamableGenerator::of))},
	{"rngs", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<Ljava/util/random/RandomGenerator;>;", $PUBLIC | $ABSTRACT},
	{"rngs", "(J)Ljava/util/stream/Stream;", "(J)Ljava/util/stream/Stream<Ljava/util/random/RandomGenerator;>;", $PUBLIC},
	{}
};

$InnerClassInfo _RandomGenerator$StreamableGenerator_InnerClassesInfo_[] = {
	{"java.util.random.RandomGenerator$StreamableGenerator", "java.util.random.RandomGenerator", "StreamableGenerator", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _RandomGenerator$StreamableGenerator_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.random.RandomGenerator$StreamableGenerator",
	nullptr,
	"java.util.random.RandomGenerator",
	nullptr,
	_RandomGenerator$StreamableGenerator_MethodInfo_,
	nullptr,
	nullptr,
	_RandomGenerator$StreamableGenerator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.random.RandomGenerator"
};

$Object* allocate$RandomGenerator$StreamableGenerator($Class* clazz) {
	return $of($alloc(RandomGenerator$StreamableGenerator));
}

RandomGenerator$StreamableGenerator* RandomGenerator$StreamableGenerator::of($String* name) {
	$init(RandomGenerator$StreamableGenerator);
	$Objects::requireNonNull(name);
	return $cast(RandomGenerator$StreamableGenerator, $RandomGeneratorFactory::of(name, RandomGenerator$StreamableGenerator::class$));
}

$Stream* RandomGenerator$StreamableGenerator::rngs(int64_t streamSize) {
	$RandomSupport::checkStreamSize(streamSize);
	return $nc($(rngs()))->limit(streamSize);
}

$Class* RandomGenerator$StreamableGenerator::load$($String* name, bool initialize) {
	$loadClass(RandomGenerator$StreamableGenerator, name, initialize, &_RandomGenerator$StreamableGenerator_ClassInfo_, allocate$RandomGenerator$StreamableGenerator);
	return class$;
}

$Class* RandomGenerator$StreamableGenerator::class$ = nullptr;

		} // random
	} // util
} // java