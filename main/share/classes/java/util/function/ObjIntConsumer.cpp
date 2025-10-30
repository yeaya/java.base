#include <java/util/function/ObjIntConsumer.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace function {

$CompoundAttribute _ObjIntConsumer_Annotations_[] = {
	{"Ljava/lang/FunctionalInterface;", nullptr},
	{}
};

$MethodInfo _ObjIntConsumer_MethodInfo_[] = {
	{"accept", "(Ljava/lang/Object;I)V", "(TT;I)V", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ObjIntConsumer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.function.ObjIntConsumer",
	nullptr,
	nullptr,
	nullptr,
	_ObjIntConsumer_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	nullptr,
	_ObjIntConsumer_Annotations_
};

$Object* allocate$ObjIntConsumer($Class* clazz) {
	return $of($alloc(ObjIntConsumer));
}

$Class* ObjIntConsumer::load$($String* name, bool initialize) {
	$loadClass(ObjIntConsumer, name, initialize, &_ObjIntConsumer_ClassInfo_, allocate$ObjIntConsumer);
	return class$;
}

$Class* ObjIntConsumer::class$ = nullptr;

		} // function
	} // util
} // java