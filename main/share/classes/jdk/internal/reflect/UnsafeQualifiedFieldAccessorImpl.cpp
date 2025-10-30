#include <jdk/internal/reflect/UnsafeQualifiedFieldAccessorImpl.h>

#include <java/lang/reflect/Field.h>
#include <jdk/internal/reflect/UnsafeFieldAccessorImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Field = ::java::lang::reflect::Field;
using $UnsafeFieldAccessorImpl = ::jdk::internal::reflect::UnsafeFieldAccessorImpl;

namespace jdk {
	namespace internal {
		namespace reflect {

$FieldInfo _UnsafeQualifiedFieldAccessorImpl_FieldInfo_[] = {
	{"isReadOnly", "Z", nullptr, $PROTECTED | $FINAL, $field(UnsafeQualifiedFieldAccessorImpl, isReadOnly)},
	{}
};

$MethodInfo _UnsafeQualifiedFieldAccessorImpl_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/reflect/Field;Z)V", nullptr, 0, $method(static_cast<void(UnsafeQualifiedFieldAccessorImpl::*)($Field*,bool)>(&UnsafeQualifiedFieldAccessorImpl::init$))},
	{}
};

$ClassInfo _UnsafeQualifiedFieldAccessorImpl_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"jdk.internal.reflect.UnsafeQualifiedFieldAccessorImpl",
	"jdk.internal.reflect.UnsafeFieldAccessorImpl",
	nullptr,
	_UnsafeQualifiedFieldAccessorImpl_FieldInfo_,
	_UnsafeQualifiedFieldAccessorImpl_MethodInfo_
};

$Object* allocate$UnsafeQualifiedFieldAccessorImpl($Class* clazz) {
	return $of($alloc(UnsafeQualifiedFieldAccessorImpl));
}

void UnsafeQualifiedFieldAccessorImpl::init$($Field* field, bool isReadOnly) {
	$UnsafeFieldAccessorImpl::init$(field);
	this->isReadOnly = isReadOnly;
}

UnsafeQualifiedFieldAccessorImpl::UnsafeQualifiedFieldAccessorImpl() {
}

$Class* UnsafeQualifiedFieldAccessorImpl::load$($String* name, bool initialize) {
	$loadClass(UnsafeQualifiedFieldAccessorImpl, name, initialize, &_UnsafeQualifiedFieldAccessorImpl_ClassInfo_, allocate$UnsafeQualifiedFieldAccessorImpl);
	return class$;
}

$Class* UnsafeQualifiedFieldAccessorImpl::class$ = nullptr;

		} // reflect
	} // internal
} // jdk