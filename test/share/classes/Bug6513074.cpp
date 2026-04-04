#include <Bug6513074.h>
#include <java/text/BreakIterator.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef DONE
#undef JAPAN

using $StringArray2 = $Array<::java::lang::String, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $BreakIterator = ::java::text::BreakIterator;
using $Locale = ::java::util::Locale;

$StringArray2* Bug6513074::source = nullptr;
$StringArray* Bug6513074::expected_line = nullptr;
$StringArray* Bug6513074::expected_word = nullptr;
$StringArray* Bug6513074::expected_char = nullptr;
bool Bug6513074::err = false;

void Bug6513074::init$() {
}

void Bug6513074::main($StringArray* args) {
	$init(Bug6513074);
	$useLocalObjectStack();
	$var($Locale, defaultLocale, $Locale::getDefault());
	if ($$nc($nc(defaultLocale)->getLanguage())->equals("th"_s)) {
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
	for (int32_t i = 0; i < Bug6513074::source->length; ++i) {
		testBreakIterator(bi, "Line"_s, $nc(Bug6513074::source->get(i))->get(0), Bug6513074::expected_line->get(i), $nc(Bug6513074::source->get(i))->get(1));
	}
	$assign(bi, $BreakIterator::getWordInstance($Locale::JAPAN));
	for (int32_t i = 0; i < Bug6513074::source->length; ++i) {
		testBreakIterator(bi, "Word"_s, $nc(Bug6513074::source->get(i))->get(0), Bug6513074::expected_word->get(i), $nc(Bug6513074::source->get(i))->get(1));
	}
	$assign(bi, $BreakIterator::getCharacterInstance($Locale::JAPAN));
	for (int32_t i = 0; i < Bug6513074::source->length; ++i) {
		testBreakIterator(bi, "Character"_s, $nc(Bug6513074::source->get(i))->get(0), Bug6513074::expected_char->get(i), $nc(Bug6513074::source->get(i))->get(1));
	}
}

void Bug6513074::testBreakIterator($BreakIterator* bi, $String* type, $String* source, $String* expected, $String* description) {
	$init(Bug6513074);
	$useLocalObjectStack();
	$nc(bi)->setText(source);
	int32_t start = bi->first();
	int32_t end = bi->next();
	$var($StringBuilder, sb, $new($StringBuilder));
	for (; end != $BreakIterator::DONE; start = end, end = bi->next()) {
		sb->append($($nc(source)->substring(start, end)));
		sb->append(u'/');
	}
	if (!$nc(expected)->equals($(sb->toString()))) {
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append("Failed: Incorrect "_s);
		var$0->append(type);
		var$0->append("-breaking for "_s);
		var$0->append(description);
		var$0->append("\n\tExpected: "_s);
		var$0->append($(toString(expected)));
		var$0->append("\n\tGot:      "_s);
		var$0->append($(toString($(sb->toString()))));
		$nc($System::err)->println($$str(var$0));
		Bug6513074::err = true;
	}
}

$String* Bug6513074::toString($String* s) {
	$init(Bug6513074);
	$useLocalObjectStack();
	$var($StringBuilder, sb, $new($StringBuilder));
	for (int32_t i = 0; i < $nc(s)->length(); ++i) {
		sb->append($$str({"  0x"_s, $($Integer::toHexString(s->charAt(i)))}));
	}
	return sb->toString();
}

void Bug6513074::clinit$($Class* clazz) {
	$assignStatic(Bug6513074::source, $new($StringArray2, {$$new($StringArray, {
		u"侮僧 響頻"_s,
		"JIS X 0213 compatibility additions (\\uFA30-\\uFA6A)"_s
	})}));
	$assignStatic(Bug6513074::expected_line, $new($StringArray, {u"侮/僧 /響/頻/"_s}));
	$assignStatic(Bug6513074::expected_word, $new($StringArray, {u"侮僧/ /響頻/"_s}));
	$assignStatic(Bug6513074::expected_char, $new($StringArray, {u"侮/僧/ /響/頻/"_s}));
	Bug6513074::err = false;
}

Bug6513074::Bug6513074() {
}

$Class* Bug6513074::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"source", "[[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Bug6513074, source)},
		{"expected_line", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Bug6513074, expected_line)},
		{"expected_word", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Bug6513074, expected_word)},
		{"expected_char", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Bug6513074, expected_char)},
		{"err", "Z", nullptr, $PRIVATE | $STATIC, $staticField(Bug6513074, err)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Bug6513074, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Bug6513074, main, void, $StringArray*)},
		{"test6513074", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(Bug6513074, test6513074, void)},
		{"testBreakIterator", "(Ljava/text/BreakIterator;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(Bug6513074, testBreakIterator, void, $BreakIterator*, $String*, $String*, $String*, $String*)},
		{"toString", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(Bug6513074, toString, $String*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Bug6513074",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Bug6513074, name, initialize, &classInfo$$, Bug6513074::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Bug6513074);
	});
	return class$;
}

$Class* Bug6513074::class$ = nullptr;