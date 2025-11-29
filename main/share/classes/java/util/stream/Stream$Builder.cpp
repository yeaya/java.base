#include <java/util/stream/Stream$Builder.h>

#include <java/util/stream/Stream.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace stream {

$MethodInfo _Stream$Builder_MethodInfo_[] = {
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"add", "(Ljava/lang/Object;)Ljava/util/stream/Stream$Builder;", "(TT;)Ljava/util/stream/Stream$Builder<TT;>;", $PUBLIC},
	{"build", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<TT;>;", $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _Stream$Builder_InnerClassesInfo_[] = {
	{"java.util.stream.Stream$Builder", "java.util.stream.Stream", "Builder", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Stream$Builder_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.stream.Stream$Builder",
	nullptr,
	"java.util.function.Consumer",
	nullptr,
	_Stream$Builder_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/function/Consumer<TT;>;",
	nullptr,
	_Stream$Builder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.Stream"
};

$Object* allocate$Stream$Builder($Class* clazz) {
	return $of($alloc(Stream$Builder));
}

Stream$Builder* Stream$Builder::add(Object$* t) {
	accept(t);
	return this;
}

$Class* Stream$Builder::load$($String* name, bool initialize) {
	$loadClass(Stream$Builder, name, initialize, &_Stream$Builder_ClassInfo_, allocate$Stream$Builder);
	return class$;
}

$Class* Stream$Builder::class$ = nullptr;

		} // stream
	} // util
} // java