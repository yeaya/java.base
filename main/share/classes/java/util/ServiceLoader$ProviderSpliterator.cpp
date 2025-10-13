#include <java/util/ServiceLoader$ProviderSpliterator.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/ConcurrentModificationException.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/ServiceLoader$Provider.h>
#include <java/util/ServiceLoader.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef ORDERED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConcurrentModificationException = ::java::util::ConcurrentModificationException;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $ServiceLoader = ::java::util::ServiceLoader;
using $ServiceLoader$Provider = ::java::util::ServiceLoader$Provider;
using $Spliterator = ::java::util::Spliterator;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {

$FieldInfo _ServiceLoader$ProviderSpliterator_FieldInfo_[] = {
	{"this$0", "Ljava/util/ServiceLoader;", nullptr, $FINAL | $SYNTHETIC, $field(ServiceLoader$ProviderSpliterator, this$0)},
	{"expectedReloadCount", "I", nullptr, $FINAL, $field(ServiceLoader$ProviderSpliterator, expectedReloadCount)},
	{"iterator", "Ljava/util/Iterator;", "Ljava/util/Iterator<Ljava/util/ServiceLoader$Provider<TT;>;>;", $FINAL, $field(ServiceLoader$ProviderSpliterator, iterator)},
	{"index", "I", nullptr, 0, $field(ServiceLoader$ProviderSpliterator, index)},
	{}
};

$MethodInfo _ServiceLoader$ProviderSpliterator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/ServiceLoader;Ljava/util/Iterator;)V", "(Ljava/util/Iterator<Ljava/util/ServiceLoader$Provider<TT;>;>;)V", 0, $method(static_cast<void(ServiceLoader$ProviderSpliterator::*)($ServiceLoader*,$Iterator*)>(&ServiceLoader$ProviderSpliterator::init$))},
	{"characteristics", "()I", nullptr, $PUBLIC},
	{"estimateSize", "()J", nullptr, $PUBLIC},
	{"tryAdvance", "(Ljava/util/function/Consumer;)Z", "(Ljava/util/function/Consumer<-Ljava/util/ServiceLoader$Provider<TT;>;>;)Z", $PUBLIC},
	{"trySplit", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<Ljava/util/ServiceLoader$Provider<TT;>;>;", $PUBLIC},
	{}
};

$InnerClassInfo _ServiceLoader$ProviderSpliterator_InnerClassesInfo_[] = {
	{"java.util.ServiceLoader$ProviderSpliterator", "java.util.ServiceLoader", "ProviderSpliterator", $PRIVATE},
	{"java.util.ServiceLoader$Provider", "java.util.ServiceLoader", "Provider", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ServiceLoader$ProviderSpliterator_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.ServiceLoader$ProviderSpliterator",
	"java.lang.Object",
	"java.util.Spliterator",
	_ServiceLoader$ProviderSpliterator_FieldInfo_,
	_ServiceLoader$ProviderSpliterator_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Spliterator<Ljava/util/ServiceLoader$Provider<TT;>;>;",
	nullptr,
	_ServiceLoader$ProviderSpliterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.ServiceLoader"
};

$Object* allocate$ServiceLoader$ProviderSpliterator($Class* clazz) {
	return $of($alloc(ServiceLoader$ProviderSpliterator));
}

void ServiceLoader$ProviderSpliterator::init$($ServiceLoader* this$0, $Iterator* iterator) {
	$set(this, this$0, this$0);
	this->expectedReloadCount = this->this$0->reloadCount;
	$set(this, iterator, iterator);
}

$Spliterator* ServiceLoader$ProviderSpliterator::trySplit() {
	return nullptr;
}

bool ServiceLoader$ProviderSpliterator::tryAdvance($Consumer* action) {
	if (this->this$0->reloadCount != this->expectedReloadCount) {
		$throwNew($ConcurrentModificationException);
	}
	$var($ServiceLoader$Provider, next, nullptr);
	if (this->index < $nc(this->this$0->loadedProviders)->size()) {
		$assign(next, $cast($ServiceLoader$Provider, $nc(this->this$0->loadedProviders)->get(this->index++)));
	} else if ($nc(this->iterator)->hasNext()) {
		$assign(next, $cast($ServiceLoader$Provider, $nc(this->iterator)->next()));
		$nc(this->this$0->loadedProviders)->add(next);
		++this->index;
	} else {
		this->this$0->loadedAllProviders = true;
	}
	if (next != nullptr) {
		$nc(action)->accept(next);
		return true;
	} else {
		return false;
	}
}

int32_t ServiceLoader$ProviderSpliterator::characteristics() {
	return $Spliterator::ORDERED;
}

int64_t ServiceLoader$ProviderSpliterator::estimateSize() {
	return $Long::MAX_VALUE;
}

ServiceLoader$ProviderSpliterator::ServiceLoader$ProviderSpliterator() {
}

$Class* ServiceLoader$ProviderSpliterator::load$($String* name, bool initialize) {
	$loadClass(ServiceLoader$ProviderSpliterator, name, initialize, &_ServiceLoader$ProviderSpliterator_ClassInfo_, allocate$ServiceLoader$ProviderSpliterator);
	return class$;
}

$Class* ServiceLoader$ProviderSpliterator::class$ = nullptr;

	} // util
} // java