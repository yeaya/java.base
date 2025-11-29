#include <jdk/internal/reflect/MethodAccessorImpl.h>

#include <jdk/internal/reflect/MagicAccessorImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MagicAccessorImpl = ::jdk::internal::reflect::MagicAccessorImpl;

namespace jdk {
	namespace internal {
		namespace reflect {

$MethodInfo _MethodAccessorImpl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MethodAccessorImpl::*)()>(&MethodAccessorImpl::init$))},
	{"invoke", "(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MethodAccessorImpl_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"jdk.internal.reflect.MethodAccessorImpl",
	"jdk.internal.reflect.MagicAccessorImpl",
	"jdk.internal.reflect.MethodAccessor",
	nullptr,
	_MethodAccessorImpl_MethodInfo_
};

$Object* allocate$MethodAccessorImpl($Class* clazz) {
	return $of($alloc(MethodAccessorImpl));
}

int32_t MethodAccessorImpl::hashCode() {
	 return this->$MagicAccessorImpl::hashCode();
}

bool MethodAccessorImpl::equals(Object$* obj) {
	 return this->$MagicAccessorImpl::equals(obj);
}

$Object* MethodAccessorImpl::clone() {
	 return this->$MagicAccessorImpl::clone();
}

$String* MethodAccessorImpl::toString() {
	 return this->$MagicAccessorImpl::toString();
}

void MethodAccessorImpl::finalize() {
	this->$MagicAccessorImpl::finalize();
}

void MethodAccessorImpl::init$() {
	$MagicAccessorImpl::init$();
}

MethodAccessorImpl::MethodAccessorImpl() {
}

$Class* MethodAccessorImpl::load$($String* name, bool initialize) {
	$loadClass(MethodAccessorImpl, name, initialize, &_MethodAccessorImpl_ClassInfo_, allocate$MethodAccessorImpl);
	return class$;
}

$Class* MethodAccessorImpl::class$ = nullptr;

		} // reflect
	} // internal
} // jdk