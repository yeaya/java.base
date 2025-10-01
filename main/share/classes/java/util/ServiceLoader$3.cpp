#include <java/util/ServiceLoader$3.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $ServiceLoader = ::java::util::ServiceLoader;
using $ServiceLoader$Provider = ::java::util::ServiceLoader$Provider;

namespace java {
	namespace util {

$FieldInfo _ServiceLoader$3_FieldInfo_[] = {
	{"this$0", "Ljava/util/ServiceLoader;", nullptr, $FINAL | $SYNTHETIC, $field(ServiceLoader$3, this$0)},
	{"expectedReloadCount", "I", nullptr, $FINAL, $field(ServiceLoader$3, expectedReloadCount)},
	{"index", "I", nullptr, 0, $field(ServiceLoader$3, index)},
	{}
};

$MethodInfo _ServiceLoader$3_MethodInfo_[] = {
	{"<init>", "(Ljava/util/ServiceLoader;)V", nullptr, 0, $method(static_cast<void(ServiceLoader$3::*)($ServiceLoader*)>(&ServiceLoader$3::init$))},
	{"checkReloadCount", "()V", nullptr, $PRIVATE, $method(static_cast<void(ServiceLoader$3::*)()>(&ServiceLoader$3::checkReloadCount))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljava/lang/Object;", "()TS;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _ServiceLoader$3_EnclosingMethodInfo_ = {
	"java.util.ServiceLoader",
	"iterator",
	"()Ljava/util/Iterator;"
};

$InnerClassInfo _ServiceLoader$3_InnerClassesInfo_[] = {
	{"java.util.ServiceLoader$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ServiceLoader$3_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.ServiceLoader$3",
	"java.lang.Object",
	"java.util.Iterator",
	_ServiceLoader$3_FieldInfo_,
	_ServiceLoader$3_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<TS;>;",
	&_ServiceLoader$3_EnclosingMethodInfo_,
	_ServiceLoader$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.ServiceLoader"
};

$Object* allocate$ServiceLoader$3($Class* clazz) {
	return $of($alloc(ServiceLoader$3));
}

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
	checkReloadCount();
	$var($Object, next, nullptr);
	if (this->index < $nc(this->this$0->instantiatedProviders)->size()) {
		$assign(next, $nc(this->this$0->instantiatedProviders)->get(this->index));
	} else {
		$assign(next, $nc(($cast($ServiceLoader$Provider, $($nc(this->this$0->lookupIterator1)->next()))))->get());
		$nc(this->this$0->instantiatedProviders)->add(next);
	}
	++this->index;
	return $of(next);
}

ServiceLoader$3::ServiceLoader$3() {
}

$Class* ServiceLoader$3::load$($String* name, bool initialize) {
	$loadClass(ServiceLoader$3, name, initialize, &_ServiceLoader$3_ClassInfo_, allocate$ServiceLoader$3);
	return class$;
}

$Class* ServiceLoader$3::class$ = nullptr;

	} // util
} // java