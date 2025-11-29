#include <java/util/stream/DoubleStream$Builder.h>

#include <java/util/stream/DoubleStream.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace stream {

$MethodInfo _DoubleStream$Builder_MethodInfo_[] = {
	{"accept", "(D)V", nullptr, $PUBLIC | $ABSTRACT},
	{"add", "(D)Ljava/util/stream/DoubleStream$Builder;", nullptr, $PUBLIC},
	{"build", "()Ljava/util/stream/DoubleStream;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _DoubleStream$Builder_InnerClassesInfo_[] = {
	{"java.util.stream.DoubleStream$Builder", "java.util.stream.DoubleStream", "Builder", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _DoubleStream$Builder_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.stream.DoubleStream$Builder",
	nullptr,
	"java.util.function.DoubleConsumer",
	nullptr,
	_DoubleStream$Builder_MethodInfo_,
	nullptr,
	nullptr,
	_DoubleStream$Builder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.DoubleStream"
};

$Object* allocate$DoubleStream$Builder($Class* clazz) {
	return $of($alloc(DoubleStream$Builder));
}

DoubleStream$Builder* DoubleStream$Builder::add(double t) {
	accept(t);
	return this;
}

$Class* DoubleStream$Builder::load$($String* name, bool initialize) {
	$loadClass(DoubleStream$Builder, name, initialize, &_DoubleStream$Builder_ClassInfo_, allocate$DoubleStream$Builder);
	return class$;
}

$Class* DoubleStream$Builder::class$ = nullptr;

		} // stream
	} // util
} // java