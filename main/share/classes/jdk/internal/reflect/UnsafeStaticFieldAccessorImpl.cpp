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
using $Reflection = ::jdk::internal::reflect::Reflection;
using $UnsafeFieldAccessorImpl = ::jdk::internal::reflect::UnsafeFieldAccessorImpl;

namespace jdk {
	namespace internal {
		namespace reflect {

void UnsafeStaticFieldAccessorImpl::init$($Field* field) {
	$UnsafeFieldAccessorImpl::init$(field);
	$init($UnsafeFieldAccessorImpl);
	$set(this, base, $nc($UnsafeFieldAccessorImpl::unsafe)->staticFieldBase(field));
}

void UnsafeStaticFieldAccessorImpl::clinit$($Class* clazz) {
	{
		$Reflection::registerFieldsToFilter(UnsafeStaticFieldAccessorImpl::class$, $($Set::of("base"_s)));
	}
}

UnsafeStaticFieldAccessorImpl::UnsafeStaticFieldAccessorImpl() {
}

$Class* UnsafeStaticFieldAccessorImpl::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"base", "Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $field(UnsafeStaticFieldAccessorImpl, base)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/reflect/Field;)V", nullptr, 0, $method(UnsafeStaticFieldAccessorImpl, init$, void, $Field*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"jdk.internal.reflect.UnsafeStaticFieldAccessorImpl",
		"jdk.internal.reflect.UnsafeFieldAccessorImpl",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(UnsafeStaticFieldAccessorImpl, name, initialize, &classInfo$$, UnsafeStaticFieldAccessorImpl::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(UnsafeStaticFieldAccessorImpl));
	});
	return class$;
}

$Class* UnsafeStaticFieldAccessorImpl::class$ = nullptr;

		} // reflect
	} // internal
} // jdk