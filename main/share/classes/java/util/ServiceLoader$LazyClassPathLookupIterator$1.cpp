#include <java/util/ServiceLoader$LazyClassPathLookupIterator$1.h>
#include <java/util/ServiceLoader$LazyClassPathLookupIterator.h>
#include <jcpp.h>

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ServiceLoader$LazyClassPathLookupIterator = ::java::util::ServiceLoader$LazyClassPathLookupIterator;

namespace java {
	namespace util {

void ServiceLoader$LazyClassPathLookupIterator$1::init$($ServiceLoader$LazyClassPathLookupIterator* this$1) {
	$set(this, this$1, this$1);
}

$Object* ServiceLoader$LazyClassPathLookupIterator$1::run() {
	return $of($Boolean::valueOf(this->this$1->hasNextService()));
}

ServiceLoader$LazyClassPathLookupIterator$1::ServiceLoader$LazyClassPathLookupIterator$1() {
}

$Class* ServiceLoader$LazyClassPathLookupIterator$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Ljava/util/ServiceLoader$LazyClassPathLookupIterator;", nullptr, $FINAL | $SYNTHETIC, $field(ServiceLoader$LazyClassPathLookupIterator$1, this$1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/ServiceLoader$LazyClassPathLookupIterator;)V", nullptr, 0, $method(ServiceLoader$LazyClassPathLookupIterator$1, init$, void, $ServiceLoader$LazyClassPathLookupIterator*)},
		{"run", "()Ljava/lang/Boolean;", nullptr, $PUBLIC, $virtualMethod(ServiceLoader$LazyClassPathLookupIterator$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.ServiceLoader$LazyClassPathLookupIterator",
		"hasNext",
		"()Z"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.ServiceLoader$LazyClassPathLookupIterator", "java.util.ServiceLoader", "LazyClassPathLookupIterator", $PRIVATE | $FINAL},
		{"java.util.ServiceLoader$LazyClassPathLookupIterator$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.ServiceLoader$LazyClassPathLookupIterator$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Boolean;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.ServiceLoader"
	};
	$loadClass(ServiceLoader$LazyClassPathLookupIterator$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ServiceLoader$LazyClassPathLookupIterator$1);
	});
	return class$;
}

$Class* ServiceLoader$LazyClassPathLookupIterator$1::class$ = nullptr;

	} // util
} // java