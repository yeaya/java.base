#include <jdk/internal/reflect/ByteVectorFactory.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$MethodInfo _ByteVectorFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ByteVectorFactory::*)()>(&ByteVectorFactory::init$))},
	{"create", "()Ljdk/internal/reflect/ByteVector;", nullptr, $STATIC, $method(static_cast<$ByteVector*(*)()>(&ByteVectorFactory::create))},
	{"create", "(I)Ljdk/internal/reflect/ByteVector;", nullptr, $STATIC, $method(static_cast<$ByteVector*(*)(int32_t)>(&ByteVectorFactory::create))},
	{}
};

$ClassInfo _ByteVectorFactory_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.reflect.ByteVectorFactory",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ByteVectorFactory_MethodInfo_
};

$Object* allocate$ByteVectorFactory($Class* clazz) {
	return $of($alloc(ByteVectorFactory));
}

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
	$loadClass(ByteVectorFactory, name, initialize, &_ByteVectorFactory_ClassInfo_, allocate$ByteVectorFactory);
	return class$;
}

$Class* ByteVectorFactory::class$ = nullptr;

		} // reflect
	} // internal
} // jdk