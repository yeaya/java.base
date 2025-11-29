#include <java/util/ServiceLoader$ProviderImpl$1.h>

#include <java/lang/reflect/Method.h>
#include <java/util/ServiceLoader$ProviderImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Method = ::java::lang::reflect::Method;
using $ServiceLoader$ProviderImpl = ::java::util::ServiceLoader$ProviderImpl;

namespace java {
	namespace util {

$FieldInfo _ServiceLoader$ProviderImpl$1_FieldInfo_[] = {
	{"this$0", "Ljava/util/ServiceLoader$ProviderImpl;", nullptr, $FINAL | $SYNTHETIC, $field(ServiceLoader$ProviderImpl$1, this$0)},
	{}
};

$MethodInfo _ServiceLoader$ProviderImpl$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/ServiceLoader$ProviderImpl;)V", nullptr, 0, $method(static_cast<void(ServiceLoader$ProviderImpl$1::*)($ServiceLoader$ProviderImpl*)>(&ServiceLoader$ProviderImpl$1::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _ServiceLoader$ProviderImpl$1_EnclosingMethodInfo_ = {
	"java.util.ServiceLoader$ProviderImpl",
	"invokeFactoryMethod",
	"()Ljava/lang/Object;"
};

$InnerClassInfo _ServiceLoader$ProviderImpl$1_InnerClassesInfo_[] = {
	{"java.util.ServiceLoader$ProviderImpl", "java.util.ServiceLoader", "ProviderImpl", $PRIVATE | $STATIC},
	{"java.util.ServiceLoader$ProviderImpl$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ServiceLoader$ProviderImpl$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.ServiceLoader$ProviderImpl$1",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	_ServiceLoader$ProviderImpl$1_FieldInfo_,
	_ServiceLoader$ProviderImpl$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/lang/Object;>;",
	&_ServiceLoader$ProviderImpl$1_EnclosingMethodInfo_,
	_ServiceLoader$ProviderImpl$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.ServiceLoader"
};

$Object* allocate$ServiceLoader$ProviderImpl$1($Class* clazz) {
	return $of($alloc(ServiceLoader$ProviderImpl$1));
}

void ServiceLoader$ProviderImpl$1::init$($ServiceLoader$ProviderImpl* this$0) {
	$set(this, this$0, this$0);
}

$Object* ServiceLoader$ProviderImpl$1::run() {
	$beforeCallerSensitive();
	return $of($nc(this->this$0->factoryMethod)->invoke(nullptr, $$new($ObjectArray, 0)));
}

ServiceLoader$ProviderImpl$1::ServiceLoader$ProviderImpl$1() {
}

$Class* ServiceLoader$ProviderImpl$1::load$($String* name, bool initialize) {
	$loadClass(ServiceLoader$ProviderImpl$1, name, initialize, &_ServiceLoader$ProviderImpl$1_ClassInfo_, allocate$ServiceLoader$ProviderImpl$1);
	return class$;
}

$Class* ServiceLoader$ProviderImpl$1::class$ = nullptr;

	} // util
} // java