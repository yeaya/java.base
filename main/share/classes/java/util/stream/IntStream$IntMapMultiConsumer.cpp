#include <java/util/stream/IntStream$IntMapMultiConsumer.h>
#include <java/util/function/IntConsumer.h>
#include <java/util/stream/IntStream.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $IntConsumer = ::java::util::function::IntConsumer;

namespace java {
	namespace util {
		namespace stream {

$Class* IntStream$IntMapMultiConsumer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"accept", "(ILjava/util/function/IntConsumer;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IntStream$IntMapMultiConsumer, accept, void, int32_t, $IntConsumer*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.IntStream$IntMapMultiConsumer", "java.util.stream.IntStream", "IntMapMultiConsumer", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/FunctionalInterface;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.stream.IntStream$IntMapMultiConsumer",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		nullptr,
		"java.util.stream.IntStream"
	};
	$loadClass(IntStream$IntMapMultiConsumer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IntStream$IntMapMultiConsumer);
	});
	return class$;
}

$Class* IntStream$IntMapMultiConsumer::class$ = nullptr;

		} // stream
	} // util
} // java