#include <java/util/ServiceLoader$ProviderImpl$2.h>
#include <java/lang/reflect/Constructor.h>
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

void ServiceLoader$ProviderImpl$2::init$($ServiceLoader$ProviderImpl* this$0) {
	$set(this, this$0, this$0);
}

$Object* ServiceLoader$ProviderImpl$2::run() {
	$beforeCallerSensitive();
	return $nc(this->this$0->ctor)->newInstance($$new($ObjectArray, 0));
}

ServiceLoader$ProviderImpl$2::ServiceLoader$ProviderImpl$2() {
}

$Class* ServiceLoader$ProviderImpl$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/ServiceLoader$ProviderImpl;", nullptr, $FINAL | $SYNTHETIC, $field(ServiceLoader$ProviderImpl$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/ServiceLoader$ProviderImpl;)V", nullptr, 0, $method(ServiceLoader$ProviderImpl$2, init$, void, $ServiceLoader$ProviderImpl*)},
		{"run", "()Ljava/lang/Object;", "()TS;", $PUBLIC, $virtualMethod(ServiceLoader$ProviderImpl$2, run, $Object*), "java.lang.Exception"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.ServiceLoader$ProviderImpl",
		"newInstance",
		"()Ljava/lang/Object;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.ServiceLoader$ProviderImpl", "java.util.ServiceLoader", "ProviderImpl", $PRIVATE | $STATIC},
		{"java.util.ServiceLoader$ProviderImpl$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.ServiceLoader$ProviderImpl$2",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<TS;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.ServiceLoader"
	};
	$loadClass(ServiceLoader$ProviderImpl$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ServiceLoader$ProviderImpl$2);
	});
	return class$;
}

$Class* ServiceLoader$ProviderImpl$2::class$ = nullptr;

	} // util
} // java