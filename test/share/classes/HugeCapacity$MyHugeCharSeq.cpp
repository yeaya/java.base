#include <HugeCapacity$MyHugeCharSeq.h>
#include <HugeCapacity.h>
#include <java/lang/CharSequence.h>
#include <java/lang/UnsupportedOperationException.h>
#include <jcpp.h>

#undef MAX_VALUE

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;

void HugeCapacity$MyHugeCharSeq::init$() {
}

char16_t HugeCapacity$MyHugeCharSeq::charAt(int32_t i) {
	return u' ';
}

int32_t HugeCapacity$MyHugeCharSeq::length() {
	return $Integer::MAX_VALUE;
}

$CharSequence* HugeCapacity$MyHugeCharSeq::subSequence(int32_t st, int32_t e) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$String* HugeCapacity$MyHugeCharSeq::toString() {
	return ""_s;
}

HugeCapacity$MyHugeCharSeq::HugeCapacity$MyHugeCharSeq() {
}

$Class* HugeCapacity$MyHugeCharSeq::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(HugeCapacity$MyHugeCharSeq, init$, void)},
		{"charAt", "(I)C", nullptr, $PUBLIC, $virtualMethod(HugeCapacity$MyHugeCharSeq, charAt, char16_t, int32_t)},
		{"length", "()I", nullptr, $PUBLIC, $virtualMethod(HugeCapacity$MyHugeCharSeq, length, int32_t)},
		{"subSequence", "(II)Ljava/lang/CharSequence;", nullptr, $PUBLIC, $virtualMethod(HugeCapacity$MyHugeCharSeq, subSequence, $CharSequence*, int32_t, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(HugeCapacity$MyHugeCharSeq, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"HugeCapacity$MyHugeCharSeq", "HugeCapacity", "MyHugeCharSeq", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"HugeCapacity$MyHugeCharSeq",
		"java.lang.Object",
		"java.lang.CharSequence",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"HugeCapacity"
	};
	$loadClass(HugeCapacity$MyHugeCharSeq, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HugeCapacity$MyHugeCharSeq);
	});
	return class$;
}

$Class* HugeCapacity$MyHugeCharSeq::class$ = nullptr;