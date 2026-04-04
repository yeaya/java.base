#include <java/util/ServiceLoader$LazyClassPathLookupIterator$2.h>
#include <java/util/ServiceLoader$LazyClassPathLookupIterator.h>
#include <java/util/ServiceLoader$Provider.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ServiceLoader$LazyClassPathLookupIterator = ::java::util::ServiceLoader$LazyClassPathLookupIterator;

namespace java {
	namespace util {

void ServiceLoader$LazyClassPathLookupIterator$2::init$($ServiceLoader$LazyClassPathLookupIterator* this$1) {
	$set(this, this$1, this$1);
}

$Object* ServiceLoader$LazyClassPathLookupIterator$2::run() {
	return this->this$1->nextService();
}

ServiceLoader$LazyClassPathLookupIterator$2::ServiceLoader$LazyClassPathLookupIterator$2() {
}

$Class* ServiceLoader$LazyClassPathLookupIterator$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Ljava/util/ServiceLoader$LazyClassPathLookupIterator;", nullptr, $FINAL | $SYNTHETIC, $field(ServiceLoader$LazyClassPathLookupIterator$2, this$1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/ServiceLoader$LazyClassPathLookupIterator;)V", nullptr, 0, $method(ServiceLoader$LazyClassPathLookupIterator$2, init$, void, $ServiceLoader$LazyClassPathLookupIterator*)},
		{"run", "()Ljava/util/ServiceLoader$Provider;", "()Ljava/util/ServiceLoader$Provider<TT;>;", $PUBLIC, $virtualMethod(ServiceLoader$LazyClassPathLookupIterator$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.ServiceLoader$LazyClassPathLookupIterator",
		"next",
		"()Ljava/util/ServiceLoader$Provider;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.ServiceLoader$LazyClassPathLookupIterator", "java.util.ServiceLoader", "LazyClassPathLookupIterator", $PRIVATE | $FINAL},
		{"java.util.ServiceLoader$LazyClassPathLookupIterator$2", nullptr, nullptr, 0},
		{"java.util.ServiceLoader$Provider", "java.util.ServiceLoader", "Provider", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.ServiceLoader$LazyClassPathLookupIterator$2",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/util/ServiceLoader$Provider<TT;>;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.ServiceLoader"
	};
	$loadClass(ServiceLoader$LazyClassPathLookupIterator$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ServiceLoader$LazyClassPathLookupIterator$2);
	});
	return class$;
}

$Class* ServiceLoader$LazyClassPathLookupIterator$2::class$ = nullptr;

	} // util
} // java