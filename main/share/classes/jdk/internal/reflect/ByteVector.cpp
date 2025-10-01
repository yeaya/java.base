#include <jdk/internal/reflect/ByteVector.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace reflect {

$MethodInfo _ByteVector_MethodInfo_[] = {
	{"add", "(B)V", nullptr, $PUBLIC | $ABSTRACT},
	{"get", "(I)B", nullptr, $PUBLIC | $ABSTRACT},
	{"getData", "()[B", nullptr, $PUBLIC | $ABSTRACT},
	{"getLength", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"put", "(IB)V", nullptr, $PUBLIC | $ABSTRACT},
	{"trim", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ByteVector_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"jdk.internal.reflect.ByteVector",
	nullptr,
	nullptr,
	nullptr,
	_ByteVector_MethodInfo_
};

$Object* allocate$ByteVector($Class* clazz) {
	return $of($alloc(ByteVector));
}

$Class* ByteVector::load$($String* name, bool initialize) {
	$loadClass(ByteVector, name, initialize, &_ByteVector_ClassInfo_, allocate$ByteVector);
	return class$;
}

$Class* ByteVector::class$ = nullptr;

		} // reflect
	} // internal
} // jdk