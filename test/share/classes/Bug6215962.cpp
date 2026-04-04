#include <Bug6215962.h>
#include <java/text/ChoiceFormat.h>
#include <java/text/DateFormatSymbols.h>
#include <java/text/MessageFormat.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef JAPAN
#undef US

using $StringArray2 = $Array<::java::lang::String, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ChoiceFormat = ::java::text::ChoiceFormat;
using $DateFormatSymbols = ::java::text::DateFormatSymbols;
using $MessageFormat = ::java::text::MessageFormat;
using $Locale = ::java::util::Locale;

void Bug6215962::init$() {
}

void Bug6215962::main($StringArray* args) {
	testMessageFormat();
	testChoiceFormat();
	testDateFormatSymbols();
}

void Bug6215962::testMessageFormat() {
	$useLocalObjectStack();
	$var($MessageFormat, mf1, $new($MessageFormat, "{0}"_s, nullptr));
	$var($MessageFormat, mf2, $new($MessageFormat, "{0}"_s, nullptr));
	check(mf1, mf2, true);
	mf1->setLocale(nullptr);
	check(mf1, mf2, true);
	$init($Locale);
	$assign(mf1, $new($MessageFormat, "{0}"_s, $Locale::US));
	check(mf1, mf2, false);
	$assign(mf2, $new($MessageFormat, "{0}"_s, $Locale::JAPAN));
	check(mf1, mf2, false);
	$assign(mf1, $new($MessageFormat, "{0}"_s, $$new($Locale, "ja"_s, "JP"_s)));
	check(mf1, mf2, true);
	mf1->setLocale(nullptr);
	check(mf1, mf2, false);
	$assign(mf1, $new($MessageFormat, "{0}"_s, $$new($Locale, "ja"_s, "JP"_s, "FOO"_s)));
	check(mf1, mf2, false);
	$assign(mf2, $new($MessageFormat, "{1}"_s, $$new($Locale, "ja"_s, "JP"_s, "FOO"_s)));
	check(mf1, mf2, false);
	$assign(mf1, $new($MessageFormat, "{1}"_s, $$new($Locale, "ja"_s, "JP"_s, "FOO"_s)));
	check(mf1, mf2, true);
	$assign(mf1, $new($MessageFormat, "{1, date}"_s, $$new($Locale, "ja"_s, "JP"_s, "FOO"_s)));
	check(mf1, mf2, false);
	$assign(mf2, $new($MessageFormat, "{1, date}"_s, $$new($Locale, "ja"_s, "JP"_s, "FOO"_s)));
	check(mf1, mf2, true);
}

void Bug6215962::check($MessageFormat* f1, $MessageFormat* f2, bool expected) {
	$useLocalObjectStack();
	bool got = $nc(f1)->equals(f2);
	if (got != expected) {
		$throwNew($RuntimeException, $$str({"Test failed for MessageFormat.equals(). Got: "_s, $$str(got), ", Expected: "_s, $$str(expected)}));
	}
}

void Bug6215962::testChoiceFormat() {
	$useLocalObjectStack();
	$var($doubles, limits0, $new($doubles, {
		0,
		1,
		2,
		3,
		4,
		5,
		6
	}));
	$var($doubles, limits1, $new($doubles, {
		1,
		2,
		3,
		4,
		5,
		6,
		7
	}));
	$var($StringArray, monthNames0, $new($StringArray, {
		"Sun"_s,
		"Mon"_s,
		"Tue"_s,
		"Wed"_s,
		"Thu"_s,
		"Fri"_s,
		"Sat"_s
	}));
	$var($StringArray, monthNames1, $new($StringArray, {
		"Sun"_s,
		"Mon"_s,
		"Tue"_s,
		"Wed"_s,
		"Thur"_s,
		"Fri"_s,
		"Sat"_s
	}));
	$var($ChoiceFormat, cf1, $new($ChoiceFormat, limits1, monthNames0));
	$var($ChoiceFormat, cf2, $new($ChoiceFormat, limits1, monthNames0));
	check(cf1, cf2, true);
	$assign(cf2, $new($ChoiceFormat, limits0, monthNames0));
	check(cf1, cf2, false);
	$assign(cf2, $new($ChoiceFormat, limits1, monthNames1));
	check(cf1, cf2, false);
}

