#include <java/util/ServiceLoader$ProviderImpl$1.h>
#include <java/lang/reflect/Method.h>
#include <java/util/ServiceLoader$ProviderImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ServiceLoader$ProviderImpl = ::java::util::ServiceLoader$ProviderImpl;

namespace java {
	namespace util {

void ServiceLoader$ProviderImpl$1::init$($ServiceLoader$ProviderImpl* this$0) {
	$set(this, this$0, this$0);
}

$Object* ServiceLoader$ProviderImpl$1::run() {
	$beforeCallerSensitive();
	return $nc(this->this$0->factoryMethod)->invoke(nullptr, $$new($ObjectArray, 0));
}

ServiceLoader$ProviderImpl$1::ServiceLoader$ProviderImpl$1() {
}

$Class* ServiceLoader$ProviderImpl$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/ServiceLoader$ProviderImpl;", nullptr, $FINAL | $SYNTHETIC, $field(ServiceLoader$ProviderImpl$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/ServiceLoader$ProviderImpl;)V", nullptr, 0, $method(ServiceLoader$ProviderImpl$1, init$, void, $ServiceLoader$ProviderImpl*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ServiceLoader$ProviderImpl$1, run, $Object*), "java.lang.Exception"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.ServiceLoader$ProviderImpl",
		"invokeFactoryMethod",
		"()Ljava/lang/Object;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.ServiceLoader$ProviderImpl", "java.util.ServiceLoader", "ProviderImpl", $PRIVATE | $STATIC},
		{"java.util.ServiceLoader$ProviderImpl$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.ServiceLoader$ProviderImpl$1",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/lang/Object;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.ServiceLoader"
	};
	$loadClass(ServiceLoader$ProviderImpl$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ServiceLoader$ProviderImpl$1);
	});
	return class$;
}

$Class* ServiceLoader$ProviderImpl$1::class$ = nullptr;

	} // util
} // java