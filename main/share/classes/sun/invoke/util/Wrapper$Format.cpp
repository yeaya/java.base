#include <sun/invoke/util/Wrapper$Format.h>

#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/invoke/util/Wrapper.h>
#include <jcpp.h>

#undef BOOLEAN
#undef CHAR
#undef FLOAT
#undef FLOATING
#undef INT
#undef KIND_SHIFT
#undef NUM_MASK
#undef SHORT
#undef SIGNED
#undef SIZE_MASK
#undef SIZE_SHIFT
#undef SLOT_MASK
#undef SLOT_SHIFT
#undef UNSIGNED
#undef VOID

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Wrapper = ::sun::invoke::util::Wrapper;

namespace sun {
	namespace invoke {
		namespace util {

$FieldInfo _Wrapper$Format_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Wrapper$Format, $assertionsDisabled)},
	{"SLOT_SHIFT", "I", nullptr, $STATIC | $FINAL, $constField(Wrapper$Format, SLOT_SHIFT)},
	{"SIZE_SHIFT", "I", nullptr, $STATIC | $FINAL, $constField(Wrapper$Format, SIZE_SHIFT)},
	{"KIND_SHIFT", "I", nullptr, $STATIC | $FINAL, $constField(Wrapper$Format, KIND_SHIFT)},
	{"SIGNED", "I", nullptr, $STATIC | $FINAL, $constField(Wrapper$Format, SIGNED)},
	{"UNSIGNED", "I", nullptr, $STATIC | $FINAL, $constField(Wrapper$Format, UNSIGNED)},
	{"FLOATING", "I", nullptr, $STATIC | $FINAL, $constField(Wrapper$Format, FLOATING)},
	{"SLOT_MASK", "I", nullptr, $STATIC | $FINAL, $constField(Wrapper$Format, SLOT_MASK)},
	{"SIZE_MASK", "I", nullptr, $STATIC | $FINAL, $constField(Wrapper$Format, SIZE_MASK)},
	{"INT", "I", nullptr, $STATIC | $FINAL, $constField(Wrapper$Format, INT)},
	{"SHORT", "I", nullptr, $STATIC | $FINAL, $constField(Wrapper$Format, SHORT)},
	{"BOOLEAN", "I", nullptr, $STATIC | $FINAL, $constField(Wrapper$Format, BOOLEAN)},
	{"CHAR", "I", nullptr, $STATIC | $FINAL, $constField(Wrapper$Format, CHAR)},
	{"FLOAT", "I", nullptr, $STATIC | $FINAL, $constField(Wrapper$Format, FLOAT)},
	{"VOID", "I", nullptr, $STATIC | $FINAL, $constField(Wrapper$Format, VOID)},
	{"NUM_MASK", "I", nullptr, $STATIC | $FINAL, $constField(Wrapper$Format, NUM_MASK)},
	{}
};

$MethodInfo _Wrapper$Format_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Wrapper$Format::*)()>(&Wrapper$Format::init$))},
	{"floating", "(I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&Wrapper$Format::floating))},
	{"format", "(III)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t,int32_t)>(&Wrapper$Format::format))},
	{"other", "(I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&Wrapper$Format::other))},
	{"signed", "(I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&Wrapper$Format::signed$))},
	{"unsigned", "(I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&Wrapper$Format::unsigned$))},
	{}
};

$InnerClassInfo _Wrapper$Format_InnerClassesInfo_[] = {
	{"sun.invoke.util.Wrapper$Format", "sun.invoke.util.Wrapper", "Format", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Wrapper$Format_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"sun.invoke.util.Wrapper$Format",
	"java.lang.Object",
	nullptr,
	_Wrapper$Format_FieldInfo_,
	_Wrapper$Format_MethodInfo_,
	nullptr,
	nullptr,
	_Wrapper$Format_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.invoke.util.Wrapper"
};

$Object* allocate$Wrapper$Format($Class* clazz) {
	return $of($alloc(Wrapper$Format));
}

bool Wrapper$Format::$assertionsDisabled = false;

void Wrapper$Format::init$() {
}

int32_t Wrapper$Format::format(int32_t kind, int32_t size, int32_t slots) {
	$init(Wrapper$Format);
	if (!Wrapper$Format::$assertionsDisabled && !(($sl($sr(kind, Wrapper$Format::KIND_SHIFT), Wrapper$Format::KIND_SHIFT)) == kind)) {
		$throwNew($AssertionError);
	}
	if (!Wrapper$Format::$assertionsDisabled && !(((int32_t)(size & (uint32_t)(size - 1))) == 0)) {
		$throwNew($AssertionError);
	}
	if (!Wrapper$Format::$assertionsDisabled && !((kind == Wrapper$Format::SIGNED) ? (size > 0) : (kind == Wrapper$Format::UNSIGNED) ? (size > 0) : (kind == Wrapper$Format::FLOATING) ? (size == 32 || size == 64) : false)) {
		$throwNew($AssertionError);
	}
	if (!Wrapper$Format::$assertionsDisabled && !((slots == 2) ? (size == 64) : (slots == 1) ? (size <= 32) : false)) {
		$throwNew($AssertionError);
	}
	return (kind | ($sl(size, Wrapper$Format::SIZE_SHIFT))) | ($sl(slots, Wrapper$Format::SLOT_SHIFT));
}

int32_t Wrapper$Format::signed$(int32_t size) {
	$init(Wrapper$Format);
	return format(Wrapper$Format::SIGNED, size, (size > 32 ? 2 : 1));
}

int32_t Wrapper$Format::unsigned$(int32_t size) {
	$init(Wrapper$Format);
	return format(Wrapper$Format::UNSIGNED, size, (size > 32 ? 2 : 1));
}

int32_t Wrapper$Format::floating(int32_t size) {
	$init(Wrapper$Format);
	return format(Wrapper$Format::FLOATING, size, (size > 32 ? 2 : 1));
}

int32_t Wrapper$Format::other(int32_t slots) {
	$init(Wrapper$Format);
	return $sl(slots, Wrapper$Format::SLOT_SHIFT);
}

void clinit$Wrapper$Format($Class* class$) {
	$load($Wrapper);
	Wrapper$Format::$assertionsDisabled = !$Wrapper::class$->desiredAssertionStatus();
}

Wrapper$Format::Wrapper$Format() {
}

$Class* Wrapper$Format::load$($String* name, bool initialize) {
	$loadClass(Wrapper$Format, name, initialize, &_Wrapper$Format_ClassInfo_, clinit$Wrapper$Format, allocate$Wrapper$Format);
	return class$;
}

$Class* Wrapper$Format::class$ = nullptr;

		} // util
	} // invoke
} // sun