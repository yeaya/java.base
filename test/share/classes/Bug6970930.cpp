#include <Bug6970930.h>

#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/text/ParseException.h>
#include <java/text/RuleBasedCollator.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $ParseException = ::java::text::ParseException;
using $RuleBasedCollator = ::java::text::RuleBasedCollator;

$FieldInfo _Bug6970930_FieldInfo_[] = {
	{"err", "Z", nullptr, $PRIVATE | $STATIC, $staticField(Bug6970930, err)},
	{}
};

$MethodInfo _Bug6970930_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Bug6970930::*)()>(&Bug6970930::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Bug6970930::main))},
	{"test1", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*,$String*)>(&Bug6970930::test1))},
	{}
};

$ClassInfo _Bug6970930_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Bug6970930",
	"java.lang.Object",
	nullptr,
	_Bug6970930_FieldInfo_,
	_Bug6970930_MethodInfo_
};

$Object* allocate$Bug6970930($Class* clazz) {
	return $of($alloc(Bug6970930));
}

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
		$init($System);
		$nc($System::out)->println("Passed."_s);
	}
}

void Bug6970930::test1($String* s1, $String* s2) {
	$init(Bug6970930);
	$useLocalCurrentObjectStackCache();
	$var($RuleBasedCollator, col, nullptr);
	try {
		$assign(col, $new($RuleBasedCollator, "< a < b"_s));
	} catch ($ParseException&) {
		$var($ParseException, e, $catch());
		Bug6970930::err = true;
		$init($System);
		$nc($System::err)->println($of(e));
	}
	try {
		$nc(col)->compare("foo"_s, "bar"_s);
		col->compare(s1, s2);
		Bug6970930::err = true;
		$init($System);
		$nc($System::err)->println($$str({"No exception was thrown for compare("_s, s1, ", "_s, s2, ")."_s}));
	} catch ($NullPointerException&) {
		$var($NullPointerException, e, $catch());
		$init($System);
		$nc($System::out)->println($$str({"NPE was thrown as expected for compare("_s, s1, ", "_s, s2, ")."_s}));
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		Bug6970930::err = true;
		$init($System);
		$nc($System::err)->println($$str({"Unexpected exception was thrown for compare("_s, s1, ", "_s, s2, "): "_s, e}));
	}
}

void clinit$Bug6970930($Class* class$) {
	Bug6970930::err = false;
}

Bug6970930::Bug6970930() {
}

$Class* Bug6970930::load$($String* name, bool initialize) {
	$loadClass(Bug6970930, name, initialize, &_Bug6970930_ClassInfo_, clinit$Bug6970930, allocate$Bug6970930);
	return class$;
}

$Class* Bug6970930::class$ = nullptr;