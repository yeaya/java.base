#include <sun/text/ComposedCharIter.h>

#include <jdk/internal/icu/impl/NormalizerImpl.h>
#include <jcpp.h>

#undef DONE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NormalizerImpl = ::jdk::internal::icu::impl::NormalizerImpl;

namespace sun {
	namespace text {

$FieldInfo _ComposedCharIter_FieldInfo_[] = {
	{"DONE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ComposedCharIter, DONE)},
	{"chars", "[I", nullptr, $PRIVATE | $STATIC, $staticField(ComposedCharIter, chars)},
	{"decomps", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(ComposedCharIter, decomps)},
	{"decompNum", "I", nullptr, $PRIVATE | $STATIC, $staticField(ComposedCharIter, decompNum)},
	{"curChar", "I", nullptr, $PRIVATE, $field(ComposedCharIter, curChar)},
	{}
};

$MethodInfo _ComposedCharIter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ComposedCharIter, init$, void)},
	{"decomposition", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(ComposedCharIter, decomposition, $String*)},
	{"next", "()I", nullptr, $PUBLIC, $method(ComposedCharIter, next, int32_t)},
	{}
};

$ClassInfo _ComposedCharIter_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.text.ComposedCharIter",
	"java.lang.Object",
	nullptr,
	_ComposedCharIter_FieldInfo_,
	_ComposedCharIter_MethodInfo_
};

$Object* allocate$ComposedCharIter($Class* clazz) {
	return $of($alloc(ComposedCharIter));
}

$ints* ComposedCharIter::chars = nullptr;
$StringArray* ComposedCharIter::decomps = nullptr;
int32_t ComposedCharIter::decompNum = 0;

void ComposedCharIter::init$() {
	this->curChar = -1;
}

int32_t ComposedCharIter::next() {
	if (this->curChar == ComposedCharIter::decompNum - 1) {
		return ComposedCharIter::DONE;
	}
	return $nc(ComposedCharIter::chars)->get(++this->curChar);
}

$String* ComposedCharIter::decomposition() {
	return $nc(ComposedCharIter::decomps)->get(this->curChar);
}

void clinit$ComposedCharIter($Class* class$) {
	{
		int32_t maxNum = 2100;
		$assignStatic(ComposedCharIter::chars, $new($ints, maxNum));
		$assignStatic(ComposedCharIter::decomps, $new($StringArray, maxNum));
		ComposedCharIter::decompNum = $NormalizerImpl::getDecompose(ComposedCharIter::chars, ComposedCharIter::decomps);
	}
}

ComposedCharIter::ComposedCharIter() {
}

$Class* ComposedCharIter::load$($String* name, bool initialize) {
	$loadClass(ComposedCharIter, name, initialize, &_ComposedCharIter_ClassInfo_, clinit$ComposedCharIter, allocate$ComposedCharIter);
	return class$;
}

$Class* ComposedCharIter::class$ = nullptr;

	} // text
} // sun