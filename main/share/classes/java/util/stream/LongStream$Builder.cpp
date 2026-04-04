#include <java/util/stream/LongStream$Builder.h>
#include <java/util/stream/LongStream.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LongStream = ::java::util::stream::LongStream;

namespace java {
	namespace util {
		namespace stream {

LongStream$Builder* LongStream$Builder::add(int64_t t) {
	accept(t);
	return this;
}

$Class* LongStream$Builder::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"accept", "(J)V", nullptr, $PUBLIC | $ABSTRACT},
		{"add", "(J)Ljava/util/stream/LongStream$Builder;", nullptr, $PUBLIC, $virtualMethod(LongStream$Builder, add, LongStream$Builder*, int64_t)},
		{"build", "()Ljava/util/stream/LongStream;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LongStream$Builder, build, $LongStream*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.LongStream$Builder", "java.util.stream.LongStream", "Builder", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.stream.LongStream$Builder",
		nullptr,
		"java.util.function.LongConsumer",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.stream.LongStream"
	};
	$loadClass(LongStream$Builder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LongStream$Builder);
	});
	return class$;
}

$Class* LongStream$Builder::class$ = nullptr;

		} // stream
	} // util
} // java