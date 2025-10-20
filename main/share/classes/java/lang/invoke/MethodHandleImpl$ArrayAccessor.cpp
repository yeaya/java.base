#include <java/lang/invoke/MethodHandleImpl$ArrayAccessor.h>

#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassValue.h>
#include <java/lang/Error.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/InternalError.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/InvokerBytecodeGenerator.h>
#include <java/lang/invoke/MemberName.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandleImpl$2.h>
#include <java/lang/invoke/MethodHandleImpl$ArrayAccess.h>
#include <java/lang/invoke/MethodHandleImpl$ArrayAccessor$1.h>
#include <java/lang/invoke/MethodHandleImpl$Intrinsic.h>
#include <java/lang/invoke/MethodHandleImpl.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/invoke/util/Wrapper.h>
#include <jcpp.h>

#undef ARRAY_LENGTH
#undef ARRAY_LOAD
#undef ARRAY_STORE
#undef GET
#undef GETTER_INDEX
#undef IMPL_LOOKUP
#undef INDEX_LIMIT
#undef LENGTH
#undef LENGTH_INDEX
#undef OBJECT_ARRAY_GETTER
#undef OBJECT_ARRAY_LENGTH
#undef OBJECT_ARRAY_SETTER
#undef SET
#undef SETTER_INDEX
#undef TYPE
#undef TYPED_ACCESSORS

using $MethodHandleArray = $Array<::java::lang::invoke::MethodHandle>;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassValue = ::java::lang::ClassValue;
using $Enum = ::java::lang::Enum;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $InvokerBytecodeGenerator = ::java::lang::invoke::InvokerBytecodeGenerator;
using $MemberName = ::java::lang::invoke::MemberName;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandleImpl = ::java::lang::invoke::MethodHandleImpl;
using $MethodHandleImpl$2 = ::java::lang::invoke::MethodHandleImpl$2;
using $MethodHandleImpl$ArrayAccess = ::java::lang::invoke::MethodHandleImpl$ArrayAccess;
using $MethodHandleImpl$ArrayAccessor$1 = ::java::lang::invoke::MethodHandleImpl$ArrayAccessor$1;
using $MethodHandleImpl$Intrinsic = ::java::lang::invoke::MethodHandleImpl$Intrinsic;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Wrapper = ::sun::invoke::util::Wrapper;

