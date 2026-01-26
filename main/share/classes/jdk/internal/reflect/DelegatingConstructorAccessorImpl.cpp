#include <jdk/internal/reflect/DelegatingConstructorAccessorImpl.h>

#include <jdk/internal/reflect/ConstructorAccessorImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConstructorAccessorImpl = ::jdk::internal::reflect::ConstructorAccessorImpl;

namespace jdk {
	namespace internal {
		namespace reflect {

$FieldInfo _DelegatingConstructorAccessorImpl_FieldInfo_[] = {
	{"delegate", "Ljdk/internal/reflect/ConstructorAccessorImpl;", nullptr, $PRIVATE, $field(DelegatingConstructorAccessorImpl, delegate)},
	{}
};

$MethodInfo _DelegatingConstructorAccessorImpl_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/reflect/ConstructorAccessorImpl;)V", nullptr, 0, $method(DelegatingConstructorAccessorImpl, init$, void, $ConstructorAccessorImpl*)},
	{"newInstance", "([Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DelegatingConstructorAccessorImpl, newInstance, $Object*, $ObjectArray*), "java.lang.InstantiationException,java.lang.IllegalArgumentException,java.lang.reflect.InvocationTargetException"},
	{"setDelegate", "(Ljdk/internal/reflect/ConstructorAccessorImpl;)V", nullptr, 0, $virtualMethod(DelegatingConstructorAccessorImpl, setDelegate, void, $ConstructorAccessorImpl*)},
	{}
};

$ClassInfo _DelegatingConstructorAccessorImpl_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.reflect.DelegatingConstructorAccessorImpl",
	"jdk.internal.reflect.ConstructorAccessorImpl",
	nullptr,
	_DelegatingConstructorAccessorImpl_FieldInfo_,
	_DelegatingConstructorAccessorImpl_MethodInfo_
};

$Object* allocate$DelegatingConstructorAccessorImpl($Class* clazz) {
	return $of($alloc(DelegatingConstructorAccessorImpl));
}

void DelegatingConstructorAccessorImpl::init$($ConstructorAccessorImpl* delegate) {
	$ConstructorAccessorImpl::init$();
	setDelegate(delegate);
}

$Object* DelegatingConstructorAccessorImpl::newInstance($ObjectArray* args) {
	return $of($nc(this->delegate)->newInstance(args));
}

void DelegatingConstructorAccessorImpl::setDelegate($ConstructorAccessorImpl* delegate) {
	$set(this, delegate, delegate);
}

DelegatingConstructorAccessorImpl::DelegatingConstructorAccessorImpl() {
}

$Class* DelegatingConstructorAccessorImpl::load$($String* name, bool initialize) {
	$loadClass(DelegatingConstructorAccessorImpl, name, initialize, &_DelegatingConstructorAccessorImpl_ClassInfo_, allocate$DelegatingConstructorAccessorImpl);
	return class$;
}

$Class* DelegatingConstructorAccessorImpl::class$ = nullptr;

		} // reflect
	} // internal
} // jdk