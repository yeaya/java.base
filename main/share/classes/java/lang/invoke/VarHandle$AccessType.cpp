#include <java/lang/invoke/VarHandle$AccessType.h>

#include <java/lang/AssertionError.h>
#include <java/lang/Enum.h>
#include <java/lang/InternalError.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/VarHandle$2.h>
#include <java/lang/invoke/VarHandle.h>
#include <jcpp.h>

#undef COMPARE_AND_EXCHANGE
#undef COMPARE_AND_SET
#undef COUNT
#undef GET
#undef GET_AND_UPDATE
#undef SET
#undef TYPE

using $VarHandle$AccessTypeArray = $Array<::java::lang::invoke::VarHandle$AccessType>;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $MethodType = ::java::lang::invoke::MethodType;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $VarHandle$2 = ::java::lang::invoke::VarHandle$2;

namespace java {
	namespace lang {
		namespace invoke {

$FieldInfo _VarHandle$AccessType_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(VarHandle$AccessType, $assertionsDisabled)},
	{"GET", "Ljava/lang/invoke/VarHandle$AccessType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(VarHandle$AccessType, GET)},
	{"SET", "Ljava/lang/invoke/VarHandle$AccessType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(VarHandle$AccessType, SET)},
	{"COMPARE_AND_SET", "Ljava/lang/invoke/VarHandle$AccessType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(VarHandle$AccessType, COMPARE_AND_SET)},
	{"COMPARE_AND_EXCHANGE", "Ljava/lang/invoke/VarHandle$AccessType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(VarHandle$AccessType, COMPARE_AND_EXCHANGE)},
	{"GET_AND_UPDATE", "Ljava/lang/invoke/VarHandle$AccessType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(VarHandle$AccessType, GET_AND_UPDATE)},
	{"$VALUES", "[Ljava/lang/invoke/VarHandle$AccessType;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(VarHandle$AccessType, $VALUES)},
	{"COUNT", "I", nullptr, $STATIC | $FINAL, $staticField(VarHandle$AccessType, COUNT)},
	{"returnType", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $FINAL, $field(VarHandle$AccessType, returnType)},
	{"isMonomorphicInReturnType", "Z", nullptr, $FINAL, $field(VarHandle$AccessType, isMonomorphicInReturnType)},
	{}
};

$MethodInfo _VarHandle$AccessType_MethodInfo_[] = {
	{"$values", "()[Ljava/lang/invoke/VarHandle$AccessType;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$VarHandle$AccessTypeArray*(*)()>(&VarHandle$AccessType::$values))},
	{"<init>", "(Ljava/lang/String;ILjava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $PRIVATE, $method(static_cast<void(VarHandle$AccessType::*)($String*,int32_t,$Class*)>(&VarHandle$AccessType::init$))},
	{"accessModeType", "(Ljava/lang/Class;Ljava/lang/Class;[Ljava/lang/Class;)Ljava/lang/invoke/MethodType;", "(Ljava/lang/Class<*>;Ljava/lang/Class<*>;[Ljava/lang/Class<*>;)Ljava/lang/invoke/MethodType;", $TRANSIENT, $method(static_cast<$MethodType*(VarHandle$AccessType::*)($Class*,$Class*,$ClassArray*)>(&VarHandle$AccessType::accessModeType))},
	{"allocateParameters", "(ILjava/lang/Class;[Ljava/lang/Class;)[Ljava/lang/Class;", "(ILjava/lang/Class<*>;[Ljava/lang/Class<*>;)[Ljava/lang/Class<*>;", $PRIVATE | $STATIC | $TRANSIENT, $method(static_cast<$ClassArray*(*)(int32_t,$Class*,$ClassArray*)>(&VarHandle$AccessType::allocateParameters))},
	{"fillParameters", "([Ljava/lang/Class;Ljava/lang/Class;[Ljava/lang/Class;)I", "([Ljava/lang/Class<*>;Ljava/lang/Class<*>;[Ljava/lang/Class<*>;)I", $PRIVATE | $STATIC | $TRANSIENT, $method(static_cast<int32_t(*)($ClassArray*,$Class*,$ClassArray*)>(&VarHandle$AccessType::fillParameters))},
	{"valueOf", "(Ljava/lang/String;)Ljava/lang/invoke/VarHandle$AccessType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<VarHandle$AccessType*(*)($String*)>(&VarHandle$AccessType::valueOf))},
	{"values", "()[Ljava/lang/invoke/VarHandle$AccessType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$VarHandle$AccessTypeArray*(*)()>(&VarHandle$AccessType::values))},
	{}
};

$InnerClassInfo _VarHandle$AccessType_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandle$AccessType", "java.lang.invoke.VarHandle", "AccessType", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _VarHandle$AccessType_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"java.lang.invoke.VarHandle$AccessType",
	"java.lang.Enum",
	nullptr,
	_VarHandle$AccessType_FieldInfo_,
	_VarHandle$AccessType_MethodInfo_,
	"Ljava/lang/Enum<Ljava/lang/invoke/VarHandle$AccessType;>;",
	nullptr,
	_VarHandle$AccessType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandle"
};

$Object* allocate$VarHandle$AccessType($Class* clazz) {
	return $of($alloc(VarHandle$AccessType));
}

bool VarHandle$AccessType::$assertionsDisabled = false;
VarHandle$AccessType* VarHandle$AccessType::GET = nullptr;
VarHandle$AccessType* VarHandle$AccessType::SET = nullptr;
VarHandle$AccessType* VarHandle$AccessType::COMPARE_AND_SET = nullptr;
VarHandle$AccessType* VarHandle$AccessType::COMPARE_AND_EXCHANGE = nullptr;
VarHandle$AccessType* VarHandle$AccessType::GET_AND_UPDATE = nullptr;
$VarHandle$AccessTypeArray* VarHandle$AccessType::$VALUES = nullptr;
int32_t VarHandle$AccessType::COUNT = 0;

$VarHandle$AccessTypeArray* VarHandle$AccessType::$values() {
	$init(VarHandle$AccessType);
	return $new($VarHandle$AccessTypeArray, {
		VarHandle$AccessType::GET,
		VarHandle$AccessType::SET,
		VarHandle$AccessType::COMPARE_AND_SET,
		VarHandle$AccessType::COMPARE_AND_EXCHANGE,
		VarHandle$AccessType::GET_AND_UPDATE
	});
}

$VarHandle$AccessTypeArray* VarHandle$AccessType::values() {
	$init(VarHandle$AccessType);
	return $cast($VarHandle$AccessTypeArray, VarHandle$AccessType::$VALUES->clone());
}

VarHandle$AccessType* VarHandle$AccessType::valueOf($String* name) {
	$init(VarHandle$AccessType);
	return $cast(VarHandle$AccessType, $Enum::valueOf(VarHandle$AccessType::class$, name));
}

void VarHandle$AccessType::init$($String* $enum$name, int32_t $enum$ordinal, $Class* returnType) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, returnType, returnType);
	this->isMonomorphicInReturnType = returnType != $Object::class$;
}

$MethodType* VarHandle$AccessType::accessModeType($Class* receiver, $Class* value, $ClassArray* intermediate) {
	$var($ClassArray, ps, nullptr);
	int32_t i = 0;
	$init($VarHandle$2);
	switch ($nc($VarHandle$2::$SwitchMap$java$lang$invoke$VarHandle$AccessType)->get((this)->ordinal())) {
	case 1:
		{
			$assign(ps, allocateParameters(0, receiver, intermediate));
			fillParameters(ps, receiver, intermediate);
			return $MethodType::methodType(value, ps);
		}
	case 2:
		{
			$assign(ps, allocateParameters(1, receiver, intermediate));
			i = fillParameters(ps, receiver, intermediate);
			$nc(ps)->set(i, value);
			$init($Void);
			return $MethodType::methodType($Void::TYPE, ps);
		}
	case 3:
		{
			$assign(ps, allocateParameters(2, receiver, intermediate));
			i = fillParameters(ps, receiver, intermediate);
			$nc(ps)->set(i++, value);
			$nc(ps)->set(i, value);
			$init($Boolean);
			return $MethodType::methodType($Boolean::TYPE, ps);
		}
	case 4:
		{
			$assign(ps, allocateParameters(2, receiver, intermediate));
			i = fillParameters(ps, receiver, intermediate);
			$nc(ps)->set(i++, value);
			$nc(ps)->set(i, value);
			return $MethodType::methodType(value, ps);
		}
	case 5:
		{
			$assign(ps, allocateParameters(1, receiver, intermediate));
			i = fillParameters(ps, receiver, intermediate);
			$nc(ps)->set(i, value);
			return $MethodType::methodType(value, ps);
		}
	default:
		{
			$throwNew($InternalError, "Unknown AccessType"_s);
		}
	}
}

$ClassArray* VarHandle$AccessType::allocateParameters(int32_t values, $Class* receiver, $ClassArray* intermediate) {
	$init(VarHandle$AccessType);
	int32_t size = ((receiver != nullptr) ? 1 : 0) + $nc(intermediate)->length + values;
	return $new($ClassArray, size);
}

int32_t VarHandle$AccessType::fillParameters($ClassArray* ps, $Class* receiver, $ClassArray* intermediate) {
	$init(VarHandle$AccessType);
	int32_t i = 0;
	if (receiver != nullptr) {
		$nc(ps)->set(i++, receiver);
	}
	for (int32_t j = 0; j < $nc(intermediate)->length; ++j) {
		$nc(ps)->set(i++, intermediate->get(j));
	}
	return i;
}

void clinit$VarHandle$AccessType($Class* class$) {
	$load($VarHandle);
	VarHandle$AccessType::$assertionsDisabled = !$VarHandle::class$->desiredAssertionStatus();
	$assignStatic(VarHandle$AccessType::GET, $new(VarHandle$AccessType, "GET"_s, 0, $Object::class$));
	$init($Void);
	$assignStatic(VarHandle$AccessType::SET, $new(VarHandle$AccessType, "SET"_s, 1, $Void::TYPE));
	$init($Boolean);
	$assignStatic(VarHandle$AccessType::COMPARE_AND_SET, $new(VarHandle$AccessType, "COMPARE_AND_SET"_s, 2, $Boolean::TYPE));
	$assignStatic(VarHandle$AccessType::COMPARE_AND_EXCHANGE, $new(VarHandle$AccessType, "COMPARE_AND_EXCHANGE"_s, 3, $Object::class$));
	$assignStatic(VarHandle$AccessType::GET_AND_UPDATE, $new(VarHandle$AccessType, "GET_AND_UPDATE"_s, 4, $Object::class$));
	$assignStatic(VarHandle$AccessType::$VALUES, VarHandle$AccessType::$values());
	VarHandle$AccessType::COUNT = VarHandle$AccessType::GET_AND_UPDATE->ordinal() + 1;
	{
		if (!VarHandle$AccessType::$assertionsDisabled && !(VarHandle$AccessType::COUNT == $nc($(VarHandle$AccessType::values()))->length)) {
			$throwNew($AssertionError);
		}
	}
}

VarHandle$AccessType::VarHandle$AccessType() {
}

$Class* VarHandle$AccessType::load$($String* name, bool initialize) {
	$loadClass(VarHandle$AccessType, name, initialize, &_VarHandle$AccessType_ClassInfo_, clinit$VarHandle$AccessType, allocate$VarHandle$AccessType);
	return class$;
}

$Class* VarHandle$AccessType::class$ = nullptr;

		} // invoke
	} // lang
} // java