#include <java/util/stream/LongStream$LongMapMultiConsumer.h>
#include <java/util/function/LongConsumer.h>
#include <java/util/stream/LongStream.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LongConsumer = ::java::util::function::LongConsumer;

namespace java {
	namespace util {
		namespace stream {

$Class* LongStream$LongMapMultiConsumer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"accept", "(JLjava/util/function/LongConsumer;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LongStream$LongMapMultiConsumer, accept, void, int64_t, $LongConsumer*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.LongStream$LongMapMultiConsumer", "java.util.stream.LongStream", "LongMapMultiConsumer", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/FunctionalInterface;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.stream.LongStream$LongMapMultiConsumer",
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
		"java.util.stream.LongStream"
	};
	$loadClass(LongStream$LongMapMultiConsumer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LongStream$LongMapMultiConsumer);
	});
	return class$;
}

$Class* LongStream$LongMapMultiConsumer::class$ = nullptr;

		} // stream
	} // util
} // java