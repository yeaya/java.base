#include <java/util/ServiceLoader$1.h>

#include <java/lang/reflect/Constructor.h>
#include <java/util/ServiceLoader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Constructor = ::java::lang::reflect::Constructor;
using $ServiceLoader = ::java::util::ServiceLoader;

namespace java {
	namespace util {

$FieldInfo _ServiceLoader$1_FieldInfo_[] = {
	{"this$0", "Ljava/util/ServiceLoader;", nullptr, $FINAL | $SYNTHETIC, $field(ServiceLoader$1, this$0)},
	{"val$clazz", "Ljava/lang/Class;", nullptr, $FINAL | $SYNTHETIC, $field(ServiceLoader$1, val$clazz)},
	{}
};

$MethodInfo _ServiceLoader$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/ServiceLoader;Ljava/lang/Class;)V", nullptr, 0, $method(ServiceLoader$1, init$, void, $ServiceLoader*, $Class*)},
	{"run", "()Ljava/lang/reflect/Constructor;", "()Ljava/lang/reflect/Constructor<*>;", $PUBLIC, $virtualMethod(ServiceLoader$1, run, $Object*), "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _ServiceLoader$1_EnclosingMethodInfo_ = {
	"java.util.ServiceLoader",
	"getConstructor",
	"(Ljava/lang/Class;)Ljava/lang/reflect/Constructor;"
};

$InnerClassInfo _ServiceLoader$1_InnerClassesInfo_[] = {
	{"java.util.ServiceLoader$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ServiceLoader$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.ServiceLoader$1",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	_ServiceLoader$1_FieldInfo_,
	_ServiceLoader$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/lang/reflect/Constructor<*>;>;",
	&_ServiceLoader$1_EnclosingMethodInfo_,
	_ServiceLoader$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.ServiceLoader"
};

$Object* allocate$ServiceLoader$1($Class* clazz) {
	return $of($alloc(ServiceLoader$1));
}

void ServiceLoader$1::init$($ServiceLoader* this$0, $Class* val$clazz) {
	$set(this, this$0, this$0);
	$set(this, val$clazz, val$clazz);
}

$Object* ServiceLoader$1::run() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($Constructor, ctor, $nc(this->val$clazz)->getConstructor($$new($ClassArray, 0)));
	if (this->this$0->inExplicitModule(this->val$clazz)) {
		$nc(ctor)->setAccessible(true);
	}
	return $of(ctor);
}

ServiceLoader$1::ServiceLoader$1() {
}

$Class* ServiceLoader$1::load$($String* name, bool initialize) {
	$loadClass(ServiceLoader$1, name, initialize, &_ServiceLoader$1_ClassInfo_, allocate$ServiceLoader$1);
	return class$;
}

$Class* ServiceLoader$1::class$ = nullptr;

	} // util
} // java