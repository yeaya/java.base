#include <java/lang/invoke/VarHandle$AccessMode.h>

#include <java/lang/AssertionError.h>
#include <java/lang/Enum.h>
#include <java/lang/invoke/VarHandle$AccessType.h>
#include <java/lang/invoke/VarHandle.h>
#include <jcpp.h>

#undef COMPARE_AND_EXCHANGE
#undef COMPARE_AND_EXCHANGE_ACQUIRE
#undef COMPARE_AND_EXCHANGE_RELEASE
#undef COMPARE_AND_SET
#undef COUNT
#undef GET
#undef GET_ACQUIRE
#undef GET_AND_ADD
#undef GET_AND_ADD_ACQUIRE
#undef GET_AND_ADD_RELEASE
#undef GET_AND_BITWISE_AND
#undef GET_AND_BITWISE_AND_ACQUIRE
#undef GET_AND_BITWISE_AND_RELEASE
#undef GET_AND_BITWISE_OR
#undef GET_AND_BITWISE_OR_ACQUIRE
#undef GET_AND_BITWISE_OR_RELEASE
#undef GET_AND_BITWISE_XOR
#undef GET_AND_BITWISE_XOR_ACQUIRE
#undef GET_AND_BITWISE_XOR_RELEASE
#undef GET_AND_SET
#undef GET_AND_SET_ACQUIRE
#undef GET_AND_SET_RELEASE
#undef GET_AND_UPDATE
#undef GET_OPAQUE
#undef GET_VOLATILE
#undef SET
#undef SET_OPAQUE
#undef SET_RELEASE
#undef SET_VOLATILE
#undef WEAK_COMPARE_AND_SET
#undef WEAK_COMPARE_AND_SET_ACQUIRE
#undef WEAK_COMPARE_AND_SET_PLAIN
#undef WEAK_COMPARE_AND_SET_RELEASE

using $VarHandle$AccessModeArray = $Array<::java::lang::invoke::VarHandle$AccessMode>;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $VarHandle$AccessType = ::java::lang::invoke::VarHandle$AccessType;

