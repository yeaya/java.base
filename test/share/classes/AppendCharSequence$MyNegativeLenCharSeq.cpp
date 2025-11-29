#include <AppendCharSequence$MyNegativeLenCharSeq.h>

#include <AppendCharSequence.h>
#include <java/lang/CharSequence.h>
#include <java/lang/UnsupportedOperationException.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;

$FieldInfo _AppendCharSequence$MyNegativeLenCharSeq_FieldInfo_[] = {
	{"length", "I", nullptr, 0, $field(AppendCharSequence$MyNegativeLenCharSeq, length$)},
	{}
};

$MethodInfo _AppendCharSequence$MyNegativeLenCharSeq_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, 0, $method(static_cast<void(AppendCharSequence$MyNegativeLenCharSeq::*)(int32_t)>(&AppendCharSequence$MyNegativeLenCharSeq::init$))},
	{"charAt", "(I)C", nullptr, $PUBLIC},
	{"length", "()I", nullptr, $PUBLIC},
	{"subSequence", "(II)Ljava/lang/CharSequence;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AppendCharSequence$MyNegativeLenCharSeq_InnerClassesInfo_[] = {
	{"AppendCharSequence$MyNegativeLenCharSeq", "AppendCharSequence", "MyNegativeLenCharSeq", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _AppendCharSequence$MyNegativeLenCharSeq_ClassInfo_ = {
	$ACC_SUPER,
	"AppendCharSequence$MyNegativeLenCharSeq",
	"java.lang.Object",
	"java.lang.CharSequence",
	_AppendCharSequence$MyNegativeLenCharSeq_FieldInfo_,
	_AppendCharSequence$MyNegativeLenCharSeq_MethodInfo_,
	nullptr,
	nullptr,
	_AppendCharSequence$MyNegativeLenCharSeq_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"AppendCharSequence"
};

$Object* allocate$AppendCharSequence$MyNegativeLenCharSeq($Class* clazz) {
	return $of($alloc(AppendCharSequence$MyNegativeLenCharSeq));
}

void AppendCharSequence$MyNegativeLenCharSeq::init$(int32_t length) {
	this->length$ = length;
}

char16_t AppendCharSequence$MyNegativeLenCharSeq::charAt(int32_t i) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

int32_t AppendCharSequence$MyNegativeLenCharSeq::length() {
	return this->length$;
}

$CharSequence* AppendCharSequence$MyNegativeLenCharSeq::subSequence(int32_t st, int32_t e) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$String* AppendCharSequence$MyNegativeLenCharSeq::toString() {
	return ""_s;
}

AppendCharSequence$MyNegativeLenCharSeq::AppendCharSequence$MyNegativeLenCharSeq() {
}

$Class* AppendCharSequence$MyNegativeLenCharSeq::load$($String* name, bool initialize) {
	$loadClass(AppendCharSequence$MyNegativeLenCharSeq, name, initialize, &_AppendCharSequence$MyNegativeLenCharSeq_ClassInfo_, allocate$AppendCharSequence$MyNegativeLenCharSeq);
	return class$;
}

$Class* AppendCharSequence$MyNegativeLenCharSeq::class$ = nullptr;