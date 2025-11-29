#include <java/util/stream/LongStream$Builder.h>

#include <java/util/stream/LongStream.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace stream {

$MethodInfo _LongStream$Builder_MethodInfo_[] = {
	{"accept", "(J)V", nullptr, $PUBLIC | $ABSTRACT},
	{"add", "(J)Ljava/util/stream/LongStream$Builder;", nullptr, $PUBLIC},
	{"build", "()Ljava/util/stream/LongStream;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _LongStream$Builder_InnerClassesInfo_[] = {
	{"java.util.stream.LongStream$Builder", "java.util.stream.LongStream", "Builder", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _LongStream$Builder_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.stream.LongStream$Builder",
	nullptr,
	"java.util.function.LongConsumer",
	nullptr,
	_LongStream$Builder_MethodInfo_,
	nullptr,
	nullptr,
	_LongStream$Builder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.LongStream"
};

$Object* allocate$LongStream$Builder($Class* clazz) {
	return $of($alloc(LongStream$Builder));
}

LongStream$Builder* LongStream$Builder::add(int64_t t) {
	accept(t);
	return this;
}

$Class* LongStream$Builder::load$($String* name, bool initialize) {
	$loadClass(LongStream$Builder, name, initialize, &_LongStream$Builder_ClassInfo_, allocate$LongStream$Builder);
	return class$;
}

$Class* LongStream$Builder::class$ = nullptr;

		} // stream
	} // util
} // java