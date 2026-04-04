#include <Bug6970930.h>
#include <java/text/ParseException.h>
#include <java/text/RuleBasedCollator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $ParseException = ::java::text::ParseException;
using $RuleBasedCollator = ::java::text::RuleBasedCollator;

bool Bug6970930::err = false;

void Bug6970930::init$() {
}

void Bug6970930::main($StringArray* args) {
	$init(Bug6970930);
	test1(nullptr, nullptr);
	test1("\"foo\""_s, nullptr);
	test1(nullptr, "\"bar\""_s);
	if (Bug6970930::err) {
		$throwNew($RuntimeException, "Failed."_s);
	} else {
		$nc($System::out)->println("Passed."_s);
	}
}

void Bug6970930::test1($String* s1, $String* s2) {
	$init(Bug6970930);
	$useLocalObjectStack();
	$var($RuleBasedCollator, col, nullptr);
	try {
		$assign(col, $new($RuleBasedCollator, "< a < b"_s));
	} catch ($ParseException& e) {
		Bug6970930::err = true;
		$nc($System::err)->println($of(e));
	}
	try {
		$nc(col)->compare("foo"_s, "bar"_s);
		col->compare(s1, s2);
		Bug6970930::err = true;
		$nc($System::err)->println($$str({"No exception was thrown for compare("_s, s1, ", "_s, s2, ")."_s}));
	} catch ($NullPointerException& e) {
		$nc($System::out)->println($$str({"NPE was thrown as expected for compare("_s, s1, ", "_s, s2, ")."_s}));
	} catch ($Exception& e) {
		Bug6970930::err = true;
		$nc($System::err)->println($$str({"Unexpected exception was thrown for compare("_s, s1, ", "_s, s2, "): "_s, e}));
	}
}

void Bug6970930::clinit$($Class* clazz) {
	Bug6970930::err = false;
}

Bug6970930::Bug6970930() {
}

$Class* Bug6970930::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"err", "Z", nullptr, $PRIVATE | $STATIC, $staticField(Bug6970930, err)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Bug6970930, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Bug6970930, main, void, $StringArray*)},
		{"test1", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(Bug6970930, test1, void, $String*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Bug6970930",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Bug6970930, name, initialize, &classInfo$$, Bug6970930::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Bug6970930);
	});
	return class$;
}

$Class* Bug6970930::class$ = nullptr;