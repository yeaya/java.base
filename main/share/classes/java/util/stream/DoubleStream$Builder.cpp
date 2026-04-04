#include <java/util/stream/DoubleStream$Builder.h>
#include <java/util/stream/DoubleStream.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DoubleStream = ::java::util::stream::DoubleStream;

namespace java {
	namespace util {
		namespace stream {

DoubleStream$Builder* DoubleStream$Builder::add(double t) {
	accept(t);
	return this;
}

$Class* DoubleStream$Builder::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"accept", "(D)V", nullptr, $PUBLIC | $ABSTRACT},
		{"add", "(D)Ljava/util/stream/DoubleStream$Builder;", nullptr, $PUBLIC, $virtualMethod(DoubleStream$Builder, add, DoubleStream$Builder*, double)},
		{"build", "()Ljava/util/stream/DoubleStream;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DoubleStream$Builder, build, $DoubleStream*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.DoubleStream$Builder", "java.util.stream.DoubleStream", "Builder", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.stream.DoubleStream$Builder",
		nullptr,
		"java.util.function.DoubleConsumer",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.stream.DoubleStream"
	};
	$loadClass(DoubleStream$Builder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DoubleStream$Builder);
	});
	return class$;
}

$Class* DoubleStream$Builder::class$ = nullptr;

		} // stream
	} // util
} // java