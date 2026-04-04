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

void UnsafeQualifiedStaticFieldAccessorImpl::init$($Field* field, bool isReadOnly) {
	$UnsafeStaticFieldAccessorImpl::init$(field);
	this->isReadOnly = isReadOnly;
}

UnsafeQualifiedStaticFieldAccessorImpl::UnsafeQualifiedStaticFieldAccessorImpl() {
}

$Class* UnsafeQualifiedStaticFieldAccessorImpl::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"isReadOnly", "Z", nullptr, $PROTECTED | $FINAL, $field(UnsafeQualifiedStaticFieldAccessorImpl, isReadOnly)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/reflect/Field;Z)V", nullptr, 0, $method(UnsafeQualifiedStaticFieldAccessorImpl, init$, void, $Field*, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"jdk.internal.reflect.UnsafeQualifiedStaticFieldAccessorImpl",
		"jdk.internal.reflect.UnsafeStaticFieldAccessorImpl",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(UnsafeQualifiedStaticFieldAccessorImpl, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(UnsafeQualifiedStaticFieldAccessorImpl));
	});
	return class$;
}

$Class* UnsafeQualifiedStaticFieldAccessorImpl::class$ = nullptr;

		} // reflect
	} // internal
} // jdk