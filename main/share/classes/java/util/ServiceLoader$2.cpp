#include <java/util/ServiceLoader$2.h>
#include <java/util/Iterator.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/ServiceLoader$Provider.h>
#include <java/util/ServiceLoader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $ServiceLoader = ::java::util::ServiceLoader;
using $ServiceLoader$Provider = ::java::util::ServiceLoader$Provider;

namespace java {
	namespace util {

void ServiceLoader$2::init$($ServiceLoader* this$0, $Iterator* val$first, $Iterator* val$second) {
	$set(this, this$0, this$0);
	$set(this, val$first, val$first);
	$set(this, val$second, val$second);
}

bool ServiceLoader$2::hasNext() {
	bool var$0 = $nc(this->val$first)->hasNext();
	return (var$0 || $nc(this->val$second)->hasNext());
}

$Object* ServiceLoader$2::next() {
	if ($nc(this->val$first)->hasNext()) {
		return $cast($ServiceLoader$Provider, this->val$first->next());
	} else if ($nc(this->val$second)->hasNext()) {
		return $cast($ServiceLoader$Provider, this->val$second->next());
	} else {
		$throwNew($NoSuchElementException);
	}
}

ServiceLoader$2::ServiceLoader$2() {
}

$Class* ServiceLoader$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/ServiceLoader;", nullptr, $FINAL | $SYNTHETIC, $field(ServiceLoader$2, this$0)},
		{"val$second", "Ljava/util/Iterator;", nullptr, $FINAL | $SYNTHETIC, $field(ServiceLoader$2, val$second)},
		{"val$first", "Ljava/util/Iterator;", nullptr, $FINAL | $SYNTHETIC, $field(ServiceLoader$2, val$first)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/ServiceLoader;Ljava/util/Iterator;Ljava/util/Iterator;)V", "()V", 0, $method(ServiceLoader$2, init$, void, $ServiceLoader*, $Iterator*, $Iterator*)},
		{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(ServiceLoader$2, hasNext, bool)},
		{"next", "()Ljava/util/ServiceLoader$Provider;", "()Ljava/util/ServiceLoader$Provider<TS;>;", $PUBLIC, $virtualMethod(ServiceLoader$2, next, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.ServiceLoader",
		"newLookupIterator",
		"()Ljava/util/Iterator;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.ServiceLoader$2", nullptr, nullptr, 0},
		{"java.util.ServiceLoader$Provider", "java.util.ServiceLoader", "Provider", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.ServiceLoader$2",
		"java.lang.Object",
		"java.util.Iterator",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Iterator<Ljava/util/ServiceLoader$Provider<TS;>;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.ServiceLoader"
	};
	$loadClass(ServiceLoader$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ServiceLoader$2);
	});
	return class$;
}

$Class* ServiceLoader$2::class$ = nullptr;

	} // util
} // java