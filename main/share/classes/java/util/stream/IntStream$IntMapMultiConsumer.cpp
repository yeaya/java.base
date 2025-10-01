#include <java/util/stream/IntStream$IntMapMultiConsumer.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/function/IntConsumer.h>
#include <java/util/stream/IntStream.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $IntConsumer = ::java::util::function::IntConsumer;
using $IntStream = ::java::util::stream::IntStream;

namespace java {
	namespace util {
		namespace stream {
$CompoundAttribute _IntStream$IntMapMultiConsumer_Annotations_[] = {
	{"Ljava/lang/FunctionalInterface;", nullptr},
	{}
};


$MethodInfo _IntStream$IntMapMultiConsumer_MethodInfo_[] = {
	{"accept", "(ILjava/util/function/IntConsumer;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _IntStream$IntMapMultiConsumer_InnerClassesInfo_[] = {
	{"java.util.stream.IntStream$IntMapMultiConsumer", "java.util.stream.IntStream", "IntMapMultiConsumer", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _IntStream$IntMapMultiConsumer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.stream.IntStream$IntMapMultiConsumer",
	nullptr,
	nullptr,
	nullptr,
	_IntStream$IntMapMultiConsumer_MethodInfo_,
	nullptr,
	nullptr,
	_IntStream$IntMapMultiConsumer_InnerClassesInfo_,
	_IntStream$IntMapMultiConsumer_Annotations_,
	nullptr,
	nullptr,
	"java.util.stream.IntStream"
};

$Object* allocate$IntStream$IntMapMultiConsumer($Class* clazz) {
	return $of($alloc(IntStream$IntMapMultiConsumer));
}

$Class* IntStream$IntMapMultiConsumer::load$($String* name, bool initialize) {
	$loadClass(IntStream$IntMapMultiConsumer, name, initialize, &_IntStream$IntMapMultiConsumer_ClassInfo_, allocate$IntStream$IntMapMultiConsumer);
	return class$;
}

$Class* IntStream$IntMapMultiConsumer::class$ = nullptr;

		} // stream
	} // util
} // java