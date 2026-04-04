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

void UnsafeQualifiedFieldAccessorImpl::init$($Field* field, bool isReadOnly) {
	$UnsafeFieldAccessorImpl::init$(field);
	this->isReadOnly = isReadOnly;
}

UnsafeQualifiedFieldAccessorImpl::UnsafeQualifiedFieldAccessorImpl() {
}

$Class* UnsafeQualifiedFieldAccessorImpl::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"isReadOnly", "Z", nullptr, $PROTECTED | $FINAL, $field(UnsafeQualifiedFieldAccessorImpl, isReadOnly)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/reflect/Field;Z)V", nullptr, 0, $method(UnsafeQualifiedFieldAccessorImpl, init$, void, $Field*, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"jdk.internal.reflect.UnsafeQualifiedFieldAccessorImpl",
		"jdk.internal.reflect.UnsafeFieldAccessorImpl",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(UnsafeQualifiedFieldAccessorImpl, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(UnsafeQualifiedFieldAccessorImpl));
	});
	return class$;
}

$Class* UnsafeQualifiedFieldAccessorImpl::class$ = nullptr;

		} // reflect
	} // internal
} // jdk