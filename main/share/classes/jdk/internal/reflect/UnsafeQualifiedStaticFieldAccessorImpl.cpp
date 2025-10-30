#include <jdk/internal/reflect/UnsafeQualifiedStaticFieldAccessorImpl.h>

#include <java/lang/reflect/Field.h>
#include <jdk/internal/reflect/UnsafeStaticFieldAccessorImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Field = ::java::lang::reflect::Field;
using $UnsafeStaticFieldAccessorImpl = ::jdk::internal::reflect::UnsafeStaticFieldAccessorImpl;

namespace jdk {
	namespace internal {
		namespace reflect {

$FieldInfo _UnsafeQualifiedStaticFieldAccessorImpl_FieldInfo_[] = {
	{"isReadOnly", "Z", nullptr, $PROTECTED | $FINAL, $field(UnsafeQualifiedStaticFieldAccessorImpl, isReadOnly)},
	{}
};

$MethodInfo _UnsafeQualifiedStaticFieldAccessorImpl_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/reflect/Field;Z)V", nullptr, 0, $method(static_cast<void(UnsafeQualifiedStaticFieldAccessorImpl::*)($Field*,bool)>(&UnsafeQualifiedStaticFieldAccessorImpl::init$))},
	{}
};

$ClassInfo _UnsafeQualifiedStaticFieldAccessorImpl_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"jdk.internal.reflect.UnsafeQualifiedStaticFieldAccessorImpl",
	"jdk.internal.reflect.UnsafeStaticFieldAccessorImpl",
	nullptr,
	_UnsafeQualifiedStaticFieldAccessorImpl_FieldInfo_,
	_UnsafeQualifiedStaticFieldAccessorImpl_MethodInfo_
};

$Object* allocate$UnsafeQualifiedStaticFieldAccessorImpl($Class* clazz) {
	return $of($alloc(UnsafeQualifiedStaticFieldAccessorImpl));
}

void UnsafeQualifiedStaticFieldAccessorImpl::init$($Field* field, bool isReadOnly) {
	$UnsafeStaticFieldAccessorImpl::init$(field);
	this->isReadOnly = isReadOnly;
}

UnsafeQualifiedStaticFieldAccessorImpl::UnsafeQualifiedStaticFieldAccessorImpl() {
}

$Class* UnsafeQualifiedStaticFieldAccessorImpl::load$($String* name, bool initialize) {
	$loadClass(UnsafeQualifiedStaticFieldAccessorImpl, name, initialize, &_UnsafeQualifiedStaticFieldAccessorImpl_ClassInfo_, allocate$UnsafeQualifiedStaticFieldAccessorImpl);
	return class$;
}

$Class* UnsafeQualifiedStaticFieldAccessorImpl::class$ = nullptr;

		} // reflect
	} // internal
} // jdk