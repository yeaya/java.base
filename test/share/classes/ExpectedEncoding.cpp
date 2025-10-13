#include <ExpectedEncoding.h>

#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

$MethodInfo _ExpectedEncoding_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExpectedEncoding::*)()>(&ExpectedEncoding::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ExpectedEncoding::main))},
	{}
};

$ClassInfo _ExpectedEncoding_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ExpectedEncoding",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ExpectedEncoding_MethodInfo_
};

$Object* allocate$ExpectedEncoding($Class* clazz) {
	return $of($alloc(ExpectedEncoding));
}

void ExpectedEncoding::init$() {
}

void ExpectedEncoding::main($StringArray* args) {
	bool failed = false;
	if ($nc(args)->length != 2) {
		$init($System);
		$nc($System::out)->println("Usage:"_s);
		$nc($System::out)->println("$ java ExpectedEncoding <expected file.encoding> <expected sun.jnu.encoding>"_s);
		$nc($System::out)->println("$   use \"skip\" to skip checking property\'s value"_s);
		$System::exit(1);
	}
	$var($String, expectFileEnc, $nc(args)->get(0));
	$var($String, expectSunJnuEnc, args->get(1));
	$var($String, fileEnc, $System::getProperty("file.encoding"_s));
	$var($String, jnuEnc, $System::getProperty("sun.jnu.encoding"_s));
	if ("skip"_s->equals(expectFileEnc)) {
		$nc($System::err)->println("Expected file.encoding is \"skip\", ignoring"_s);
	} else if (fileEnc == nullptr || !fileEnc->equals(expectFileEnc)) {
		$nc($System::err)->println($$str({"Expected file.encoding: "_s, expectFileEnc}));
		$nc($System::err)->println($$str({"Actual file.encoding: "_s, fileEnc}));
		failed = true;
	}
	if ("skip"_s->equals(expectSunJnuEnc)) {
		$nc($System::err)->println("Expected sun.jnu.encoding is \"skip\", ignoring"_s);
	} else if (jnuEnc == nullptr || !jnuEnc->equals(expectSunJnuEnc)) {
		$nc($System::err)->println($$str({"Expected sun.jnu.encoding: "_s, expectSunJnuEnc}));
		$nc($System::err)->println($$str({"Actual sun.jnu.encoding: "_s, jnuEnc}));
		failed = true;
	}
	if (failed) {
		$throwNew($RuntimeException, "Test Failed"_s);
	}
}

ExpectedEncoding::ExpectedEncoding() {
}

$Class* ExpectedEncoding::load$($String* name, bool initialize) {
	$loadClass(ExpectedEncoding, name, initialize, &_ExpectedEncoding_ClassInfo_, allocate$ExpectedEncoding);
	return class$;
}

$Class* ExpectedEncoding::class$ = nullptr;