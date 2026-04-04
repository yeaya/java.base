#include <NonAnsiFileEncodingTest.h>
#include <jcpp.h>

#undef OS

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

void NonAnsiFileEncodingTest::init$() {
}

void NonAnsiFileEncodingTest::main($StringArray* s) {
	$useLocalObjectStack();
	$var($String, OS, $System::getProperty("os.name"_s));
	$var($String, lang, $System::getProperty("user.language"_s));
	$var($String, fileenc, $System::getProperty("file.encoding"_s));
	bool var$0 = $nc(OS)->equals("Windows 2000"_s);
	if (!(var$0 || OS->equals("Windows XP"_s))) {
		$nc($System::out)->println($$str({"This test is not meaningful on the platform \""_s, OS, "\"."_s}));
		return;
	}
	bool var$9 = $nc(lang)->equals("hy"_s);
	bool var$8 = var$9 || lang->equals("ka"_s);
	bool var$7 = var$8 || lang->equals("hi"_s);
	bool var$6 = var$7 || lang->equals("pa"_s);
	bool var$5 = var$6 || lang->equals("gu"_s);
	bool var$4 = var$5 || lang->equals("ta"_s);
	bool var$3 = var$4 || lang->equals("te"_s);
	bool var$2 = var$3 || lang->equals("kn"_s);
	bool var$1 = var$2 || lang->equals("mr"_s);
	if (!(var$1 || lang->equals("sa"_s))) {
		$nc($System::out)->println("Windows\' locale settings for this test is incorrect.  Select one of \"Armenian\", \"Georgian\", \"Hindi\", \"Punjabi\", \"Gujarati\", \"Tamil\", \"Telugu\", \"Kannada\", \"Marathi\", or \"Sanskrit\" for the user locale, and \"English(United States)\" for the system default locale using the Control Panel."_s);
		return;
	}
	if (!$nc(fileenc)->equals("utf-8"_s)) {
		$throwNew($RuntimeException, $$str({"file.encoding is incorrectly set to \""_s, fileenc, "\".  Should be \"utf-8\"."_s}));
	}
}

NonAnsiFileEncodingTest::NonAnsiFileEncodingTest() {
}

$Class* NonAnsiFileEncodingTest::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(NonAnsiFileEncodingTest, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(NonAnsiFileEncodingTest, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"NonAnsiFileEncodingTest",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(NonAnsiFileEncodingTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NonAnsiFileEncodingTest);
	});
	return class$;
}

$Class* NonAnsiFileEncodingTest::class$ = nullptr;