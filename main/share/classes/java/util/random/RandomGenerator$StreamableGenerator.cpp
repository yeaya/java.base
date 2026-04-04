#include <java/util/random/RandomGenerator$StreamableGenerator.h>
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
using $RandomGeneratorFactory = ::java::util::random::RandomGeneratorFactory;
using $Stream = ::java::util::stream::Stream;
using $RandomSupport = ::jdk::internal::util::random::RandomSupport;

namespace java {
	namespace util {
		namespace random {

RandomGenerator$StreamableGenerator* RandomGenerator$StreamableGenerator::of($String* name) {
	$init(RandomGenerator$StreamableGenerator);
	$Objects::requireNonNull(name);
	return $cast(RandomGenerator$StreamableGenerator, $RandomGeneratorFactory::of(name, RandomGenerator$StreamableGenerator::class$));
}

$Stream* RandomGenerator$StreamableGenerator::rngs(int64_t streamSize) {
	$RandomSupport::checkStreamSize(streamSize);
	return $$nc(rngs())->limit(streamSize);
}

$Class* RandomGenerator$StreamableGenerator::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"of", "(Ljava/lang/String;)Ljava/util/random/RandomGenerator$StreamableGenerator;", nullptr, $PUBLIC | $STATIC, $staticMethod(RandomGenerator$StreamableGenerator, of, RandomGenerator$StreamableGenerator*, $String*)},
		{"rngs", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<Ljava/util/random/RandomGenerator;>;", $PUBLIC | $ABSTRACT, $virtualMethod(RandomGenerator$StreamableGenerator, rngs, $Stream*)},
		{"rngs", "(J)Ljava/util/stream/Stream;", "(J)Ljava/util/stream/Stream<Ljava/util/random/RandomGenerator;>;", $PUBLIC, $virtualMethod(RandomGenerator$StreamableGenerator, rngs, $Stream*, int64_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.random.RandomGenerator$StreamableGenerator", "java.util.random.RandomGenerator", "StreamableGenerator", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.random.RandomGenerator$StreamableGenerator",
		nullptr,
		"java.util.random.RandomGenerator",
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
	$loadClass(RandomGenerator$StreamableGenerator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RandomGenerator$StreamableGenerator);
	});
	return class$;
}

$Class* RandomGenerator$StreamableGenerator::class$ = nullptr;

		} // random
	} // util
} // java