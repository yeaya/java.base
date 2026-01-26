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

$FieldInfo _ServiceLoader$LazyClassPathLookupIterator$2_FieldInfo_[] = {
	{"this$1", "Ljava/util/ServiceLoader$LazyClassPathLookupIterator;", nullptr, $FINAL | $SYNTHETIC, $field(ServiceLoader$LazyClassPathLookupIterator$2, this$1)},
	{}
};

$MethodInfo _ServiceLoader$LazyClassPathLookupIterator$2_MethodInfo_[] = {
	{"<init>", "(Ljava/util/ServiceLoader$LazyClassPathLookupIterator;)V", nullptr, 0, $method(ServiceLoader$LazyClassPathLookupIterator$2, init$, void, $ServiceLoader$LazyClassPathLookupIterator*)},
	{"run", "()Ljava/util/ServiceLoader$Provider;", "()Ljava/util/ServiceLoader$Provider<TT;>;", $PUBLIC, $virtualMethod(ServiceLoader$LazyClassPathLookupIterator$2, run, $Object*)},
	{}
};

$EnclosingMethodInfo _ServiceLoader$LazyClassPathLookupIterator$2_EnclosingMethodInfo_ = {
	"java.util.ServiceLoader$LazyClassPathLookupIterator",
	"next",
	"()Ljava/util/ServiceLoader$Provider;"
};

$InnerClassInfo _ServiceLoader$LazyClassPathLookupIterator$2_InnerClassesInfo_[] = {
	{"java.util.ServiceLoader$LazyClassPathLookupIterator", "java.util.ServiceLoader", "LazyClassPathLookupIterator", $PRIVATE | $FINAL},
	{"java.util.ServiceLoader$LazyClassPathLookupIterator$2", nullptr, nullptr, 0},
	{"java.util.ServiceLoader$Provider", "java.util.ServiceLoader", "Provider", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ServiceLoader$LazyClassPathLookupIterator$2_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.ServiceLoader$LazyClassPathLookupIterator$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_ServiceLoader$LazyClassPathLookupIterator$2_FieldInfo_,
	_ServiceLoader$LazyClassPathLookupIterator$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/util/ServiceLoader$Provider<TT;>;>;",
	&_ServiceLoader$LazyClassPathLookupIterator$2_EnclosingMethodInfo_,
	_ServiceLoader$LazyClassPathLookupIterator$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.ServiceLoader"
};

$Object* allocate$ServiceLoader$LazyClassPathLookupIterator$2($Class* clazz) {
	return $of($alloc(ServiceLoader$LazyClassPathLookupIterator$2));
}

void ServiceLoader$LazyClassPathLookupIterator$2::init$($ServiceLoader$LazyClassPathLookupIterator* this$1) {
	$set(this, this$1, this$1);
}

$Object* ServiceLoader$LazyClassPathLookupIterator$2::run() {
	return $of(this->this$1->nextService());
}

ServiceLoader$LazyClassPathLookupIterator$2::ServiceLoader$LazyClassPathLookupIterator$2() {
}

$Class* ServiceLoader$LazyClassPathLookupIterator$2::load$($String* name, bool initialize) {
	$loadClass(ServiceLoader$LazyClassPathLookupIterator$2, name, initialize, &_ServiceLoader$LazyClassPathLookupIterator$2_ClassInfo_, allocate$ServiceLoader$LazyClassPathLookupIterator$2);
	return class$;
}

$Class* ServiceLoader$LazyClassPathLookupIterator$2::class$ = nullptr;

	} // util
} // java