#include <bug4097450.h>
#include <java/text/ParseException.h>
#include <java/text/SimpleDateFormat.h>
#include <java/util/Date.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ParseException = ::java::text::ParseException;
using $SimpleDateFormat = ::java::text::SimpleDateFormat;

void bug4097450::init$() {
}

void bug4097450::main($StringArray* args) {
	$useLocalObjectStack();
	$var($StringArray, dstring, $new($StringArray, {
		"97"_s,
		"1997"_s,
		"97"_s,
		"1997"_s,
		"01"_s,
		"2001"_s,
		"01"_s,
		"2001"_s,
		"1"_s,
		"1"_s,
		"11"_s,
		"11"_s,
		"111"_s,
		"111"_s
	}));
	$var($StringArray, dformat, $new($StringArray, {
		"yy"_s,
		"yy"_s,
		"yyyy"_s,
		"yyyy"_s,
		"yy"_s,
		"yy"_s,
		"yyyy"_s,
		"yyyy"_s,
		"yy"_s,
		"yyyy"_s,
		"yy"_s,
		"yyyy"_s,
		"yy"_s,
		"yyyy"_s
	}));
	$var($booleans, dresult, $new($booleans, {
		true,
		false,
		false,
		true,
		true,
		false,
		false,
		true,
		false,
		false,
		true,
		false,
		false,
		false
	}));
	$var($SimpleDateFormat, formatter, nullptr);
	$var($SimpleDateFormat, resultFormatter, $new($SimpleDateFormat, "yyyy"_s));
	$nc($System::out)->println("Format\tSource\tResult"_s);
	$System::out->println("-------\t-------\t-------"_s);
	for (int32_t i = 0; i < dstring->length; ++i) {
		$System::out->print($$str({dformat->get(i), "\t"_s, dstring->get(i), "\t"_s}));
		$assign(formatter, $new($SimpleDateFormat, dformat->get(i)));
		try {
			$System::out->print($(resultFormatter->format($(formatter->parse(dstring->get(i))))));
		} catch ($ParseException& exception) {
			$System::out->print($$str({"exception --> "_s, exception}));
		}
		$System::out->println();
	}
}

bug4097450::bug4097450() {
}

$Class* bug4097450::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug4097450, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug4097450, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug4097450",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(bug4097450, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4097450);
	});
	return class$;
}

$Class* bug4097450::class$ = nullptr;