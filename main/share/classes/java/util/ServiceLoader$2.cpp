#include <java/util/ServiceLoader$2.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _ServiceLoader$2_FieldInfo_[] = {
	{"this$0", "Ljava/util/ServiceLoader;", nullptr, $FINAL | $SYNTHETIC, $field(ServiceLoader$2, this$0)},
	{"val$second", "Ljava/util/Iterator;", nullptr, $FINAL | $SYNTHETIC, $field(ServiceLoader$2, val$second)},
	{"val$first", "Ljava/util/Iterator;", nullptr, $FINAL | $SYNTHETIC, $field(ServiceLoader$2, val$first)},
	{}
};

$MethodInfo _ServiceLoader$2_MethodInfo_[] = {
	{"<init>", "(Ljava/util/ServiceLoader;Ljava/util/Iterator;Ljava/util/Iterator;)V", "()V", 0, $method(static_cast<void(ServiceLoader$2::*)($ServiceLoader*,$Iterator*,$Iterator*)>(&ServiceLoader$2::init$))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljava/util/ServiceLoader$Provider;", "()Ljava/util/ServiceLoader$Provider<TS;>;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _ServiceLoader$2_EnclosingMethodInfo_ = {
	"java.util.ServiceLoader",
	"newLookupIterator",
	"()Ljava/util/Iterator;"
};

$InnerClassInfo _ServiceLoader$2_InnerClassesInfo_[] = {
	{"java.util.ServiceLoader$2", nullptr, nullptr, 0},
	{"java.util.ServiceLoader$Provider", "java.util.ServiceLoader", "Provider", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ServiceLoader$2_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.ServiceLoader$2",
	"java.lang.Object",
	"java.util.Iterator",
	_ServiceLoader$2_FieldInfo_,
	_ServiceLoader$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<Ljava/util/ServiceLoader$Provider<TS;>;>;",
	&_ServiceLoader$2_EnclosingMethodInfo_,
	_ServiceLoader$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.ServiceLoader"
};

$Object* allocate$ServiceLoader$2($Class* clazz) {
	return $of($alloc(ServiceLoader$2));
}

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
		return $of($cast($ServiceLoader$Provider, $nc(this->val$first)->next()));
	} else if ($nc(this->val$second)->hasNext()) {
		return $of($cast($ServiceLoader$Provider, $nc(this->val$second)->next()));
	} else {
		$throwNew($NoSuchElementException);
	}
}

ServiceLoader$2::ServiceLoader$2() {
}

$Class* ServiceLoader$2::load$($String* name, bool initialize) {
	$loadClass(ServiceLoader$2, name, initialize, &_ServiceLoader$2_ClassInfo_, allocate$ServiceLoader$2);
	return class$;
}

$Class* ServiceLoader$2::class$ = nullptr;

	} // util
} // java