namespace java {
	namespace lang {
		namespace invoke {

$FieldInfo _MethodHandleImpl$ArrayAccessor_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(MethodHandleImpl$ArrayAccessor, $assertionsDisabled)},
	{"GETTER_INDEX", "I", nullptr, $STATIC | $FINAL, $constField(MethodHandleImpl$ArrayAccessor, GETTER_INDEX)},
	{"SETTER_INDEX", "I", nullptr, $STATIC | $FINAL, $constField(MethodHandleImpl$ArrayAccessor, SETTER_INDEX)},
	{"LENGTH_INDEX", "I", nullptr, $STATIC | $FINAL, $constField(MethodHandleImpl$ArrayAccessor, LENGTH_INDEX)},
	{"INDEX_LIMIT", "I", nullptr, $STATIC | $FINAL, $constField(MethodHandleImpl$ArrayAccessor, INDEX_LIMIT)},
	{"TYPED_ACCESSORS", "Ljava/lang/ClassValue;", "Ljava/lang/ClassValue<[Ljava/lang/invoke/MethodHandle;>;", $STATIC | $FINAL, $staticField(MethodHandleImpl$ArrayAccessor, TYPED_ACCESSORS)},
	{"OBJECT_ARRAY_GETTER", "Ljava/lang/invoke/MethodHandle;", nullptr, $STATIC | $FINAL, $staticField(MethodHandleImpl$ArrayAccessor, OBJECT_ARRAY_GETTER)},
	{"OBJECT_ARRAY_SETTER", "Ljava/lang/invoke/MethodHandle;", nullptr, $STATIC | $FINAL, $staticField(MethodHandleImpl$ArrayAccessor, OBJECT_ARRAY_SETTER)},
	{"OBJECT_ARRAY_LENGTH", "Ljava/lang/invoke/MethodHandle;", nullptr, $STATIC | $FINAL, $staticField(MethodHandleImpl$ArrayAccessor, OBJECT_ARRAY_LENGTH)},
	{}
};

$MethodInfo _MethodHandleImpl$ArrayAccessor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MethodHandleImpl$ArrayAccessor::*)()>(&MethodHandleImpl$ArrayAccessor::init$))},
	{"correctType", "(Ljava/lang/Class;Ljava/lang/invoke/MethodHandleImpl$ArrayAccess;)Ljava/lang/invoke/MethodType;", "(Ljava/lang/Class<*>;Ljava/lang/invoke/MethodHandleImpl$ArrayAccess;)Ljava/lang/invoke/MethodType;", $STATIC, $method(static_cast<$MethodType*(*)($Class*,$MethodHandleImpl$ArrayAccess*)>(&MethodHandleImpl$ArrayAccessor::correctType))},
	{"getAccessor", "(Ljava/lang/Class;Ljava/lang/invoke/MethodHandleImpl$ArrayAccess;)Ljava/lang/invoke/MethodHandle;", "(Ljava/lang/Class<*>;Ljava/lang/invoke/MethodHandleImpl$ArrayAccess;)Ljava/lang/invoke/MethodHandle;", $STATIC, $method(static_cast<$MethodHandle*(*)($Class*,$MethodHandleImpl$ArrayAccess*)>(&MethodHandleImpl$ArrayAccessor::getAccessor))},
	{"getElementB", "([BI)B", nullptr, $STATIC, $method(static_cast<int8_t(*)($bytes*,int32_t)>(&MethodHandleImpl$ArrayAccessor::getElementB))},
	{"getElementC", "([CI)C", nullptr, $STATIC, $method(static_cast<char16_t(*)($chars*,int32_t)>(&MethodHandleImpl$ArrayAccessor::getElementC))},
	{"getElementD", "([DI)D", nullptr, $STATIC, $method(static_cast<double(*)($doubles*,int32_t)>(&MethodHandleImpl$ArrayAccessor::getElementD))},
	{"getElementF", "([FI)F", nullptr, $STATIC, $method(static_cast<float(*)($floats*,int32_t)>(&MethodHandleImpl$ArrayAccessor::getElementF))},
	{"getElementI", "([II)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($ints*,int32_t)>(&MethodHandleImpl$ArrayAccessor::getElementI))},
	{"getElementJ", "([JI)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($longs*,int32_t)>(&MethodHandleImpl$ArrayAccessor::getElementJ))},
	{"getElementL", "([Ljava/lang/Object;I)Ljava/lang/Object;", nullptr, $STATIC, $method(static_cast<$Object*(*)($ObjectArray*,int32_t)>(&MethodHandleImpl$ArrayAccessor::getElementL))},
	{"getElementS", "([SI)S", nullptr, $STATIC, $method(static_cast<int16_t(*)($shorts*,int32_t)>(&MethodHandleImpl$ArrayAccessor::getElementS))},
	{"getElementZ", "([ZI)Z", nullptr, $STATIC, $method(static_cast<bool(*)($booleans*,int32_t)>(&MethodHandleImpl$ArrayAccessor::getElementZ))},
	{"lengthB", "([B)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($bytes*)>(&MethodHandleImpl$ArrayAccessor::lengthB))},
	{"lengthC", "([C)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($chars*)>(&MethodHandleImpl$ArrayAccessor::lengthC))},
	{"lengthD", "([D)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($doubles*)>(&MethodHandleImpl$ArrayAccessor::lengthD))},
	{"lengthF", "([F)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($floats*)>(&MethodHandleImpl$ArrayAccessor::lengthF))},
	{"lengthI", "([I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($ints*)>(&MethodHandleImpl$ArrayAccessor::lengthI))},
	{"lengthJ", "([J)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($longs*)>(&MethodHandleImpl$ArrayAccessor::lengthJ))},
	{"lengthL", "([Ljava/lang/Object;)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($ObjectArray*)>(&MethodHandleImpl$ArrayAccessor::lengthL))},
	{"lengthS", "([S)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($shorts*)>(&MethodHandleImpl$ArrayAccessor::lengthS))},
	{"lengthZ", "([Z)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($booleans*)>(&MethodHandleImpl$ArrayAccessor::lengthZ))},
	{"name", "(Ljava/lang/Class;Ljava/lang/invoke/MethodHandleImpl$ArrayAccess;)Ljava/lang/String;", "(Ljava/lang/Class<*>;Ljava/lang/invoke/MethodHandleImpl$ArrayAccess;)Ljava/lang/String;", $STATIC, $method(static_cast<$String*(*)($Class*,$MethodHandleImpl$ArrayAccess*)>(&MethodHandleImpl$ArrayAccessor::name))},
	{"setElementB", "([BIB)V", nullptr, $STATIC, $method(static_cast<void(*)($bytes*,int32_t,int8_t)>(&MethodHandleImpl$ArrayAccessor::setElementB))},
	{"setElementC", "([CIC)V", nullptr, $STATIC, $method(static_cast<void(*)($chars*,int32_t,char16_t)>(&MethodHandleImpl$ArrayAccessor::setElementC))},
	{"setElementD", "([DID)V", nullptr, $STATIC, $method(static_cast<void(*)($doubles*,int32_t,double)>(&MethodHandleImpl$ArrayAccessor::setElementD))},
	{"setElementF", "([FIF)V", nullptr, $STATIC, $method(static_cast<void(*)($floats*,int32_t,float)>(&MethodHandleImpl$ArrayAccessor::setElementF))},
	{"setElementI", "([III)V", nullptr, $STATIC, $method(static_cast<void(*)($ints*,int32_t,int32_t)>(&MethodHandleImpl$ArrayAccessor::setElementI))},
	{"setElementJ", "([JIJ)V", nullptr, $STATIC, $method(static_cast<void(*)($longs*,int32_t,int64_t)>(&MethodHandleImpl$ArrayAccessor::setElementJ))},
	{"setElementL", "([Ljava/lang/Object;ILjava/lang/Object;)V", nullptr, $STATIC, $method(static_cast<void(*)($ObjectArray*,int32_t,Object$*)>(&MethodHandleImpl$ArrayAccessor::setElementL))},
	{"setElementS", "([SIS)V", nullptr, $STATIC, $method(static_cast<void(*)($shorts*,int32_t,int16_t)>(&MethodHandleImpl$ArrayAccessor::setElementS))},
	{"setElementZ", "([ZIZ)V", nullptr, $STATIC, $method(static_cast<void(*)($booleans*,int32_t,bool)>(&MethodHandleImpl$ArrayAccessor::setElementZ))},
	{"type", "(Ljava/lang/Class;Ljava/lang/invoke/MethodHandleImpl$ArrayAccess;)Ljava/lang/invoke/MethodType;", "(Ljava/lang/Class<*>;Ljava/lang/invoke/MethodHandleImpl$ArrayAccess;)Ljava/lang/invoke/MethodType;", $STATIC, $method(static_cast<$MethodType*(*)($Class*,$MethodHandleImpl$ArrayAccess*)>(&MethodHandleImpl$ArrayAccessor::type))},
	{}
};

$InnerClassInfo _MethodHandleImpl$ArrayAccessor_InnerClassesInfo_[] = {
	{"java.lang.invoke.MethodHandleImpl$ArrayAccessor", "java.lang.invoke.MethodHandleImpl", "ArrayAccessor", $STATIC | $FINAL},
	{"java.lang.invoke.MethodHandleImpl$ArrayAccessor$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MethodHandleImpl$ArrayAccessor_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.MethodHandleImpl$ArrayAccessor",
	"java.lang.Object",
	nullptr,
	_MethodHandleImpl$ArrayAccessor_FieldInfo_,
	_MethodHandleImpl$ArrayAccessor_MethodInfo_,
	nullptr,
	nullptr,
	_MethodHandleImpl$ArrayAccessor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.MethodHandleImpl"
};

$Object* allocate$MethodHandleImpl$ArrayAccessor($Class* clazz) {
	return $of($alloc(MethodHandleImpl$ArrayAccessor));
}

bool MethodHandleImpl$ArrayAccessor::$assertionsDisabled = false;
$ClassValue* MethodHandleImpl$ArrayAccessor::TYPED_ACCESSORS = nullptr;
$MethodHandle* MethodHandleImpl$ArrayAccessor::OBJECT_ARRAY_GETTER = nullptr;
$MethodHandle* MethodHandleImpl$ArrayAccessor::OBJECT_ARRAY_SETTER = nullptr;
$MethodHandle* MethodHandleImpl$ArrayAccessor::OBJECT_ARRAY_LENGTH = nullptr;

void MethodHandleImpl$ArrayAccessor::init$() {
}

int32_t MethodHandleImpl$ArrayAccessor::getElementI($ints* a, int32_t i) {
	$init(MethodHandleImpl$ArrayAccessor);
	return $nc(a)->get(i);
}

int64_t MethodHandleImpl$ArrayAccessor::getElementJ($longs* a, int32_t i) {
	$init(MethodHandleImpl$ArrayAccessor);
	return $nc(a)->get(i);
}

float MethodHandleImpl$ArrayAccessor::getElementF($floats* a, int32_t i) {
	$init(MethodHandleImpl$ArrayAccessor);
	return $nc(a)->get(i);
}

double MethodHandleImpl$ArrayAccessor::getElementD($doubles* a, int32_t i) {
	$init(MethodHandleImpl$ArrayAccessor);
	return $nc(a)->get(i);
}

bool MethodHandleImpl$ArrayAccessor::getElementZ($booleans* a, int32_t i) {
	$init(MethodHandleImpl$ArrayAccessor);
	return $nc(a)->get(i);
}

int8_t MethodHandleImpl$ArrayAccessor::getElementB($bytes* a, int32_t i) {
	$init(MethodHandleImpl$ArrayAccessor);
	return $nc(a)->get(i);
}

int16_t MethodHandleImpl$ArrayAccessor::getElementS($shorts* a, int32_t i) {
	$init(MethodHandleImpl$ArrayAccessor);
	return $nc(a)->get(i);
}

char16_t MethodHandleImpl$ArrayAccessor::getElementC($chars* a, int32_t i) {
	$init(MethodHandleImpl$ArrayAccessor);
	return $nc(a)->get(i);
}

$Object* MethodHandleImpl$ArrayAccessor::getElementL($ObjectArray* a, int32_t i) {
	$init(MethodHandleImpl$ArrayAccessor);
	return $of($nc(a)->get(i));
}

void MethodHandleImpl$ArrayAccessor::setElementI($ints* a, int32_t i, int32_t x) {
	$init(MethodHandleImpl$ArrayAccessor);
	$nc(a)->set(i, x);
}

void MethodHandleImpl$ArrayAccessor::setElementJ($longs* a, int32_t i, int64_t x) {
	$init(MethodHandleImpl$ArrayAccessor);
	$nc(a)->set(i, x);
}

void MethodHandleImpl$ArrayAccessor::setElementF($floats* a, int32_t i, float x) {
	$init(MethodHandleImpl$ArrayAccessor);
	$nc(a)->set(i, x);
}

void MethodHandleImpl$ArrayAccessor::setElementD($doubles* a, int32_t i, double x) {
	$init(MethodHandleImpl$ArrayAccessor);
	$nc(a)->set(i, x);
}

void MethodHandleImpl$ArrayAccessor::setElementZ($booleans* a, int32_t i, bool x) {
	$init(MethodHandleImpl$ArrayAccessor);
	$nc(a)->set(i, x);
}

void MethodHandleImpl$ArrayAccessor::setElementB($bytes* a, int32_t i, int8_t x) {
	$init(MethodHandleImpl$ArrayAccessor);
	$nc(a)->set(i, x);
}

void MethodHandleImpl$ArrayAccessor::setElementS($shorts* a, int32_t i, int16_t x) {
	$init(MethodHandleImpl$ArrayAccessor);
	$nc(a)->set(i, x);
}

void MethodHandleImpl$ArrayAccessor::setElementC($chars* a, int32_t i, char16_t x) {
	$init(MethodHandleImpl$ArrayAccessor);
	$nc(a)->set(i, x);
}

void MethodHandleImpl$ArrayAccessor::setElementL($ObjectArray* a, int32_t i, Object$* x) {
	$init(MethodHandleImpl$ArrayAccessor);
	$nc(a)->set(i, x);
}

int32_t MethodHandleImpl$ArrayAccessor::lengthI($ints* a) {
	$init(MethodHandleImpl$ArrayAccessor);
	return $nc(a)->length;
}

int32_t MethodHandleImpl$ArrayAccessor::lengthJ($longs* a) {
	$init(MethodHandleImpl$ArrayAccessor);
	return $nc(a)->length;
}

int32_t MethodHandleImpl$ArrayAccessor::lengthF($floats* a) {
	$init(MethodHandleImpl$ArrayAccessor);
	return $nc(a)->length;
}

int32_t MethodHandleImpl$ArrayAccessor::lengthD($doubles* a) {
	$init(MethodHandleImpl$ArrayAccessor);
	return $nc(a)->length;
}

int32_t MethodHandleImpl$ArrayAccessor::lengthZ($booleans* a) {
	$init(MethodHandleImpl$ArrayAccessor);
	return $nc(a)->length;
}

int32_t MethodHandleImpl$ArrayAccessor::lengthB($bytes* a) {
	$init(MethodHandleImpl$ArrayAccessor);
	return $nc(a)->length;
}

int32_t MethodHandleImpl$ArrayAccessor::lengthS($shorts* a) {
	$init(MethodHandleImpl$ArrayAccessor);
	return $nc(a)->length;
}

int32_t MethodHandleImpl$ArrayAccessor::lengthC($chars* a) {
	$init(MethodHandleImpl$ArrayAccessor);
	return $nc(a)->length;
}

int32_t MethodHandleImpl$ArrayAccessor::lengthL($ObjectArray* a) {
	$init(MethodHandleImpl$ArrayAccessor);
	return $nc(a)->length;
}

$String* MethodHandleImpl$ArrayAccessor::name($Class* arrayClass, $MethodHandleImpl$ArrayAccess* access) {
	$init(MethodHandleImpl$ArrayAccessor);
	$useLocalCurrentObjectStackCache();
	$Class* elemClass = $nc(arrayClass)->getComponentType();
	if (elemClass == nullptr) {
		$throw($($MethodHandleStatics::newIllegalArgumentException("not an array"_s, arrayClass)));
	}
	$var($String, var$0, $($MethodHandleImpl$ArrayAccess::opName(access)));
	return $concat(var$0, $$str($Wrapper::basicTypeChar(elemClass)));
}

$MethodType* MethodHandleImpl$ArrayAccessor::type($Class* arrayClass, $MethodHandleImpl$ArrayAccess* access) {
	$init(MethodHandleImpl$ArrayAccessor);
	$useLocalCurrentObjectStackCache();
	$Class* elemClass = $nc(arrayClass)->getComponentType();
	$Class* arrayArgClass = arrayClass;
	if (!$nc(elemClass)->isPrimitive()) {
		$load($ObjectArray);
		arrayArgClass = $getClass($ObjectArray);
		$load($Object);
		elemClass = $Object::class$;
	}
	$init($MethodHandleImpl$2);

	$var($MethodType, var$0, nullptr)
	switch ($nc($MethodHandleImpl$2::$SwitchMap$java$lang$invoke$MethodHandleImpl$ArrayAccess)->get($nc((access))->ordinal())) {
	case 1:
		{
			$init($Integer);
			$assign(var$0, $MethodType::methodType(elemClass, arrayArgClass, $$new($ClassArray, {$Integer::TYPE})));
			break;
		}
	case 2:
		{
			$init($Void);
				$init($Integer);
			$assign(var$0, $MethodType::methodType($Void::TYPE, arrayArgClass, $$new($ClassArray, {
				$Integer::TYPE,
				elemClass
			})));
			break;
		}
	case 3:
		{
			$init($Integer);
			$assign(var$0, $MethodType::methodType($Integer::TYPE, arrayArgClass));
			break;
		}
	default:
		{
			$throw($($MethodHandleImpl::unmatchedArrayAccess(access)));
		}
	}
	return var$0;
}

$MethodType* MethodHandleImpl$ArrayAccessor::correctType($Class* arrayClass, $MethodHandleImpl$ArrayAccess* access) {
	$init(MethodHandleImpl$ArrayAccessor);
	$useLocalCurrentObjectStackCache();
	$Class* elemClass = $nc(arrayClass)->getComponentType();
	$init($MethodHandleImpl$2);

	$var($MethodType, var$0, nullptr)
	switch ($nc($MethodHandleImpl$2::$SwitchMap$java$lang$invoke$MethodHandleImpl$ArrayAccess)->get($nc((access))->ordinal())) {
	case 1:
		{
			$init($Integer);
			$assign(var$0, $MethodType::methodType(elemClass, arrayClass, $$new($ClassArray, {$Integer::TYPE})));
			break;
		}
	case 2:
		{
			$init($Void);
				$init($Integer);
			$assign(var$0, $MethodType::methodType($Void::TYPE, arrayClass, $$new($ClassArray, {
				$Integer::TYPE,
				elemClass
			})));
			break;
		}
	case 3:
		{
			$init($Integer);
			$assign(var$0, $MethodType::methodType($Integer::TYPE, arrayClass));
			break;
		}
	default:
		{
			$throw($($MethodHandleImpl::unmatchedArrayAccess(access)));
		}
	}
	return var$0;
}

$MethodHandle* MethodHandleImpl$ArrayAccessor::getAccessor($Class* arrayClass, $MethodHandleImpl$ArrayAccess* access) {
	$init(MethodHandleImpl$ArrayAccessor);
	$useLocalCurrentObjectStackCache();
	$var($String, name, MethodHandleImpl$ArrayAccessor::name(arrayClass, access));
	$var($MethodType, type, MethodHandleImpl$ArrayAccessor::type(arrayClass, access));
	try {
		$init($MethodHandles$Lookup);
		return $nc($MethodHandles$Lookup::IMPL_LOOKUP)->findStatic(MethodHandleImpl$ArrayAccessor::class$, name, type);
	} catch ($ReflectiveOperationException&) {
		$var($ReflectiveOperationException, ex, $catch());
		$throw($($MethodHandleStatics::uncaughtException(ex)));
	}
	$shouldNotReachHere();
}

void clinit$MethodHandleImpl$ArrayAccessor($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$load($MethodHandleImpl);
	MethodHandleImpl$ArrayAccessor::$assertionsDisabled = !$MethodHandleImpl::class$->desiredAssertionStatus();
	$assignStatic(MethodHandleImpl$ArrayAccessor::TYPED_ACCESSORS, $new($MethodHandleImpl$ArrayAccessor$1));
	{
		$load($ObjectArray);
		$var($MethodHandleArray, cache, $cast($MethodHandleArray, $nc(MethodHandleImpl$ArrayAccessor::TYPED_ACCESSORS)->get($getClass($ObjectArray))));
		$init($MethodHandleImpl$ArrayAccess);
		$init($MethodHandleImpl$Intrinsic);
		$nc(cache)->set(MethodHandleImpl$ArrayAccessor::GETTER_INDEX, $assignStatic(MethodHandleImpl$ArrayAccessor::OBJECT_ARRAY_GETTER, $MethodHandleImpl::makeIntrinsic($(MethodHandleImpl$ArrayAccessor::getAccessor($getClass($ObjectArray), $MethodHandleImpl$ArrayAccess::GET)), $MethodHandleImpl$Intrinsic::ARRAY_LOAD)));
		cache->set(MethodHandleImpl$ArrayAccessor::SETTER_INDEX, $assignStatic(MethodHandleImpl$ArrayAccessor::OBJECT_ARRAY_SETTER, $MethodHandleImpl::makeIntrinsic($(MethodHandleImpl$ArrayAccessor::getAccessor($getClass($ObjectArray), $MethodHandleImpl$ArrayAccess::SET)), $MethodHandleImpl$Intrinsic::ARRAY_STORE)));
		cache->set(MethodHandleImpl$ArrayAccessor::LENGTH_INDEX, $assignStatic(MethodHandleImpl$ArrayAccessor::OBJECT_ARRAY_LENGTH, $MethodHandleImpl::makeIntrinsic($(MethodHandleImpl$ArrayAccessor::getAccessor($getClass($ObjectArray), $MethodHandleImpl$ArrayAccess::LENGTH)), $MethodHandleImpl$Intrinsic::ARRAY_LENGTH)));
		if (!MethodHandleImpl$ArrayAccessor::$assertionsDisabled && !($InvokerBytecodeGenerator::isStaticallyInvocable($($nc(MethodHandleImpl$ArrayAccessor::OBJECT_ARRAY_GETTER)->internalMemberName())))) {
			$throwNew($AssertionError);
		}
		if (!MethodHandleImpl$ArrayAccessor::$assertionsDisabled && !($InvokerBytecodeGenerator::isStaticallyInvocable($($nc(MethodHandleImpl$ArrayAccessor::OBJECT_ARRAY_SETTER)->internalMemberName())))) {
			$throwNew($AssertionError);
		}
		if (!MethodHandleImpl$ArrayAccessor::$assertionsDisabled && !($InvokerBytecodeGenerator::isStaticallyInvocable($($nc(MethodHandleImpl$ArrayAccessor::OBJECT_ARRAY_LENGTH)->internalMemberName())))) {
			$throwNew($AssertionError);
		}
	}
}

MethodHandleImpl$ArrayAccessor::MethodHandleImpl$ArrayAccessor() {
}

$Class* MethodHandleImpl$ArrayAccessor::load$($String* name, bool initialize) {
	$loadClass(MethodHandleImpl$ArrayAccessor, name, initialize, &_MethodHandleImpl$ArrayAccessor_ClassInfo_, clinit$MethodHandleImpl$ArrayAccessor, allocate$MethodHandleImpl$ArrayAccessor);
	return class$;
}

$Class* MethodHandleImpl$ArrayAccessor::class$ = nullptr;

		} // invoke
	} // lang
} // java