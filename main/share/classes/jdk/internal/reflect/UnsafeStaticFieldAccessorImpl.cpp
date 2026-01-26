#include <jdk/internal/reflect/UnsafeStaticFieldAccessorImpl.h>

#include <java/lang/reflect/Field.h>
#include <java/util/Set.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jdk/internal/reflect/Reflection.h>
#include <jdk/internal/reflect/UnsafeFieldAccessorImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Field = ::java::lang::reflect::Field;
using $Set = ::java::util::Set;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $Reflection = ::jdk::internal::reflect::Reflection;
using $UnsafeFieldAccessorImpl = ::jdk::internal::reflect::UnsafeFieldAccessorImpl;

namespace jdk {
	namespace internal {
		namespace reflect {

$FieldInfo _UnsafeStaticFieldAccessorImpl_FieldInfo_[] = {
	{"base", "Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $field(UnsafeStaticFieldAccessorImpl, base)},
	{}
};

$MethodInfo _UnsafeStaticFieldAccessorImpl_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/reflect/Field;)V", nullptr, 0, $method(UnsafeStaticFieldAccessorImpl, init$, void, $Field*)},
	{}
};

$ClassInfo _UnsafeStaticFieldAccessorImpl_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"jdk.internal.reflect.UnsafeStaticFieldAccessorImpl",
	"jdk.internal.reflect.UnsafeFieldAccessorImpl",
	nullptr,
	_UnsafeStaticFieldAccessorImpl_FieldInfo_,
	_UnsafeStaticFieldAccessorImpl_MethodInfo_
};

$Object* allocate$UnsafeStaticFieldAccessorImpl($Class* clazz) {
	return $of($alloc(UnsafeStaticFieldAccessorImpl));
}

void UnsafeStaticFieldAccessorImpl::init$($Field* field) {
	$UnsafeFieldAccessorImpl::init$(field);
	$init($UnsafeFieldAccessorImpl);
	$set(this, base, $nc($UnsafeFieldAccessorImpl::unsafe)->staticFieldBase(field));
}

void clinit$UnsafeStaticFieldAccessorImpl($Class* class$) {
	{
		$Reflection::registerFieldsToFilter(UnsafeStaticFieldAccessorImpl::class$, $($Set::of($of("base"_s))));
	}
}

UnsafeStaticFieldAccessorImpl::UnsafeStaticFieldAccessorImpl() {
}

$Class* UnsafeStaticFieldAccessorImpl::load$($String* name, bool initialize) {
	$loadClass(UnsafeStaticFieldAccessorImpl, name, initialize, &_UnsafeStaticFieldAccessorImpl_ClassInfo_, clinit$UnsafeStaticFieldAccessorImpl, allocate$UnsafeStaticFieldAccessorImpl);
	return class$;
}

$Class* UnsafeStaticFieldAccessorImpl::class$ = nullptr;

		} // reflect
	} // internal
} // jdk