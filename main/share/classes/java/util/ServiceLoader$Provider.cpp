#include <java/util/ServiceLoader$Provider.h>

#include <java/util/ServiceLoader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {

$MethodInfo _ServiceLoader$Provider_MethodInfo_[] = {
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"type", "()Ljava/lang/Class;", "()Ljava/lang/Class<+TS;>;", $PUBLIC | $ABSTRACT, $virtualMethod(ServiceLoader$Provider, type, $Class*)},
	{}
};

$InnerClassInfo _ServiceLoader$Provider_InnerClassesInfo_[] = {
	{"java.util.ServiceLoader$Provider", "java.util.ServiceLoader", "Provider", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ServiceLoader$Provider_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.ServiceLoader$Provider",
	nullptr,
	"java.util.function.Supplier",
	nullptr,
	_ServiceLoader$Provider_MethodInfo_,
	"<S:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/function/Supplier<TS;>;",
	nullptr,
	_ServiceLoader$Provider_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.ServiceLoader"
};

$Object* allocate$ServiceLoader$Provider($Class* clazz) {
	return $of($alloc(ServiceLoader$Provider));
}

$Class* ServiceLoader$Provider::load$($String* name, bool initialize) {
	$loadClass(ServiceLoader$Provider, name, initialize, &_ServiceLoader$Provider_ClassInfo_, allocate$ServiceLoader$Provider);
	return class$;
}

$Class* ServiceLoader$Provider::class$ = nullptr;

	} // util
} // java