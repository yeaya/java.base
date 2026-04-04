#include <java/util/stream/DoubleStream$DoubleMapMultiConsumer.h>
#include <java/util/function/DoubleConsumer.h>
#include <java/util/stream/DoubleStream.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DoubleConsumer = ::java::util::function::DoubleConsumer;

namespace java {
	namespace util {
		namespace stream {

$Class* DoubleStream$DoubleMapMultiConsumer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"accept", "(DLjava/util/function/DoubleConsumer;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DoubleStream$DoubleMapMultiConsumer, accept, void, double, $DoubleConsumer*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.DoubleStream$DoubleMapMultiConsumer", "java.util.stream.DoubleStream", "DoubleMapMultiConsumer", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/FunctionalInterface;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.stream.DoubleStream$DoubleMapMultiConsumer",
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
		"java.util.stream.DoubleStream"
	};
	$loadClass(DoubleStream$DoubleMapMultiConsumer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DoubleStream$DoubleMapMultiConsumer);
	});
	return class$;
}

$Class* DoubleStream$DoubleMapMultiConsumer::class$ = nullptr;

		} // stream
	} // util
} // java