void Bug6215962::check($ChoiceFormat* f1, $ChoiceFormat* f2, bool expected) {
	$useLocalObjectStack();
	bool got = $nc(f1)->equals(f2);
	if (got != expected) {
		$throwNew($RuntimeException, $$str({"Test failed for ChoiceFormat.equals(). Got: "_s, $$str(got), ", Expected: "_s, $$str(expected)}));
	}
}

void Bug6215962::testDateFormatSymbols() {
	$useLocalObjectStack();
	$var($DateFormatSymbols, dfs1, $new($DateFormatSymbols));
	$var($DateFormatSymbols, dfs2, $new($DateFormatSymbols));
	check(dfs1, dfs2, true);
	$var($StringArray, tmp, dfs1->getMonths());
	$var($String, saved, $nc(tmp)->get(0));
	tmp->set(0, "Foo"_s);
	dfs1->setMonths(tmp);
	check(dfs1, dfs2, false);
	tmp->set(0, saved);
	dfs1->setMonths(tmp);
	check(dfs1, dfs2, true);
	$var($String, pattern, dfs2->getLocalPatternChars());
	dfs2->setLocalPatternChars("Bar"_s);
	check(dfs1, dfs2, false);
	dfs2->setLocalPatternChars(pattern);
	check(dfs1, dfs2, true);
	$var($StringArray2, zones, dfs1->getZoneStrings());
	$assign(saved, $nc($nc(zones)->get(0))->get(1));
	$nc(zones->get(0))->set(1, "Yokohama Summer Time"_s);
	dfs1->setZoneStrings(zones);
	check(dfs1, dfs2, false);
	$nc(zones->get(0))->set(1, saved);
	dfs1->setZoneStrings(zones);
	check(dfs1, dfs2, true);
}

void Bug6215962::check($DateFormatSymbols* dfs1, $DateFormatSymbols* dfs2, bool expected) {
	$useLocalObjectStack();
	bool got = $nc(dfs1)->equals(dfs2);
	if (got != expected) {
		$throwNew($RuntimeException, $$str({"Test failed for DateFormatSymbols.equals(). Got: "_s, $$str(got), ", Expected: "_s, $$str(expected)}));
	}
}

Bug6215962::Bug6215962() {
}

$Class* Bug6215962::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Bug6215962, init$, void)},
		{"check", "(Ljava/text/MessageFormat;Ljava/text/MessageFormat;Z)V", nullptr, $STATIC, $staticMethod(Bug6215962, check, void, $MessageFormat*, $MessageFormat*, bool)},
		{"check", "(Ljava/text/ChoiceFormat;Ljava/text/ChoiceFormat;Z)V", nullptr, $STATIC, $staticMethod(Bug6215962, check, void, $ChoiceFormat*, $ChoiceFormat*, bool)},
		{"check", "(Ljava/text/DateFormatSymbols;Ljava/text/DateFormatSymbols;Z)V", nullptr, $STATIC, $staticMethod(Bug6215962, check, void, $DateFormatSymbols*, $DateFormatSymbols*, bool)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Bug6215962, main, void, $StringArray*)},
		{"testChoiceFormat", "()V", nullptr, $STATIC, $staticMethod(Bug6215962, testChoiceFormat, void)},
		{"testDateFormatSymbols", "()V", nullptr, $STATIC, $staticMethod(Bug6215962, testDateFormatSymbols, void)},
		{"testMessageFormat", "()V", nullptr, $STATIC, $staticMethod(Bug6215962, testMessageFormat, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Bug6215962",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Bug6215962, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Bug6215962);
	});
	return class$;
}

$Class* Bug6215962::class$ = nullptr;