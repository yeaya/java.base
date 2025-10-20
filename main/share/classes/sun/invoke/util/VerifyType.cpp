#include <sun/invoke/util/VerifyType.h>

#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/TypeDescriptor$OfField.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/invoke/empty/Empty.h>
#include <sun/invoke/util/Wrapper.h>
#include <jcpp.h>

#undef TYPE

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $MethodType = ::java::lang::invoke::MethodType;
using $Empty = ::sun::invoke::empty::Empty;
using $Wrapper = ::sun::invoke::util::Wrapper;

namespace sun {
	namespace invoke {
		namespace util {

$FieldInfo _VerifyType_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(VerifyType, $assertionsDisabled)},
	{}
};

$MethodInfo _VerifyType_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(VerifyType::*)()>(&VerifyType::init$))},
	{"canPassUnchecked", "(Ljava/lang/Class;Ljava/lang/Class;)I", "(Ljava/lang/Class<*>;Ljava/lang/Class<*>;)I", $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($Class*,$Class*)>(&VerifyType::canPassUnchecked))},
	{"isNullConversion", "(Ljava/lang/Class;Ljava/lang/Class;Z)Z", "(Ljava/lang/Class<*>;Ljava/lang/Class<*>;Z)Z", $PUBLIC | $STATIC, $method(static_cast<bool(*)($Class*,$Class*,bool)>(&VerifyType::isNullConversion))},
	{"isNullConversion", "(Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Z)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($MethodType*,$MethodType*,bool)>(&VerifyType::isNullConversion))},
	{"isNullReferenceConversion", "(Ljava/lang/Class;Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;Ljava/lang/Class<*>;)Z", $PUBLIC | $STATIC, $method(static_cast<bool(*)($Class*,$Class*)>(&VerifyType::isNullReferenceConversion))},
	{"isNullType", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;)Z", $PUBLIC | $STATIC, $method(static_cast<bool(*)($Class*)>(&VerifyType::isNullType))},
	{"isSpreadArgType", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;)Z", $PUBLIC | $STATIC, $method(static_cast<bool(*)($Class*)>(&VerifyType::isSpreadArgType))},
	{"spreadArgElementType", "(Ljava/lang/Class;I)Ljava/lang/Class;", "(Ljava/lang/Class<*>;I)Ljava/lang/Class<*>;", $PUBLIC | $STATIC, $method(static_cast<$Class*(*)($Class*,int32_t)>(&VerifyType::spreadArgElementType))},
	{}
};

$ClassInfo _VerifyType_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.invoke.util.VerifyType",
	"java.lang.Object",
	nullptr,
	_VerifyType_FieldInfo_,
	_VerifyType_MethodInfo_
};

$Object* allocate$VerifyType($Class* clazz) {
	return $of($alloc(VerifyType));
}

bool VerifyType::$assertionsDisabled = false;

void VerifyType::init$() {
}

bool VerifyType::isNullConversion($Class* src, $Class* dst, bool keepInterfaces) {
	$init(VerifyType);
	if (src == dst) {
		return true;
	}
	if (!keepInterfaces) {
		if ($nc(dst)->isInterface()) {
			$load($Object);
			dst = $Object::class$;
		}
		if ($nc(src)->isInterface()) {
			$load($Object);
			src = $Object::class$;
		}
		if (src == dst) {
			return true;
		}
	}
	if (isNullType(src)) {
		return !$nc(dst)->isPrimitive();
	}
	if (!$nc(src)->isPrimitive()) {
		return $nc(dst)->isAssignableFrom(src);
	}
	if (!$nc(dst)->isPrimitive()) {
		return false;
	}
	$Wrapper* sw = $Wrapper::forPrimitiveType(src);
	$init($Integer);
	if (dst == $Integer::TYPE) {
		return $nc(sw)->isSubwordOrInt();
	}
	$Wrapper* dw = $Wrapper::forPrimitiveType(dst);
	if (!$nc(sw)->isSubwordOrInt()) {
		return false;
	}
	if (!$nc(dw)->isSubwordOrInt()) {
		return false;
	}
	bool var$0 = !$nc(dw)->isSigned();
	if (var$0 && $nc(sw)->isSigned()) {
		return false;
	}
	int32_t var$1 = $nc(dw)->bitWidth();
	return var$1 > $nc(sw)->bitWidth();
}

