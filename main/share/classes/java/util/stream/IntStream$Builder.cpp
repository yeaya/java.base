#include <java/util/stream/IntStream$Builder.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/stream/IntStream.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $IntConsumer = ::java::util::function::IntConsumer;
using $IntStream = ::java::util::stream::IntStream;

namespace java {
	namespace util {
		namespace stream {

$MethodInfo _IntStream$Builder_MethodInfo_[] = {
	{"accept", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"add", "(I)Ljava/util/stream/IntStream$Builder;", nullptr, $PUBLIC},
	{"build", "()Ljava/util/stream/IntStream;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _IntStream$Builder_InnerClassesInfo_[] = {
	{"java.util.stream.IntStream$Builder", "java.util.stream.IntStream", "Builder", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _IntStream$Builder_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.stream.IntStream$Builder",
	nullptr,
	"java.util.function.IntConsumer",
	nullptr,
	_IntStream$Builder_MethodInfo_,
	nullptr,
	nullptr,
	_IntStream$Builder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.IntStream"
};

$Object* allocate$IntStream$Builder($Class* clazz) {
	return $of($alloc(IntStream$Builder));
}

IntStream$Builder* IntStream$Builder::add(int32_t t) {
	accept(t);
	return this;
}

$Class* IntStream$Builder::load$($String* name, bool initialize) {
	$loadClass(IntStream$Builder, name, initialize, &_IntStream$Builder_ClassInfo_, allocate$IntStream$Builder);
	return class$;
}

$Class* IntStream$Builder::class$ = nullptr;

		} // stream
	} // util
} // java