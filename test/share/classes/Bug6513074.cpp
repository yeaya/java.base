#include <Bug6513074.h>

#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
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
#undef JAPAN

using $StringArray2 = $Array<::java::lang::String, 2>;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $BreakIterator = ::java::text::BreakIterator;
using $Locale = ::java::util::Locale;

$FieldInfo _Bug6513074_FieldInfo_[] = {
	{"source", "[[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Bug6513074, source)},
	{"expected_line", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Bug6513074, expected_line)},
	{"expected_word", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Bug6513074, expected_word)},
	{"expected_char", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Bug6513074, expected_char)},
	{"err", "Z", nullptr, $PRIVATE | $STATIC, $staticField(Bug6513074, err)},
	{}
};

$MethodInfo _Bug6513074_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Bug6513074::*)()>(&Bug6513074::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Bug6513074::main))},
	{"test6513074", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&Bug6513074::test6513074))},
	{"testBreakIterator", "(Ljava/text/BreakIterator;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($BreakIterator*,$String*,$String*,$String*,$String*)>(&Bug6513074::testBreakIterator))},
	{"toString", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*)>(&Bug6513074::toString))},
	{}
};

$ClassInfo _Bug6513074_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Bug6513074",
	"java.lang.Object",
	nullptr,
	_Bug6513074_FieldInfo_,
	_Bug6513074_MethodInfo_
};

$Object* allocate$Bug6513074($Class* clazz) {
	return $of($alloc(Bug6513074));
}

$StringArray2* Bug6513074::source = nullptr;
$StringArray* Bug6513074::expected_line = nullptr;
$StringArray* Bug6513074::expected_word = nullptr;
$StringArray* Bug6513074::expected_char = nullptr;
bool Bug6513074::err = false;

void Bug6513074::init$() {
}

void Bug6513074::main($StringArray* args) {
	$init(Bug6513074);
	$var($Locale, defaultLocale, $Locale::getDefault());
	if ($nc($($nc(defaultLocale)->getLanguage()))->equals("th"_s)) {
		$Locale::setDefault($Locale::JAPAN);
		test6513074();
		$Locale::setDefault(defaultLocale);
	} else {
		test6513074();
	}
	if (Bug6513074::err) {
		$throwNew($RuntimeException, "Failed: Incorrect Text-breaking."_s);
	}
}

void Bug6513074::test6513074() {
	$init(Bug6513074);
	$init($Locale);
	$var($BreakIterator, bi, $BreakIterator::getLineInstance($Locale::JAPAN));
	for (int32_t i = 0; i < $nc(Bug6513074::source)->length; ++i) {
		testBreakIterator(bi, "Line"_s, $nc($nc(Bug6513074::source)->get(i))->get(0), $nc(Bug6513074::expected_line)->get(i), $nc($nc(Bug6513074::source)->get(i))->get(1));
	}
	$assign(bi, $BreakIterator::getWordInstance($Locale::JAPAN));
	for (int32_t i = 0; i < $nc(Bug6513074::source)->length; ++i) {
		testBreakIterator(bi, "Word"_s, $nc($nc(Bug6513074::source)->get(i))->get(0), $nc(Bug6513074::expected_word)->get(i), $nc($nc(Bug6513074::source)->get(i))->get(1));
	}
	$assign(bi, $BreakIterator::getCharacterInstance($Locale::JAPAN));
	for (int32_t i = 0; i < $nc(Bug6513074::source)->length; ++i) {
		testBreakIterator(bi, "Character"_s, $nc($nc(Bug6513074::source)->get(i))->get(0), $nc(Bug6513074::expected_char)->get(i), $nc($nc(Bug6513074::source)->get(i))->get(1));
	}
}

void Bug6513074::testBreakIterator($BreakIterator* bi, $String* type, $String* source, $String* expected, $String* description) {
	$init(Bug6513074);
	$nc(bi)->setText(source);
	int32_t start = bi->first();
	int32_t end = bi->next();
	$var($StringBuilder, sb, $new($StringBuilder));
	for (; end != $BreakIterator::DONE; start = end, end = bi->next()) {
		sb->append($($nc(source)->substring(start, end)));
		sb->append(u'/');
	}
	if (!$nc(expected)->equals($(sb->toString()))) {
		$init($System);
		$var($String, var$0, $$str({"Failed: Incorrect "_s, type, "-breaking for "_s, description, "\n\tExpected: "_s, $(toString(expected)), "\n\tGot:      "_s}));
		$nc($System::err)->println($$concat(var$0, $(toString($(sb->toString())))));
		Bug6513074::err = true;
	}
}

$String* Bug6513074::toString($String* s) {
	$init(Bug6513074);
	$var($StringBuilder, sb, $new($StringBuilder));
	for (int32_t i = 0; i < $nc(s)->length(); ++i) {
		sb->append($$str({"  0x"_s, $($Integer::toHexString(s->charAt(i)))}));
	}
	return sb->toString();
}

void clinit$Bug6513074($Class* class$) {
	$assignStatic(Bug6513074::source, $new($StringArray2, {$$new($StringArray, {
		u"\ufa30\ufa31 \ufa69\ufa6a"_s,
		"JIS X 0213 compatibility additions (\\uFA30-\\uFA6A)"_s
	})}));
	$assignStatic(Bug6513074::expected_line, $new($StringArray, {u"\ufa30/\ufa31 /\ufa69/\ufa6a/"_s}));
	$assignStatic(Bug6513074::expected_word, $new($StringArray, {u"\ufa30\ufa31/ /\ufa69\ufa6a/"_s}));
	$assignStatic(Bug6513074::expected_char, $new($StringArray, {u"\ufa30/\ufa31/ /\ufa69/\ufa6a/"_s}));
	Bug6513074::err = false;
}

Bug6513074::Bug6513074() {
}

$Class* Bug6513074::load$($String* name, bool initialize) {
	$loadClass(Bug6513074, name, initialize, &_Bug6513074_ClassInfo_, clinit$Bug6513074, allocate$Bug6513074);
	return class$;
}

$Class* Bug6513074::class$ = nullptr;