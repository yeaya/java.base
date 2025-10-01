#include <java/util/function/ObjDoubleConsumer.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace function {
$CompoundAttribute _ObjDoubleConsumer_Annotations_[] = {
	{"Ljava/lang/FunctionalInterface;", nullptr},
	{}
};


$MethodInfo _ObjDoubleConsumer_MethodInfo_[] = {
	{"accept", "(Ljava/lang/Object;D)V", "(TT;D)V", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ObjDoubleConsumer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.function.ObjDoubleConsumer",
	nullptr,
	nullptr,
	nullptr,
	_ObjDoubleConsumer_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	nullptr,
	_ObjDoubleConsumer_Annotations_
};

$Object* allocate$ObjDoubleConsumer($Class* clazz) {
	return $of($alloc(ObjDoubleConsumer));
}

$Class* ObjDoubleConsumer::load$($String* name, bool initialize) {
	$loadClass(ObjDoubleConsumer, name, initialize, &_ObjDoubleConsumer_ClassInfo_, allocate$ObjDoubleConsumer);
	return class$;
}

$Class* ObjDoubleConsumer::class$ = nullptr;

		} // function
	} // util
} // java