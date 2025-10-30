#include <java/util/ServiceLoader$ProviderImpl$2.h>

#include <java/lang/reflect/Constructor.h>
#include <java/util/ServiceLoader$ProviderImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Constructor = ::java::lang::reflect::Constructor;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $ServiceLoader$ProviderImpl = ::java::util::ServiceLoader$ProviderImpl;

namespace java {
	namespace util {

$FieldInfo _ServiceLoader$ProviderImpl$2_FieldInfo_[] = {
	{"this$0", "Ljava/util/ServiceLoader$ProviderImpl;", nullptr, $FINAL | $SYNTHETIC, $field(ServiceLoader$ProviderImpl$2, this$0)},
	{}
};

$MethodInfo _ServiceLoader$ProviderImpl$2_MethodInfo_[] = {
	{"<init>", "(Ljava/util/ServiceLoader$ProviderImpl;)V", nullptr, 0, $method(static_cast<void(ServiceLoader$ProviderImpl$2::*)($ServiceLoader$ProviderImpl*)>(&ServiceLoader$ProviderImpl$2::init$))},
	{"run", "()Ljava/lang/Object;", "()TS;", $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _ServiceLoader$ProviderImpl$2_EnclosingMethodInfo_ = {
	"java.util.ServiceLoader$ProviderImpl",
	"newInstance",
	"()Ljava/lang/Object;"
};

$InnerClassInfo _ServiceLoader$ProviderImpl$2_InnerClassesInfo_[] = {
	{"java.util.ServiceLoader$ProviderImpl", "java.util.ServiceLoader", "ProviderImpl", $PRIVATE | $STATIC},
	{"java.util.ServiceLoader$ProviderImpl$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ServiceLoader$ProviderImpl$2_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.ServiceLoader$ProviderImpl$2",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	_ServiceLoader$ProviderImpl$2_FieldInfo_,
	_ServiceLoader$ProviderImpl$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<TS;>;",
	&_ServiceLoader$ProviderImpl$2_EnclosingMethodInfo_,
	_ServiceLoader$ProviderImpl$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.ServiceLoader"
};

$Object* allocate$ServiceLoader$ProviderImpl$2($Class* clazz) {
	return $of($alloc(ServiceLoader$ProviderImpl$2));
}

void ServiceLoader$ProviderImpl$2::init$($ServiceLoader$ProviderImpl* this$0) {
	$set(this, this$0, this$0);
}

$Object* ServiceLoader$ProviderImpl$2::run() {
	$beforeCallerSensitive();
	return $of($nc(this->this$0->ctor)->newInstance($$new($ObjectArray, 0)));
}

ServiceLoader$ProviderImpl$2::ServiceLoader$ProviderImpl$2() {
}

$Class* ServiceLoader$ProviderImpl$2::load$($String* name, bool initialize) {
	$loadClass(ServiceLoader$ProviderImpl$2, name, initialize, &_ServiceLoader$ProviderImpl$2_ClassInfo_, allocate$ServiceLoader$ProviderImpl$2);
	return class$;
}

$Class* ServiceLoader$ProviderImpl$2::class$ = nullptr;

	} // util
} // java