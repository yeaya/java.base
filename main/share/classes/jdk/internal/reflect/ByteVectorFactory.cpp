#include <jdk/internal/reflect/ByteVectorFactory.h>
#include <jdk/internal/reflect/ByteVector.h>
#include <jdk/internal/reflect/ByteVectorImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteVector = ::jdk::internal::reflect::ByteVector;
using $ByteVectorImpl = ::jdk::internal::reflect::ByteVectorImpl;

namespace jdk {
	namespace internal {
		namespace reflect {

void ByteVectorFactory::init$() {
}

$ByteVector* ByteVectorFactory::create() {
	return $new($ByteVectorImpl);
}

$ByteVector* ByteVectorFactory::create(int32_t sz) {
	return $new($ByteVectorImpl, sz);
}

ByteVectorFactory::ByteVectorFactory() {
}

$Class* ByteVectorFactory::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ByteVectorFactory, init$, void)},
		{"create", "()Ljdk/internal/reflect/ByteVector;", nullptr, $STATIC, $staticMethod(ByteVectorFactory, create, $ByteVector*)},
		{"create", "(I)Ljdk/internal/reflect/ByteVector;", nullptr, $STATIC, $staticMethod(ByteVectorFactory, create, $ByteVector*, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.reflect.ByteVectorFactory",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ByteVectorFactory, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ByteVectorFactory);
	});
	return class$;
}

$Class* ByteVectorFactory::class$ = nullptr;

		} // reflect
	} // internal
} // jdk