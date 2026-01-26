#include <HugeCapacity4StringBuffer$MyHugeCharSeq.h>

#include <HugeCapacity4StringBuffer.h>
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

$MethodInfo _HugeCapacity4StringBuffer$MyHugeCharSeq_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(HugeCapacity4StringBuffer$MyHugeCharSeq, init$, void)},
	{"charAt", "(I)C", nullptr, $PUBLIC, $virtualMethod(HugeCapacity4StringBuffer$MyHugeCharSeq, charAt, char16_t, int32_t)},
	{"length", "()I", nullptr, $PUBLIC, $virtualMethod(HugeCapacity4StringBuffer$MyHugeCharSeq, length, int32_t)},
	{"subSequence", "(II)Ljava/lang/CharSequence;", nullptr, $PUBLIC, $virtualMethod(HugeCapacity4StringBuffer$MyHugeCharSeq, subSequence, $CharSequence*, int32_t, int32_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(HugeCapacity4StringBuffer$MyHugeCharSeq, toString, $String*)},
	{}
};

$InnerClassInfo _HugeCapacity4StringBuffer$MyHugeCharSeq_InnerClassesInfo_[] = {
	{"HugeCapacity4StringBuffer$MyHugeCharSeq", "HugeCapacity4StringBuffer", "MyHugeCharSeq", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _HugeCapacity4StringBuffer$MyHugeCharSeq_ClassInfo_ = {
	$ACC_SUPER,
	"HugeCapacity4StringBuffer$MyHugeCharSeq",
	"java.lang.Object",
	"java.lang.CharSequence",
	nullptr,
	_HugeCapacity4StringBuffer$MyHugeCharSeq_MethodInfo_,
	nullptr,
	nullptr,
	_HugeCapacity4StringBuffer$MyHugeCharSeq_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HugeCapacity4StringBuffer"
};

$Object* allocate$HugeCapacity4StringBuffer$MyHugeCharSeq($Class* clazz) {
	return $of($alloc(HugeCapacity4StringBuffer$MyHugeCharSeq));
}

void HugeCapacity4StringBuffer$MyHugeCharSeq::init$() {
}

char16_t HugeCapacity4StringBuffer$MyHugeCharSeq::charAt(int32_t i) {
	return u' ';
}

int32_t HugeCapacity4StringBuffer$MyHugeCharSeq::length() {
	return $Integer::MAX_VALUE;
}

$CharSequence* HugeCapacity4StringBuffer$MyHugeCharSeq::subSequence(int32_t st, int32_t e) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$String* HugeCapacity4StringBuffer$MyHugeCharSeq::toString() {
	return ""_s;
}

HugeCapacity4StringBuffer$MyHugeCharSeq::HugeCapacity4StringBuffer$MyHugeCharSeq() {
}

$Class* HugeCapacity4StringBuffer$MyHugeCharSeq::load$($String* name, bool initialize) {
	$loadClass(HugeCapacity4StringBuffer$MyHugeCharSeq, name, initialize, &_HugeCapacity4StringBuffer$MyHugeCharSeq_ClassInfo_, allocate$HugeCapacity4StringBuffer$MyHugeCharSeq);
	return class$;
}

$Class* HugeCapacity4StringBuffer$MyHugeCharSeq::class$ = nullptr;