bool VerifyType::isNullReferenceConversion($Class* src, $Class* dst) {
	$init(VerifyType);
	if (!VerifyType::$assertionsDisabled && !(!$nc(dst)->isPrimitive())) {
		$throwNew($AssertionError);
	}
	if ($nc(dst)->isInterface()) {
		return true;
	}
	if (isNullType(src)) {
		return true;
	}
	return $nc(dst)->isAssignableFrom(src);
}

bool VerifyType::isNullType($Class* type) {
	$init(VerifyType);
	$load($Void);
	if (type == $Void::class$) {
		return true;
	}
	$load($Empty);
	if (type == $Empty::class$) {
		return true;
	}
	return false;
}

bool VerifyType::isNullConversion($MethodType* call, $MethodType* recv, bool keepInterfaces) {
	$init(VerifyType);
	$useLocalCurrentObjectStackCache();
	if (call == recv) {
		return true;
	}
	int32_t len = $nc(call)->parameterCount();
	if (len != $nc(recv)->parameterCount()) {
		return false;
	}
	for (int32_t i = 0; i < len; ++i) {
		$Class* var$0 = $cast($Class, call->parameterType(i));
		if (!isNullConversion(var$0, $($cast($Class, $nc(recv)->parameterType(i))), keepInterfaces)) {
			return false;
		}
	}
	$Class* var$1 = $cast($Class, $nc(recv)->returnType());
	return isNullConversion(var$1, $($cast($Class, call->returnType())), keepInterfaces);
}

int32_t VerifyType::canPassUnchecked($Class* src, $Class* dst) {
	$init(VerifyType);
	if (src == dst) {
		return 1;
	}
	if ($nc(dst)->isPrimitive()) {
		$init($Void);
		if (dst == $Void::TYPE) {
			return 1;
		}
		if (src == $Void::TYPE) {
			return 0;
		}
		if (!$nc(src)->isPrimitive()) {
			return 0;
		}
		$Wrapper* sw = $Wrapper::forPrimitiveType(src);
		$Wrapper* dw = $Wrapper::forPrimitiveType(dst);
		bool var$0 = $nc(sw)->isSubwordOrInt();
		if (var$0 && $nc(dw)->isSubwordOrInt()) {
			int32_t var$1 = sw->bitWidth();
			if (var$1 >= dw->bitWidth()) {
				return -1;
			}
			bool var$2 = !dw->isSigned();
			if (var$2 && sw->isSigned()) {
				return -1;
			}
			return 1;
		}
		$init($Float);
		if (src == $Float::TYPE || dst == $Float::TYPE) {
			$init($Double);
			if (src == $Double::TYPE || dst == $Double::TYPE) {
				return -1;
			} else {
				return 0;
			}
		} else {
			return 0;
		}
	} else if ($nc(src)->isPrimitive()) {
		return 0;
	}
	if (isNullReferenceConversion(src, dst)) {
		return 1;
	}
	return -1;
}

bool VerifyType::isSpreadArgType($Class* spreadArg) {
	$init(VerifyType);
	return $nc(spreadArg)->isArray();
}

$Class* VerifyType::spreadArgElementType($Class* spreadArg, int32_t i) {
	$init(VerifyType);
	return $nc(spreadArg)->getComponentType();
}

void clinit$VerifyType($Class* class$) {
	VerifyType::$assertionsDisabled = !VerifyType::class$->desiredAssertionStatus();
}

VerifyType::VerifyType() {
}

$Class* VerifyType::load$($String* name, bool initialize) {
	$loadClass(VerifyType, name, initialize, &_VerifyType_ClassInfo_, clinit$VerifyType, allocate$VerifyType);
	return class$;
}

$Class* VerifyType::class$ = nullptr;

		} // util
	} // invoke
} // sun