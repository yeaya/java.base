#include <java/util/stream/Stream$Builder.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Stream = ::java::util::stream::Stream;

namespace java {
	namespace util {
		namespace stream {

Stream$Builder* Stream$Builder::add(Object$* t) {
	accept(t);
	return this;
}

$Class* Stream$Builder::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT},
		{"add", "(Ljava/lang/Object;)Ljava/util/stream/Stream$Builder;", "(TT;)Ljava/util/stream/Stream$Builder<TT;>;", $PUBLIC, $virtualMethod(Stream$Builder, add, Stream$Builder*, Object$*)},
		{"build", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<TT;>;", $PUBLIC | $ABSTRACT, $virtualMethod(Stream$Builder, build, $Stream*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.Stream$Builder", "java.util.stream.Stream", "Builder", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.stream.Stream$Builder",
		nullptr,
		"java.util.function.Consumer",
		nullptr,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/function/Consumer<TT;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.stream.Stream"
	};
	$loadClass(Stream$Builder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Stream$Builder);
	});
	return class$;
}

$Class* Stream$Builder::class$ = nullptr;

		} // stream
	} // util
} // java