#include <Bug4740757.h>

#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/text/BreakIterator.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef DONE
#undef KOREA
#undef KOREAN

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $BreakIterator = ::java::text::BreakIterator;
using $Locale = ::java::util::Locale;

$FieldInfo _Bug4740757_FieldInfo_[] = {
	{"err", "Z", nullptr, $PRIVATE | $STATIC, $staticField(Bug4740757, err)},
	{}
};

$MethodInfo _Bug4740757_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Bug4740757::*)()>(&Bug4740757::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Bug4740757::main))},
	{"test4740757", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&Bug4740757::test4740757))},
	{}
};

$ClassInfo _Bug4740757_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Bug4740757",
	"java.lang.Object",
	nullptr,
	_Bug4740757_FieldInfo_,
	_Bug4740757_MethodInfo_
};

$Object* allocate$Bug4740757($Class* clazz) {
	return $of($alloc(Bug4740757));
}

bool Bug4740757::err = false;

void Bug4740757::init$() {
}

void Bug4740757::main($StringArray* args) {
	$init(Bug4740757);
	$var($Locale, defaultLocale, $Locale::getDefault());
	if ($nc($($nc(defaultLocale)->getLanguage()))->equals("th"_s)) {
		$Locale::setDefault($Locale::KOREA);
		test4740757();
		$Locale::setDefault(defaultLocale);
	} else {
		test4740757();
	}
	if (Bug4740757::err) {
		$throwNew($RuntimeException, "Incorrect Line-breaking"_s);
	}
}

void Bug4740757::test4740757() {
	$init(Bug4740757);
	$var($String, source, u"\uc548\ub155\ud558\uc138\uc694? \uc88b\uc740 \uc544\uce68, \uc5ec\ubcf4\uc138\uc694! \uc548\ub155. End."_s);
	$var($String, expected, u"\uc548/\ub155/\ud558/\uc138/\uc694? /\uc88b/\uc740 /\uc544/\uce68, /\uc5ec/\ubcf4/\uc138/\uc694! /\uc548/\ub155. /End./"_s);
	$init($Locale);
	$var($BreakIterator, bi, $BreakIterator::getLineInstance($Locale::KOREAN));
	$nc(bi)->setText(source);
	int32_t start = bi->first();
	int32_t end = bi->next();
	$var($StringBuilder, sb, $new($StringBuilder));
	for (; end != $BreakIterator::DONE; start = end, end = bi->next()) {
		sb->append($(source->substring(start, end)));
		sb->append(u'/');
	}
	if (!expected->equals($(sb->toString()))) {
		$init($System);
		$var($String, var$1, $$str({"Failed: Hangul line-breaking failed.\n\tExpected: "_s, expected, "\n\tGot:      "_s, sb, "\nin "_s}));
		$var($String, var$0, $$concat(var$1, $($Locale::getDefault())));
		$nc($System::err)->println($$concat(var$0, " locale."));
		Bug4740757::err = true;
	}
}

void clinit$Bug4740757($Class* class$) {
	Bug4740757::err = false;
}

Bug4740757::Bug4740757() {
}

$Class* Bug4740757::load$($String* name, bool initialize) {
	$loadClass(Bug4740757, name, initialize, &_Bug4740757_ClassInfo_, clinit$Bug4740757, allocate$Bug4740757);
	return class$;
}

$Class* Bug4740757::class$ = nullptr;