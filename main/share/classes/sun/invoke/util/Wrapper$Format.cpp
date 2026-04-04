#include <sun/invoke/util/Wrapper$Format.h>
#include <java/lang/AssertionError.h>
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

bool Wrapper$Format::$assertionsDisabled = false;

void Wrapper$Format::init$() {
}

int32_t Wrapper$Format::format(int32_t kind, int32_t size, int32_t slots) {
	$init(Wrapper$Format);
	if (!Wrapper$Format::$assertionsDisabled && !(($sl($sr(kind, Wrapper$Format::KIND_SHIFT), Wrapper$Format::KIND_SHIFT)) == kind)) {
		$throwNew($AssertionError);
	}
	if (!Wrapper$Format::$assertionsDisabled && !((size & (size - 1)) == 0)) {
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

void Wrapper$Format::clinit$($Class* clazz) {
	$load($Wrapper);
	Wrapper$Format::$assertionsDisabled = !$Wrapper::class$->desiredAssertionStatus();
}

Wrapper$Format::Wrapper$Format() {
}

$Class* Wrapper$Format::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
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
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Wrapper$Format, init$, void)},
		{"floating", "(I)I", nullptr, $STATIC, $staticMethod(Wrapper$Format, floating, int32_t, int32_t)},
		{"format", "(III)I", nullptr, $STATIC, $staticMethod(Wrapper$Format, format, int32_t, int32_t, int32_t, int32_t)},
		{"other", "(I)I", nullptr, $STATIC, $staticMethod(Wrapper$Format, other, int32_t, int32_t)},
		{"signed", "(I)I", nullptr, $STATIC, $staticMethod(Wrapper$Format, signed$, int32_t, int32_t)},
		{"unsigned", "(I)I", nullptr, $STATIC, $staticMethod(Wrapper$Format, unsigned$, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.invoke.util.Wrapper$Format", "sun.invoke.util.Wrapper", "Format", $PRIVATE | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"sun.invoke.util.Wrapper$Format",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.invoke.util.Wrapper"
	};
	$loadClass(Wrapper$Format, name, initialize, &classInfo$$, Wrapper$Format::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Wrapper$Format);
	});
	return class$;
}

$Class* Wrapper$Format::class$ = nullptr;

		} // util
	} // invoke
} // sun