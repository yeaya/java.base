#include <jdk/internal/loader/ClassLoaderValue.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Objects.h>
#include <jdk/internal/loader/AbstractClassLoaderValue.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;
using $AbstractClassLoaderValue = ::jdk::internal::loader::AbstractClassLoaderValue;

namespace jdk {
	namespace internal {
		namespace loader {

$MethodInfo _ClassLoaderValue_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ClassLoaderValue::*)()>(&ClassLoaderValue::init$))},
	{"isEqualOrDescendantOf", "(Ljdk/internal/loader/AbstractClassLoaderValue;)Z", "(Ljdk/internal/loader/AbstractClassLoaderValue<*TV;>;)Z", $PUBLIC},
	{"key", "()Ljdk/internal/loader/ClassLoaderValue;", "()Ljdk/internal/loader/ClassLoaderValue<TV;>;", $PUBLIC},
	{}
};

$ClassInfo _ClassLoaderValue_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"jdk.internal.loader.ClassLoaderValue",
	"jdk.internal.loader.AbstractClassLoaderValue",
	nullptr,
	nullptr,
	_ClassLoaderValue_MethodInfo_,
	"<V:Ljava/lang/Object;>Ljdk/internal/loader/AbstractClassLoaderValue<Ljdk/internal/loader/ClassLoaderValue<TV;>;TV;>;"
};

$Object* allocate$ClassLoaderValue($Class* clazz) {
	return $of($alloc(ClassLoaderValue));
}

void ClassLoaderValue::init$() {
	$AbstractClassLoaderValue::init$();
}

ClassLoaderValue* ClassLoaderValue::key() {
	return this;
}

bool ClassLoaderValue::isEqualOrDescendantOf($AbstractClassLoaderValue* clv) {
	return equals($Objects::requireNonNull(clv));
}

ClassLoaderValue::ClassLoaderValue() {
}

$Class* ClassLoaderValue::load$($String* name, bool initialize) {
	$loadClass(ClassLoaderValue, name, initialize, &_ClassLoaderValue_ClassInfo_, allocate$ClassLoaderValue);
	return class$;
}

$Class* ClassLoaderValue::class$ = nullptr;

		} // loader
	} // internal
} // jdk