#include <java/util/function/ObjLongConsumer.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace function {

$CompoundAttribute _ObjLongConsumer_Annotations_[] = {
	{"Ljava/lang/FunctionalInterface;", nullptr},
	{}
};

$MethodInfo _ObjLongConsumer_MethodInfo_[] = {
	{"accept", "(Ljava/lang/Object;J)V", "(TT;J)V", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ObjLongConsumer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.function.ObjLongConsumer",
	nullptr,
	nullptr,
	nullptr,
	_ObjLongConsumer_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	nullptr,
	_ObjLongConsumer_Annotations_
};

$Object* allocate$ObjLongConsumer($Class* clazz) {
	return $of($alloc(ObjLongConsumer));
}

$Class* ObjLongConsumer::load$($String* name, bool initialize) {
	$loadClass(ObjLongConsumer, name, initialize, &_ObjLongConsumer_ClassInfo_, allocate$ObjLongConsumer);
	return class$;
}

$Class* ObjLongConsumer::class$ = nullptr;

		} // function
	} // util
} // java