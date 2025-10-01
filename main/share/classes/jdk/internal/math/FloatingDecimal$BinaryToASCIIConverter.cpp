#include <jdk/internal/math/FloatingDecimal$BinaryToASCIIConverter.h>

#include <java/lang/Appendable.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/math/FloatingDecimal.h>
#include <jcpp.h>

using $Appendable = ::java::lang::Appendable;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FloatingDecimal = ::jdk::internal::math::FloatingDecimal;

namespace jdk {
	namespace internal {
		namespace math {

$MethodInfo _FloatingDecimal$BinaryToASCIIConverter_MethodInfo_[] = {
	{"appendTo", "(Ljava/lang/Appendable;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"decimalDigitsExact", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"digitsRoundedUp", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getDecimalExponent", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getDigits", "([C)I", nullptr, $PUBLIC | $ABSTRACT},
	{"isExceptional", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isNegative", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"toJavaFormatString", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _FloatingDecimal$BinaryToASCIIConverter_InnerClassesInfo_[] = {
	{"jdk.internal.math.FloatingDecimal$BinaryToASCIIConverter", "jdk.internal.math.FloatingDecimal", "BinaryToASCIIConverter", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _FloatingDecimal$BinaryToASCIIConverter_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.math.FloatingDecimal$BinaryToASCIIConverter",
	nullptr,
	nullptr,
	nullptr,
	_FloatingDecimal$BinaryToASCIIConverter_MethodInfo_,
	nullptr,
	nullptr,
	_FloatingDecimal$BinaryToASCIIConverter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.math.FloatingDecimal"
};

$Object* allocate$FloatingDecimal$BinaryToASCIIConverter($Class* clazz) {
	return $of($alloc(FloatingDecimal$BinaryToASCIIConverter));
}

$Class* FloatingDecimal$BinaryToASCIIConverter::load$($String* name, bool initialize) {
	$loadClass(FloatingDecimal$BinaryToASCIIConverter, name, initialize, &_FloatingDecimal$BinaryToASCIIConverter_ClassInfo_, allocate$FloatingDecimal$BinaryToASCIIConverter);
	return class$;
}

$Class* FloatingDecimal$BinaryToASCIIConverter::class$ = nullptr;

		} // math
	} // internal
} // jdk