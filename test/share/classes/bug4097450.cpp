#include <bug4097450.h>

#include <java/text/ParseException.h>
#include <java/text/SimpleDateFormat.h>
#include <java/util/Date.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DateFormat = ::java::text::DateFormat;
using $ParseException = ::java::text::ParseException;
using $SimpleDateFormat = ::java::text::SimpleDateFormat;
using $Date = ::java::util::Date;

$MethodInfo _bug4097450_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug4097450::*)()>(&bug4097450::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug4097450::main))},
	{}
};

$ClassInfo _bug4097450_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug4097450",
	"java.lang.Object",
	nullptr,
	nullptr,
	_bug4097450_MethodInfo_
};

$Object* allocate$bug4097450($Class* clazz) {
	return $of($alloc(bug4097450));
}

void bug4097450::init$() {
}

void bug4097450::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
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
	$nc($System::out)->println("-------\t-------\t-------"_s);
	for (int32_t i = 0; i < dstring->length; ++i) {
		$nc($System::out)->print($$str({dformat->get(i), "\t"_s, dstring->get(i), "\t"_s}));
		$assign(formatter, $new($SimpleDateFormat, dformat->get(i)));
		try {
			$nc($System::out)->print($(resultFormatter->format($(formatter->parse(dstring->get(i))))));
		} catch ($ParseException& exception) {
			$nc($System::out)->print($$str({"exception --> "_s, exception}));
		}
		$nc($System::out)->println();
	}
}

bug4097450::bug4097450() {
}

$Class* bug4097450::load$($String* name, bool initialize) {
	$loadClass(bug4097450, name, initialize, &_bug4097450_ClassInfo_, allocate$bug4097450);
	return class$;
}

$Class* bug4097450::class$ = nullptr;