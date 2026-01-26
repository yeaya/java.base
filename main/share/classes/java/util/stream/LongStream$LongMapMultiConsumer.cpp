#include <java/util/stream/LongStream$LongMapMultiConsumer.h>

#include <java/util/function/LongConsumer.h>
#include <java/util/stream/LongStream.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LongConsumer = ::java::util::function::LongConsumer;

namespace java {
	namespace util {
		namespace stream {

$CompoundAttribute _LongStream$LongMapMultiConsumer_Annotations_[] = {
	{"Ljava/lang/FunctionalInterface;", nullptr},
	{}
};

$MethodInfo _LongStream$LongMapMultiConsumer_MethodInfo_[] = {
	{"accept", "(JLjava/util/function/LongConsumer;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LongStream$LongMapMultiConsumer, accept, void, int64_t, $LongConsumer*)},
	{}
};

$InnerClassInfo _LongStream$LongMapMultiConsumer_InnerClassesInfo_[] = {
	{"java.util.stream.LongStream$LongMapMultiConsumer", "java.util.stream.LongStream", "LongMapMultiConsumer", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _LongStream$LongMapMultiConsumer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.stream.LongStream$LongMapMultiConsumer",
	nullptr,
	nullptr,
	nullptr,
	_LongStream$LongMapMultiConsumer_MethodInfo_,
	nullptr,
	nullptr,
	_LongStream$LongMapMultiConsumer_InnerClassesInfo_,
	_LongStream$LongMapMultiConsumer_Annotations_,
	nullptr,
	nullptr,
	"java.util.stream.LongStream"
};

$Object* allocate$LongStream$LongMapMultiConsumer($Class* clazz) {
	return $of($alloc(LongStream$LongMapMultiConsumer));
}

$Class* LongStream$LongMapMultiConsumer::load$($String* name, bool initialize) {
	$loadClass(LongStream$LongMapMultiConsumer, name, initialize, &_LongStream$LongMapMultiConsumer_ClassInfo_, allocate$LongStream$LongMapMultiConsumer);
	return class$;
}

$Class* LongStream$LongMapMultiConsumer::class$ = nullptr;

		} // stream
	} // util
} // java