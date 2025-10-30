#include <java/util/ServiceLoader$LazyClassPathLookupIterator$1.h>

#include <java/util/ServiceLoader$LazyClassPathLookupIterator.h>
#include <jcpp.h>

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ServiceLoader$LazyClassPathLookupIterator = ::java::util::ServiceLoader$LazyClassPathLookupIterator;

namespace java {
	namespace util {

$FieldInfo _ServiceLoader$LazyClassPathLookupIterator$1_FieldInfo_[] = {
	{"this$1", "Ljava/util/ServiceLoader$LazyClassPathLookupIterator;", nullptr, $FINAL | $SYNTHETIC, $field(ServiceLoader$LazyClassPathLookupIterator$1, this$1)},
	{}
};

$MethodInfo _ServiceLoader$LazyClassPathLookupIterator$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/ServiceLoader$LazyClassPathLookupIterator;)V", nullptr, 0, $method(static_cast<void(ServiceLoader$LazyClassPathLookupIterator$1::*)($ServiceLoader$LazyClassPathLookupIterator*)>(&ServiceLoader$LazyClassPathLookupIterator$1::init$))},
	{"run", "()Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ServiceLoader$LazyClassPathLookupIterator$1_EnclosingMethodInfo_ = {
	"java.util.ServiceLoader$LazyClassPathLookupIterator",
	"hasNext",
	"()Z"
};

$InnerClassInfo _ServiceLoader$LazyClassPathLookupIterator$1_InnerClassesInfo_[] = {
	{"java.util.ServiceLoader$LazyClassPathLookupIterator", "java.util.ServiceLoader", "LazyClassPathLookupIterator", $PRIVATE | $FINAL},
	{"java.util.ServiceLoader$LazyClassPathLookupIterator$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ServiceLoader$LazyClassPathLookupIterator$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.ServiceLoader$LazyClassPathLookupIterator$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_ServiceLoader$LazyClassPathLookupIterator$1_FieldInfo_,
	_ServiceLoader$LazyClassPathLookupIterator$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Boolean;>;",
	&_ServiceLoader$LazyClassPathLookupIterator$1_EnclosingMethodInfo_,
	_ServiceLoader$LazyClassPathLookupIterator$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.ServiceLoader"
};

$Object* allocate$ServiceLoader$LazyClassPathLookupIterator$1($Class* clazz) {
	return $of($alloc(ServiceLoader$LazyClassPathLookupIterator$1));
}

void ServiceLoader$LazyClassPathLookupIterator$1::init$($ServiceLoader$LazyClassPathLookupIterator* this$1) {
	$set(this, this$1, this$1);
}

$Object* ServiceLoader$LazyClassPathLookupIterator$1::run() {
	return $of($Boolean::valueOf(this->this$1->hasNextService()));
}

ServiceLoader$LazyClassPathLookupIterator$1::ServiceLoader$LazyClassPathLookupIterator$1() {
}

$Class* ServiceLoader$LazyClassPathLookupIterator$1::load$($String* name, bool initialize) {
	$loadClass(ServiceLoader$LazyClassPathLookupIterator$1, name, initialize, &_ServiceLoader$LazyClassPathLookupIterator$1_ClassInfo_, allocate$ServiceLoader$LazyClassPathLookupIterator$1);
	return class$;
}

$Class* ServiceLoader$LazyClassPathLookupIterator$1::class$ = nullptr;

	} // util
} // java