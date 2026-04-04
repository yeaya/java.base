#include <java/util/ServiceLoader$3.h>
#include <java/util/ConcurrentModificationException.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/ServiceLoader$Provider.h>
#include <java/util/ServiceLoader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConcurrentModificationException = ::java::util::ConcurrentModificationException;
using $ServiceLoader = ::java::util::ServiceLoader;
using $ServiceLoader$Provider = ::java::util::ServiceLoader$Provider;

namespace java {
	namespace util {

void ServiceLoader$3::init$($ServiceLoader* this$0) {
	$set(this, this$0, this$0);
	this->expectedReloadCount = this->this$0->reloadCount;
}

void ServiceLoader$3::checkReloadCount() {
	if (this->this$0->reloadCount != this->expectedReloadCount) {
		$throwNew($ConcurrentModificationException);
	}
}

bool ServiceLoader$3::hasNext() {
	checkReloadCount();
	if (this->index < $nc(this->this$0->instantiatedProviders)->size()) {
		return true;
	}
	return $nc(this->this$0->lookupIterator1)->hasNext();
}

$Object* ServiceLoader$3::next() {
	$useLocalObjectStack();
	checkReloadCount();
	$var($Object, next, nullptr);
	if (this->index < $nc(this->this$0->instantiatedProviders)->size()) {
		$assign(next, this->this$0->instantiatedProviders->get(this->index));
	} else {
		$assign(next, $$sure($ServiceLoader$Provider, $nc(this->this$0->lookupIterator1)->next())->get());
		this->this$0->instantiatedProviders->add(next);
	}
	++this->index;
	return next;
}

ServiceLoader$3::ServiceLoader$3() {
}

$Class* ServiceLoader$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/ServiceLoader;", nullptr, $FINAL | $SYNTHETIC, $field(ServiceLoader$3, this$0)},
		{"expectedReloadCount", "I", nullptr, $FINAL, $field(ServiceLoader$3, expectedReloadCount)},
		{"index", "I", nullptr, 0, $field(ServiceLoader$3, index)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/ServiceLoader;)V", nullptr, 0, $method(ServiceLoader$3, init$, void, $ServiceLoader*)},
		{"checkReloadCount", "()V", nullptr, $PRIVATE, $method(ServiceLoader$3, checkReloadCount, void)},
		{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(ServiceLoader$3, hasNext, bool)},
		{"next", "()Ljava/lang/Object;", "()TS;", $PUBLIC, $virtualMethod(ServiceLoader$3, next, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.ServiceLoader",
		"iterator",
		"()Ljava/util/Iterator;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.ServiceLoader$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.ServiceLoader$3",
		"java.lang.Object",
		"java.util.Iterator",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Iterator<TS;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.ServiceLoader"
	};
	$loadClass(ServiceLoader$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ServiceLoader$3);
	});
	return class$;
}

$Class* ServiceLoader$3::class$ = nullptr;

	} // util
} // java