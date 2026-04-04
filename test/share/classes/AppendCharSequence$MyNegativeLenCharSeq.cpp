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
	$FieldInfo fieldInfos$$[] = {
		{"length", "I", nullptr, 0, $field(AppendCharSequence$MyNegativeLenCharSeq, length$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, 0, $method(AppendCharSequence$MyNegativeLenCharSeq, init$, void, int32_t)},
		{"charAt", "(I)C", nullptr, $PUBLIC, $virtualMethod(AppendCharSequence$MyNegativeLenCharSeq, charAt, char16_t, int32_t)},
		{"length", "()I", nullptr, $PUBLIC, $virtualMethod(AppendCharSequence$MyNegativeLenCharSeq, length, int32_t)},
		{"subSequence", "(II)Ljava/lang/CharSequence;", nullptr, $PUBLIC, $virtualMethod(AppendCharSequence$MyNegativeLenCharSeq, subSequence, $CharSequence*, int32_t, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AppendCharSequence$MyNegativeLenCharSeq, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"AppendCharSequence$MyNegativeLenCharSeq", "AppendCharSequence", "MyNegativeLenCharSeq", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"AppendCharSequence$MyNegativeLenCharSeq",
		"java.lang.Object",
		"java.lang.CharSequence",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"AppendCharSequence"
	};
	$loadClass(AppendCharSequence$MyNegativeLenCharSeq, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AppendCharSequence$MyNegativeLenCharSeq);
	});
	return class$;
}

$Class* AppendCharSequence$MyNegativeLenCharSeq::class$ = nullptr;