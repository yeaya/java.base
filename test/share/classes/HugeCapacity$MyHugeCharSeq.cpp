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

$MethodInfo _HugeCapacity$MyHugeCharSeq_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(HugeCapacity$MyHugeCharSeq, init$, void)},
	{"charAt", "(I)C", nullptr, $PUBLIC, $virtualMethod(HugeCapacity$MyHugeCharSeq, charAt, char16_t, int32_t)},
	{"length", "()I", nullptr, $PUBLIC, $virtualMethod(HugeCapacity$MyHugeCharSeq, length, int32_t)},
	{"subSequence", "(II)Ljava/lang/CharSequence;", nullptr, $PUBLIC, $virtualMethod(HugeCapacity$MyHugeCharSeq, subSequence, $CharSequence*, int32_t, int32_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(HugeCapacity$MyHugeCharSeq, toString, $String*)},
	{}
};

$InnerClassInfo _HugeCapacity$MyHugeCharSeq_InnerClassesInfo_[] = {
	{"HugeCapacity$MyHugeCharSeq", "HugeCapacity", "MyHugeCharSeq", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _HugeCapacity$MyHugeCharSeq_ClassInfo_ = {
	$ACC_SUPER,
	"HugeCapacity$MyHugeCharSeq",
	"java.lang.Object",
	"java.lang.CharSequence",
	nullptr,
	_HugeCapacity$MyHugeCharSeq_MethodInfo_,
	nullptr,
	nullptr,
	_HugeCapacity$MyHugeCharSeq_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HugeCapacity"
};

$Object* allocate$HugeCapacity$MyHugeCharSeq($Class* clazz) {
	return $of($alloc(HugeCapacity$MyHugeCharSeq));
}

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
	$loadClass(HugeCapacity$MyHugeCharSeq, name, initialize, &_HugeCapacity$MyHugeCharSeq_ClassInfo_, allocate$HugeCapacity$MyHugeCharSeq);
	return class$;
}

$Class* HugeCapacity$MyHugeCharSeq::class$ = nullptr;