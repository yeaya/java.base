#include <java/util/stream/IntStream$Builder.h>
#include <java/util/stream/IntStream.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $IntStream = ::java::util::stream::IntStream;

namespace java {
	namespace util {
		namespace stream {

IntStream$Builder* IntStream$Builder::add(int32_t t) {
	accept(t);
	return this;
}

$Class* IntStream$Builder::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"accept", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
		{"add", "(I)Ljava/util/stream/IntStream$Builder;", nullptr, $PUBLIC, $virtualMethod(IntStream$Builder, add, IntStream$Builder*, int32_t)},
		{"build", "()Ljava/util/stream/IntStream;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IntStream$Builder, build, $IntStream*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.IntStream$Builder", "java.util.stream.IntStream", "Builder", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.stream.IntStream$Builder",
		nullptr,
		"java.util.function.IntConsumer",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.stream.IntStream"
	};
	$loadClass(IntStream$Builder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IntStream$Builder);
	});
	return class$;
}

$Class* IntStream$Builder::class$ = nullptr;

		} // stream
	} // util
} // java