namespace java {
	namespace lang {
		namespace invoke {

$FieldInfo _VarHandle$AccessMode_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(VarHandle$AccessMode, $assertionsDisabled)},
	{"GET", "Ljava/lang/invoke/VarHandle$AccessMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(VarHandle$AccessMode, GET)},
	{"SET", "Ljava/lang/invoke/VarHandle$AccessMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(VarHandle$AccessMode, SET)},
	{"GET_VOLATILE", "Ljava/lang/invoke/VarHandle$AccessMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(VarHandle$AccessMode, GET_VOLATILE)},
	{"SET_VOLATILE", "Ljava/lang/invoke/VarHandle$AccessMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(VarHandle$AccessMode, SET_VOLATILE)},
	{"GET_ACQUIRE", "Ljava/lang/invoke/VarHandle$AccessMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(VarHandle$AccessMode, GET_ACQUIRE)},
	{"SET_RELEASE", "Ljava/lang/invoke/VarHandle$AccessMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(VarHandle$AccessMode, SET_RELEASE)},
	{"GET_OPAQUE", "Ljava/lang/invoke/VarHandle$AccessMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(VarHandle$AccessMode, GET_OPAQUE)},
	{"SET_OPAQUE", "Ljava/lang/invoke/VarHandle$AccessMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(VarHandle$AccessMode, SET_OPAQUE)},
	{"COMPARE_AND_SET", "Ljava/lang/invoke/VarHandle$AccessMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(VarHandle$AccessMode, COMPARE_AND_SET)},
	{"COMPARE_AND_EXCHANGE", "Ljava/lang/invoke/VarHandle$AccessMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(VarHandle$AccessMode, COMPARE_AND_EXCHANGE)},
	{"COMPARE_AND_EXCHANGE_ACQUIRE", "Ljava/lang/invoke/VarHandle$AccessMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(VarHandle$AccessMode, COMPARE_AND_EXCHANGE_ACQUIRE)},
	{"COMPARE_AND_EXCHANGE_RELEASE", "Ljava/lang/invoke/VarHandle$AccessMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(VarHandle$AccessMode, COMPARE_AND_EXCHANGE_RELEASE)},
	{"WEAK_COMPARE_AND_SET_PLAIN", "Ljava/lang/invoke/VarHandle$AccessMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(VarHandle$AccessMode, WEAK_COMPARE_AND_SET_PLAIN)},
	{"WEAK_COMPARE_AND_SET", "Ljava/lang/invoke/VarHandle$AccessMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(VarHandle$AccessMode, WEAK_COMPARE_AND_SET)},
	{"WEAK_COMPARE_AND_SET_ACQUIRE", "Ljava/lang/invoke/VarHandle$AccessMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(VarHandle$AccessMode, WEAK_COMPARE_AND_SET_ACQUIRE)},
	{"WEAK_COMPARE_AND_SET_RELEASE", "Ljava/lang/invoke/VarHandle$AccessMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(VarHandle$AccessMode, WEAK_COMPARE_AND_SET_RELEASE)},
	{"GET_AND_SET", "Ljava/lang/invoke/VarHandle$AccessMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(VarHandle$AccessMode, GET_AND_SET)},
	{"GET_AND_SET_ACQUIRE", "Ljava/lang/invoke/VarHandle$AccessMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(VarHandle$AccessMode, GET_AND_SET_ACQUIRE)},
	{"GET_AND_SET_RELEASE", "Ljava/lang/invoke/VarHandle$AccessMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(VarHandle$AccessMode, GET_AND_SET_RELEASE)},
	{"GET_AND_ADD", "Ljava/lang/invoke/VarHandle$AccessMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(VarHandle$AccessMode, GET_AND_ADD)},
	{"GET_AND_ADD_ACQUIRE", "Ljava/lang/invoke/VarHandle$AccessMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(VarHandle$AccessMode, GET_AND_ADD_ACQUIRE)},
	{"GET_AND_ADD_RELEASE", "Ljava/lang/invoke/VarHandle$AccessMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(VarHandle$AccessMode, GET_AND_ADD_RELEASE)},
	{"GET_AND_BITWISE_OR", "Ljava/lang/invoke/VarHandle$AccessMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(VarHandle$AccessMode, GET_AND_BITWISE_OR)},
	{"GET_AND_BITWISE_OR_RELEASE", "Ljava/lang/invoke/VarHandle$AccessMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(VarHandle$AccessMode, GET_AND_BITWISE_OR_RELEASE)},
	{"GET_AND_BITWISE_OR_ACQUIRE", "Ljava/lang/invoke/VarHandle$AccessMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(VarHandle$AccessMode, GET_AND_BITWISE_OR_ACQUIRE)},
	{"GET_AND_BITWISE_AND", "Ljava/lang/invoke/VarHandle$AccessMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(VarHandle$AccessMode, GET_AND_BITWISE_AND)},
	{"GET_AND_BITWISE_AND_RELEASE", "Ljava/lang/invoke/VarHandle$AccessMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(VarHandle$AccessMode, GET_AND_BITWISE_AND_RELEASE)},
	{"GET_AND_BITWISE_AND_ACQUIRE", "Ljava/lang/invoke/VarHandle$AccessMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(VarHandle$AccessMode, GET_AND_BITWISE_AND_ACQUIRE)},
	{"GET_AND_BITWISE_XOR", "Ljava/lang/invoke/VarHandle$AccessMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(VarHandle$AccessMode, GET_AND_BITWISE_XOR)},
	{"GET_AND_BITWISE_XOR_RELEASE", "Ljava/lang/invoke/VarHandle$AccessMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(VarHandle$AccessMode, GET_AND_BITWISE_XOR_RELEASE)},
	{"GET_AND_BITWISE_XOR_ACQUIRE", "Ljava/lang/invoke/VarHandle$AccessMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(VarHandle$AccessMode, GET_AND_BITWISE_XOR_ACQUIRE)},
	{"$VALUES", "[Ljava/lang/invoke/VarHandle$AccessMode;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(VarHandle$AccessMode, $VALUES)},
	{"COUNT", "I", nullptr, $STATIC | $FINAL, $staticField(VarHandle$AccessMode, COUNT)},
	{"methodName", "Ljava/lang/String;", nullptr, $FINAL, $field(VarHandle$AccessMode, methodName$)},
	{"at", "Ljava/lang/invoke/VarHandle$AccessType;", nullptr, $FINAL, $field(VarHandle$AccessMode, at)},
	{}
};

$MethodInfo _VarHandle$AccessMode_MethodInfo_[] = {
	{"$values", "()[Ljava/lang/invoke/VarHandle$AccessMode;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$VarHandle$AccessModeArray*(*)()>(&VarHandle$AccessMode::$values))},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/invoke/VarHandle$AccessType;)V", "(Ljava/lang/String;Ljava/lang/invoke/VarHandle$AccessType;)V", $PRIVATE, $method(static_cast<void(VarHandle$AccessMode::*)($String*,int32_t,$String*,$VarHandle$AccessType*)>(&VarHandle$AccessMode::init$))},
	{"methodName", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(VarHandle$AccessMode::*)()>(&VarHandle$AccessMode::methodName))},
	{"valueFromMethodName", "(Ljava/lang/String;)Ljava/lang/invoke/VarHandle$AccessMode;", nullptr, $PUBLIC | $STATIC, $method(static_cast<VarHandle$AccessMode*(*)($String*)>(&VarHandle$AccessMode::valueFromMethodName))},
	{"valueOf", "(Ljava/lang/String;)Ljava/lang/invoke/VarHandle$AccessMode;", nullptr, $PUBLIC | $STATIC, $method(static_cast<VarHandle$AccessMode*(*)($String*)>(&VarHandle$AccessMode::valueOf))},
	{"values", "()[Ljava/lang/invoke/VarHandle$AccessMode;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$VarHandle$AccessModeArray*(*)()>(&VarHandle$AccessMode::values))},
	{}
};

$InnerClassInfo _VarHandle$AccessMode_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandle$AccessMode", "java.lang.invoke.VarHandle", "AccessMode", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _VarHandle$AccessMode_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"java.lang.invoke.VarHandle$AccessMode",
	"java.lang.Enum",
	nullptr,
	_VarHandle$AccessMode_FieldInfo_,
	_VarHandle$AccessMode_MethodInfo_,
	"Ljava/lang/Enum<Ljava/lang/invoke/VarHandle$AccessMode;>;",
	nullptr,
	_VarHandle$AccessMode_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandle"
};

$Object* allocate$VarHandle$AccessMode($Class* clazz) {
	return $of($alloc(VarHandle$AccessMode));
}

bool VarHandle$AccessMode::$assertionsDisabled = false;
VarHandle$AccessMode* VarHandle$AccessMode::GET = nullptr;
VarHandle$AccessMode* VarHandle$AccessMode::SET = nullptr;
VarHandle$AccessMode* VarHandle$AccessMode::GET_VOLATILE = nullptr;
VarHandle$AccessMode* VarHandle$AccessMode::SET_VOLATILE = nullptr;
VarHandle$AccessMode* VarHandle$AccessMode::GET_ACQUIRE = nullptr;
VarHandle$AccessMode* VarHandle$AccessMode::SET_RELEASE = nullptr;
VarHandle$AccessMode* VarHandle$AccessMode::GET_OPAQUE = nullptr;
VarHandle$AccessMode* VarHandle$AccessMode::SET_OPAQUE = nullptr;
VarHandle$AccessMode* VarHandle$AccessMode::COMPARE_AND_SET = nullptr;
VarHandle$AccessMode* VarHandle$AccessMode::COMPARE_AND_EXCHANGE = nullptr;
VarHandle$AccessMode* VarHandle$AccessMode::COMPARE_AND_EXCHANGE_ACQUIRE = nullptr;
VarHandle$AccessMode* VarHandle$AccessMode::COMPARE_AND_EXCHANGE_RELEASE = nullptr;
VarHandle$AccessMode* VarHandle$AccessMode::WEAK_COMPARE_AND_SET_PLAIN = nullptr;
VarHandle$AccessMode* VarHandle$AccessMode::WEAK_COMPARE_AND_SET = nullptr;
VarHandle$AccessMode* VarHandle$AccessMode::WEAK_COMPARE_AND_SET_ACQUIRE = nullptr;
VarHandle$AccessMode* VarHandle$AccessMode::WEAK_COMPARE_AND_SET_RELEASE = nullptr;
VarHandle$AccessMode* VarHandle$AccessMode::GET_AND_SET = nullptr;
VarHandle$AccessMode* VarHandle$AccessMode::GET_AND_SET_ACQUIRE = nullptr;
VarHandle$AccessMode* VarHandle$AccessMode::GET_AND_SET_RELEASE = nullptr;
VarHandle$AccessMode* VarHandle$AccessMode::GET_AND_ADD = nullptr;
VarHandle$AccessMode* VarHandle$AccessMode::GET_AND_ADD_ACQUIRE = nullptr;
VarHandle$AccessMode* VarHandle$AccessMode::GET_AND_ADD_RELEASE = nullptr;
VarHandle$AccessMode* VarHandle$AccessMode::GET_AND_BITWISE_OR = nullptr;
VarHandle$AccessMode* VarHandle$AccessMode::GET_AND_BITWISE_OR_RELEASE = nullptr;
VarHandle$AccessMode* VarHandle$AccessMode::GET_AND_BITWISE_OR_ACQUIRE = nullptr;
VarHandle$AccessMode* VarHandle$AccessMode::GET_AND_BITWISE_AND = nullptr;
VarHandle$AccessMode* VarHandle$AccessMode::GET_AND_BITWISE_AND_RELEASE = nullptr;
VarHandle$AccessMode* VarHandle$AccessMode::GET_AND_BITWISE_AND_ACQUIRE = nullptr;
VarHandle$AccessMode* VarHandle$AccessMode::GET_AND_BITWISE_XOR = nullptr;
VarHandle$AccessMode* VarHandle$AccessMode::GET_AND_BITWISE_XOR_RELEASE = nullptr;
VarHandle$AccessMode* VarHandle$AccessMode::GET_AND_BITWISE_XOR_ACQUIRE = nullptr;
$VarHandle$AccessModeArray* VarHandle$AccessMode::$VALUES = nullptr;
int32_t VarHandle$AccessMode::COUNT = 0;

$VarHandle$AccessModeArray* VarHandle$AccessMode::$values() {
	$init(VarHandle$AccessMode);
	return $new($VarHandle$AccessModeArray, {
		VarHandle$AccessMode::GET,
		VarHandle$AccessMode::SET,
		VarHandle$AccessMode::GET_VOLATILE,
		VarHandle$AccessMode::SET_VOLATILE,
		VarHandle$AccessMode::GET_ACQUIRE,
		VarHandle$AccessMode::SET_RELEASE,
		VarHandle$AccessMode::GET_OPAQUE,
		VarHandle$AccessMode::SET_OPAQUE,
		VarHandle$AccessMode::COMPARE_AND_SET,
		VarHandle$AccessMode::COMPARE_AND_EXCHANGE,
		VarHandle$AccessMode::COMPARE_AND_EXCHANGE_ACQUIRE,
		VarHandle$AccessMode::COMPARE_AND_EXCHANGE_RELEASE,
		VarHandle$AccessMode::WEAK_COMPARE_AND_SET_PLAIN,
		VarHandle$AccessMode::WEAK_COMPARE_AND_SET,
		VarHandle$AccessMode::WEAK_COMPARE_AND_SET_ACQUIRE,
		VarHandle$AccessMode::WEAK_COMPARE_AND_SET_RELEASE,
		VarHandle$AccessMode::GET_AND_SET,
		VarHandle$AccessMode::GET_AND_SET_ACQUIRE,
		VarHandle$AccessMode::GET_AND_SET_RELEASE,
		VarHandle$AccessMode::GET_AND_ADD,
		VarHandle$AccessMode::GET_AND_ADD_ACQUIRE,
		VarHandle$AccessMode::GET_AND_ADD_RELEASE,
		VarHandle$AccessMode::GET_AND_BITWISE_OR,
		VarHandle$AccessMode::GET_AND_BITWISE_OR_RELEASE,
		VarHandle$AccessMode::GET_AND_BITWISE_OR_ACQUIRE,
		VarHandle$AccessMode::GET_AND_BITWISE_AND,
		VarHandle$AccessMode::GET_AND_BITWISE_AND_RELEASE,
		VarHandle$AccessMode::GET_AND_BITWISE_AND_ACQUIRE,
		VarHandle$AccessMode::GET_AND_BITWISE_XOR,
		VarHandle$AccessMode::GET_AND_BITWISE_XOR_RELEASE,
		VarHandle$AccessMode::GET_AND_BITWISE_XOR_ACQUIRE
	});
}

$VarHandle$AccessModeArray* VarHandle$AccessMode::values() {
	$init(VarHandle$AccessMode);
	return $cast($VarHandle$AccessModeArray, VarHandle$AccessMode::$VALUES->clone());
}

VarHandle$AccessMode* VarHandle$AccessMode::valueOf($String* name) {
	$init(VarHandle$AccessMode);
	return $cast(VarHandle$AccessMode, $Enum::valueOf(VarHandle$AccessMode::class$, name));
}

void VarHandle$AccessMode::init$($String* $enum$name, int32_t $enum$ordinal, $String* methodName, $VarHandle$AccessType* at) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, methodName$, methodName);
	$set(this, at, at);
}

$String* VarHandle$AccessMode::methodName() {
	return this->methodName$;
}

VarHandle$AccessMode* VarHandle$AccessMode::valueFromMethodName($String* methodName) {
	$init(VarHandle$AccessMode);
	$useLocalCurrentObjectStackCache();
	$var($String, s89857$, methodName);
	int32_t tmp89857$ = -1;
	switch ($nc(s89857$)->hashCode()) {
	case 0x00018F56:
		{
			if (s89857$->equals("get"_s)) {
				tmp89857$ = 0;
			}
			break;
		}
	case 0x0001BC62:
		{
			if (s89857$->equals("set"_s)) {
				tmp89857$ = 1;
			}
			break;
		}
	case 0x0B513B12:
		{
			if (s89857$->equals("getVolatile"_s)) {
				tmp89857$ = 2;
			}
			break;
		}
	case 0x06099C1E:
		{
			if (s89857$->equals("setVolatile"_s)) {
				tmp89857$ = 3;
			}
			break;
		}
	case (int32_t)0xF8689CA0:
		{
			if (s89857$->equals("getAcquire"_s)) {
				tmp89857$ = 4;
			}
			break;
		}
	case (int32_t)0xF23FB145:
		{
			if (s89857$->equals("setRelease"_s)) {
				tmp89857$ = 5;
			}
			break;
		}
	case 0x28D92717:
		{
			if (s89857$->equals("getOpaque"_s)) {
				tmp89857$ = 6;
			}
			break;
		}
	case 0x1C0E5B23:
		{
			if (s89857$->equals("setOpaque"_s)) {
				tmp89857$ = 7;
			}
			break;
		}
	case (int32_t)0x9C651050:
		{
			if (s89857$->equals("compareAndSet"_s)) {
				tmp89857$ = 8;
			}
			break;
		}
	case 0x58737EF5:
		{
			if (s89857$->equals("compareAndExchange"_s)) {
				tmp89857$ = 9;
			}
			break;
		}
	case 0x2C96AC21:
		{
			if (s89857$->equals("compareAndExchangeAcquire"_s)) {
				tmp89857$ = 10;
			}
			break;
		}
	case (int32_t)0xB2FC7352:
		{
			if (s89857$->equals("compareAndExchangeRelease"_s)) {
				tmp89857$ = 11;
			}
			break;
		}
	case (int32_t)0xBD5D83B8:
		{
			if (s89857$->equals("weakCompareAndSet"_s)) {
				tmp89857$ = 12;
			}
			break;
		}
	case (int32_t)0xDE31F8F2:
		{
			if (s89857$->equals("weakCompareAndSetPlain"_s)) {
				tmp89857$ = 13;
			}
			break;
		}
	case (int32_t)0xF1A555FE:
		{
			if (s89857$->equals("weakCompareAndSetAcquire"_s)) {
				tmp89857$ = 14;
			}
			break;
		}
	case 0x780B1D2F:
		{
			if (s89857$->equals("weakCompareAndSetRelease"_s)) {
				tmp89857$ = 15;
			}
			break;
		}
	case 0x10DA0A01:
		{
			if (s89857$->equals("getAndSet"_s)) {
				tmp89857$ = 16;
			}
			break;
		}
	case 0x775BDB95:
		{
			if (s89857$->equals("getAndSetAcquire"_s)) {
				tmp89857$ = 17;
			}
			break;
		}
	case (int32_t)0xFDC1A2C6:
		{
			if (s89857$->equals("getAndSetRelease"_s)) {
				tmp89857$ = 18;
			}
			break;
		}
	case 0x10D9C640:
		{
			if (s89857$->equals("getAndAdd"_s)) {
				tmp89857$ = 19;
			}
			break;
		}
	case 0x37DAAA76:
		{
			if (s89857$->equals("getAndAddAcquire"_s)) {
				tmp89857$ = 20;
			}
			break;
		}
	case (int32_t)0xBE4071A7:
		{
			if (s89857$->equals("getAndAddRelease"_s)) {
				tmp89857$ = 21;
			}
			break;
		}
	case 0x50983B53:
		{
			if (s89857$->equals("getAndBitwiseOr"_s)) {
				tmp89857$ = 22;
			}
			break;
		}
	case (int32_t)0x8BFAB134:
		{
			if (s89857$->equals("getAndBitwiseOrRelease"_s)) {
				tmp89857$ = 23;
			}
			break;
		}
	case 0x0594EA03:
		{
			if (s89857$->equals("getAndBitwiseOrAcquire"_s)) {
				tmp89857$ = 24;
			}
			break;
		}
	case (int32_t)0xC26EFA67:
		{
			if (s89857$->equals("getAndBitwiseAnd"_s)) {
				tmp89857$ = 25;
			}
			break;
		}
	case (int32_t)0x9B7693A0:
		{
			if (s89857$->equals("getAndBitwiseAndRelease"_s)) {
				tmp89857$ = 26;
			}
			break;
		}
	case 0x1510CC6F:
		{
			if (s89857$->equals("getAndBitwiseAndAcquire"_s)) {
				tmp89857$ = 27;
			}
			break;
		}
	case (int32_t)0xC26F50EB:
		{
			if (s89857$->equals("getAndBitwiseXor"_s)) {
				tmp89857$ = 28;
			}
			break;
		}
	case (int32_t)0xD0A4A09C:
		{
			if (s89857$->equals("getAndBitwiseXorRelease"_s)) {
				tmp89857$ = 29;
			}
			break;
		}
	case 0x4A3ED96B:
		{
			if (s89857$->equals("getAndBitwiseXorAcquire"_s)) {
				tmp89857$ = 30;
			}
			break;
		}
	}

	$var(VarHandle$AccessMode, var$0, nullptr)
	switch (tmp89857$) {
	case 0:
		{
			$assign(var$0, VarHandle$AccessMode::GET);
			break;
		}
	case 1:
		{
			$assign(var$0, VarHandle$AccessMode::SET);
			break;
		}
	case 2:
		{
			$assign(var$0, VarHandle$AccessMode::GET_VOLATILE);
			break;
		}
	case 3:
		{
			$assign(var$0, VarHandle$AccessMode::SET_VOLATILE);
			break;
		}
	case 4:
		{
			$assign(var$0, VarHandle$AccessMode::GET_ACQUIRE);
			break;
		}
	case 5:
		{
			$assign(var$0, VarHandle$AccessMode::SET_RELEASE);
			break;
		}
	case 6:
		{
			$assign(var$0, VarHandle$AccessMode::GET_OPAQUE);
			break;
		}
	case 7:
		{
			$assign(var$0, VarHandle$AccessMode::SET_OPAQUE);
			break;
		}
	case 8:
		{
			$assign(var$0, VarHandle$AccessMode::COMPARE_AND_SET);
			break;
		}
	case 9:
		{
			$assign(var$0, VarHandle$AccessMode::COMPARE_AND_EXCHANGE);
			break;
		}
	case 10:
		{
			$assign(var$0, VarHandle$AccessMode::COMPARE_AND_EXCHANGE_ACQUIRE);
			break;
		}
	case 11:
		{
			$assign(var$0, VarHandle$AccessMode::COMPARE_AND_EXCHANGE_RELEASE);
			break;
		}
	case 12:
		{
			$assign(var$0, VarHandle$AccessMode::WEAK_COMPARE_AND_SET);
			break;
		}
	case 13:
		{
			$assign(var$0, VarHandle$AccessMode::WEAK_COMPARE_AND_SET_PLAIN);
			break;
		}
	case 14:
		{
			$assign(var$0, VarHandle$AccessMode::WEAK_COMPARE_AND_SET_ACQUIRE);
			break;
		}
	case 15:
		{
			$assign(var$0, VarHandle$AccessMode::WEAK_COMPARE_AND_SET_RELEASE);
			break;
		}
	case 16:
		{
			$assign(var$0, VarHandle$AccessMode::GET_AND_SET);
			break;
		}
	case 17:
		{
			$assign(var$0, VarHandle$AccessMode::GET_AND_SET_ACQUIRE);
			break;
		}
	case 18:
		{
			$assign(var$0, VarHandle$AccessMode::GET_AND_SET_RELEASE);
			break;
		}
	case 19:
		{
			$assign(var$0, VarHandle$AccessMode::GET_AND_ADD);
			break;
		}
	case 20:
		{
			$assign(var$0, VarHandle$AccessMode::GET_AND_ADD_ACQUIRE);
			break;
		}
	case 21:
		{
			$assign(var$0, VarHandle$AccessMode::GET_AND_ADD_RELEASE);
			break;
		}
	case 22:
		{
			$assign(var$0, VarHandle$AccessMode::GET_AND_BITWISE_OR);
			break;
		}
	case 23:
		{
			$assign(var$0, VarHandle$AccessMode::GET_AND_BITWISE_OR_RELEASE);
			break;
		}
	case 24:
		{
			$assign(var$0, VarHandle$AccessMode::GET_AND_BITWISE_OR_ACQUIRE);
			break;
		}
	case 25:
		{
			$assign(var$0, VarHandle$AccessMode::GET_AND_BITWISE_AND);
			break;
		}
	case 26:
		{
			$assign(var$0, VarHandle$AccessMode::GET_AND_BITWISE_AND_RELEASE);
			break;
		}
	case 27:
		{
			$assign(var$0, VarHandle$AccessMode::GET_AND_BITWISE_AND_ACQUIRE);
			break;
		}
	case 28:
		{
			$assign(var$0, VarHandle$AccessMode::GET_AND_BITWISE_XOR);
			break;
		}
	case 29:
		{
			$assign(var$0, VarHandle$AccessMode::GET_AND_BITWISE_XOR_RELEASE);
			break;
		}
	case 30:
		{
			$assign(var$0, VarHandle$AccessMode::GET_AND_BITWISE_XOR_ACQUIRE);
			break;
		}
	default:
		{
			$throwNew($IllegalArgumentException, $$str({"No AccessMode value for method name "_s, methodName}));
		}
	}
	return var$0;
}

void clinit$VarHandle$AccessMode($Class* class$) {
	$load($VarHandle);
	VarHandle$AccessMode::$assertionsDisabled = !$VarHandle::class$->desiredAssertionStatus();
	$init($VarHandle$AccessType);
	$assignStatic(VarHandle$AccessMode::GET, $new(VarHandle$AccessMode, "GET"_s, 0, "get"_s, $VarHandle$AccessType::GET));
	$assignStatic(VarHandle$AccessMode::SET, $new(VarHandle$AccessMode, "SET"_s, 1, "set"_s, $VarHandle$AccessType::SET));
	$assignStatic(VarHandle$AccessMode::GET_VOLATILE, $new(VarHandle$AccessMode, "GET_VOLATILE"_s, 2, "getVolatile"_s, $VarHandle$AccessType::GET));
	$assignStatic(VarHandle$AccessMode::SET_VOLATILE, $new(VarHandle$AccessMode, "SET_VOLATILE"_s, 3, "setVolatile"_s, $VarHandle$AccessType::SET));
	$assignStatic(VarHandle$AccessMode::GET_ACQUIRE, $new(VarHandle$AccessMode, "GET_ACQUIRE"_s, 4, "getAcquire"_s, $VarHandle$AccessType::GET));
	$assignStatic(VarHandle$AccessMode::SET_RELEASE, $new(VarHandle$AccessMode, "SET_RELEASE"_s, 5, "setRelease"_s, $VarHandle$AccessType::SET));
	$assignStatic(VarHandle$AccessMode::GET_OPAQUE, $new(VarHandle$AccessMode, "GET_OPAQUE"_s, 6, "getOpaque"_s, $VarHandle$AccessType::GET));
	$assignStatic(VarHandle$AccessMode::SET_OPAQUE, $new(VarHandle$AccessMode, "SET_OPAQUE"_s, 7, "setOpaque"_s, $VarHandle$AccessType::SET));
	$assignStatic(VarHandle$AccessMode::COMPARE_AND_SET, $new(VarHandle$AccessMode, "COMPARE_AND_SET"_s, 8, "compareAndSet"_s, $VarHandle$AccessType::COMPARE_AND_SET));
	$assignStatic(VarHandle$AccessMode::COMPARE_AND_EXCHANGE, $new(VarHandle$AccessMode, "COMPARE_AND_EXCHANGE"_s, 9, "compareAndExchange"_s, $VarHandle$AccessType::COMPARE_AND_EXCHANGE));
	$assignStatic(VarHandle$AccessMode::COMPARE_AND_EXCHANGE_ACQUIRE, $new(VarHandle$AccessMode, "COMPARE_AND_EXCHANGE_ACQUIRE"_s, 10, "compareAndExchangeAcquire"_s, $VarHandle$AccessType::COMPARE_AND_EXCHANGE));
	$assignStatic(VarHandle$AccessMode::COMPARE_AND_EXCHANGE_RELEASE, $new(VarHandle$AccessMode, "COMPARE_AND_EXCHANGE_RELEASE"_s, 11, "compareAndExchangeRelease"_s, $VarHandle$AccessType::COMPARE_AND_EXCHANGE));
	$assignStatic(VarHandle$AccessMode::WEAK_COMPARE_AND_SET_PLAIN, $new(VarHandle$AccessMode, "WEAK_COMPARE_AND_SET_PLAIN"_s, 12, "weakCompareAndSetPlain"_s, $VarHandle$AccessType::COMPARE_AND_SET));
	$assignStatic(VarHandle$AccessMode::WEAK_COMPARE_AND_SET, $new(VarHandle$AccessMode, "WEAK_COMPARE_AND_SET"_s, 13, "weakCompareAndSet"_s, $VarHandle$AccessType::COMPARE_AND_SET));
	$assignStatic(VarHandle$AccessMode::WEAK_COMPARE_AND_SET_ACQUIRE, $new(VarHandle$AccessMode, "WEAK_COMPARE_AND_SET_ACQUIRE"_s, 14, "weakCompareAndSetAcquire"_s, $VarHandle$AccessType::COMPARE_AND_SET));
	$assignStatic(VarHandle$AccessMode::WEAK_COMPARE_AND_SET_RELEASE, $new(VarHandle$AccessMode, "WEAK_COMPARE_AND_SET_RELEASE"_s, 15, "weakCompareAndSetRelease"_s, $VarHandle$AccessType::COMPARE_AND_SET));
	$assignStatic(VarHandle$AccessMode::GET_AND_SET, $new(VarHandle$AccessMode, "GET_AND_SET"_s, 16, "getAndSet"_s, $VarHandle$AccessType::GET_AND_UPDATE));
	$assignStatic(VarHandle$AccessMode::GET_AND_SET_ACQUIRE, $new(VarHandle$AccessMode, "GET_AND_SET_ACQUIRE"_s, 17, "getAndSetAcquire"_s, $VarHandle$AccessType::GET_AND_UPDATE));
	$assignStatic(VarHandle$AccessMode::GET_AND_SET_RELEASE, $new(VarHandle$AccessMode, "GET_AND_SET_RELEASE"_s, 18, "getAndSetRelease"_s, $VarHandle$AccessType::GET_AND_UPDATE));
	$assignStatic(VarHandle$AccessMode::GET_AND_ADD, $new(VarHandle$AccessMode, "GET_AND_ADD"_s, 19, "getAndAdd"_s, $VarHandle$AccessType::GET_AND_UPDATE));
	$assignStatic(VarHandle$AccessMode::GET_AND_ADD_ACQUIRE, $new(VarHandle$AccessMode, "GET_AND_ADD_ACQUIRE"_s, 20, "getAndAddAcquire"_s, $VarHandle$AccessType::GET_AND_UPDATE));
	$assignStatic(VarHandle$AccessMode::GET_AND_ADD_RELEASE, $new(VarHandle$AccessMode, "GET_AND_ADD_RELEASE"_s, 21, "getAndAddRelease"_s, $VarHandle$AccessType::GET_AND_UPDATE));
	$assignStatic(VarHandle$AccessMode::GET_AND_BITWISE_OR, $new(VarHandle$AccessMode, "GET_AND_BITWISE_OR"_s, 22, "getAndBitwiseOr"_s, $VarHandle$AccessType::GET_AND_UPDATE));
	$assignStatic(VarHandle$AccessMode::GET_AND_BITWISE_OR_RELEASE, $new(VarHandle$AccessMode, "GET_AND_BITWISE_OR_RELEASE"_s, 23, "getAndBitwiseOrRelease"_s, $VarHandle$AccessType::GET_AND_UPDATE));
	$assignStatic(VarHandle$AccessMode::GET_AND_BITWISE_OR_ACQUIRE, $new(VarHandle$AccessMode, "GET_AND_BITWISE_OR_ACQUIRE"_s, 24, "getAndBitwiseOrAcquire"_s, $VarHandle$AccessType::GET_AND_UPDATE));
	$assignStatic(VarHandle$AccessMode::GET_AND_BITWISE_AND, $new(VarHandle$AccessMode, "GET_AND_BITWISE_AND"_s, 25, "getAndBitwiseAnd"_s, $VarHandle$AccessType::GET_AND_UPDATE));
	$assignStatic(VarHandle$AccessMode::GET_AND_BITWISE_AND_RELEASE, $new(VarHandle$AccessMode, "GET_AND_BITWISE_AND_RELEASE"_s, 26, "getAndBitwiseAndRelease"_s, $VarHandle$AccessType::GET_AND_UPDATE));
	$assignStatic(VarHandle$AccessMode::GET_AND_BITWISE_AND_ACQUIRE, $new(VarHandle$AccessMode, "GET_AND_BITWISE_AND_ACQUIRE"_s, 27, "getAndBitwiseAndAcquire"_s, $VarHandle$AccessType::GET_AND_UPDATE));
	$assignStatic(VarHandle$AccessMode::GET_AND_BITWISE_XOR, $new(VarHandle$AccessMode, "GET_AND_BITWISE_XOR"_s, 28, "getAndBitwiseXor"_s, $VarHandle$AccessType::GET_AND_UPDATE));
	$assignStatic(VarHandle$AccessMode::GET_AND_BITWISE_XOR_RELEASE, $new(VarHandle$AccessMode, "GET_AND_BITWISE_XOR_RELEASE"_s, 29, "getAndBitwiseXorRelease"_s, $VarHandle$AccessType::GET_AND_UPDATE));
	$assignStatic(VarHandle$AccessMode::GET_AND_BITWISE_XOR_ACQUIRE, $new(VarHandle$AccessMode, "GET_AND_BITWISE_XOR_ACQUIRE"_s, 30, "getAndBitwiseXorAcquire"_s, $VarHandle$AccessType::GET_AND_UPDATE));
	$assignStatic(VarHandle$AccessMode::$VALUES, VarHandle$AccessMode::$values());
	VarHandle$AccessMode::COUNT = VarHandle$AccessMode::GET_AND_BITWISE_XOR_ACQUIRE->ordinal() + 1;
	{
		if (!VarHandle$AccessMode::$assertionsDisabled && !(VarHandle$AccessMode::COUNT == $nc($(VarHandle$AccessMode::values()))->length)) {
			$throwNew($AssertionError);
		}
	}
}

VarHandle$AccessMode::VarHandle$AccessMode() {
}

$Class* VarHandle$AccessMode::load$($String* name, bool initialize) {
	$loadClass(VarHandle$AccessMode, name, initialize, &_VarHandle$AccessMode_ClassInfo_, clinit$VarHandle$AccessMode, allocate$VarHandle$AccessMode);
	return class$;
}

$Class* VarHandle$AccessMode::class$ = nullptr;

		} // invoke
	} // lang
} // java