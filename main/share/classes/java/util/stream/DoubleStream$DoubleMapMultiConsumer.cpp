#include <java/util/stream/DoubleStream$DoubleMapMultiConsumer.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/function/DoubleConsumer.h>
#include <java/util/stream/DoubleStream.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DoubleConsumer = ::java::util::function::DoubleConsumer;
using $DoubleStream = ::java::util::stream::DoubleStream;

namespace java {
	namespace util {
		namespace stream {
$CompoundAttribute _DoubleStream$DoubleMapMultiConsumer_Annotations_[] = {
	{"Ljava/lang/FunctionalInterface;", nullptr},
	{}
};


$MethodInfo _DoubleStream$DoubleMapMultiConsumer_MethodInfo_[] = {
	{"accept", "(DLjava/util/function/DoubleConsumer;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _DoubleStream$DoubleMapMultiConsumer_InnerClassesInfo_[] = {
	{"java.util.stream.DoubleStream$DoubleMapMultiConsumer", "java.util.stream.DoubleStream", "DoubleMapMultiConsumer", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _DoubleStream$DoubleMapMultiConsumer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.stream.DoubleStream$DoubleMapMultiConsumer",
	nullptr,
	nullptr,
	nullptr,
	_DoubleStream$DoubleMapMultiConsumer_MethodInfo_,
	nullptr,
	nullptr,
	_DoubleStream$DoubleMapMultiConsumer_InnerClassesInfo_,
	_DoubleStream$DoubleMapMultiConsumer_Annotations_,
	nullptr,
	nullptr,
	"java.util.stream.DoubleStream"
};

$Object* allocate$DoubleStream$DoubleMapMultiConsumer($Class* clazz) {
	return $of($alloc(DoubleStream$DoubleMapMultiConsumer));
}

$Class* DoubleStream$DoubleMapMultiConsumer::load$($String* name, bool initialize) {
	$loadClass(DoubleStream$DoubleMapMultiConsumer, name, initialize, &_DoubleStream$DoubleMapMultiConsumer_ClassInfo_, allocate$DoubleStream$DoubleMapMultiConsumer);
	return class$;
}

$Class* DoubleStream$DoubleMapMultiConsumer::class$ = nullptr;

		} // stream
	} // util
} // java