#include <WriteFromString.h>

#include <LocalStringWriter.h>
#include <java/io/StringWriter.h>
#include <jcpp.h>

using $LocalStringWriter = ::LocalStringWriter;
using $PrintStream = ::java::io::PrintStream;
using $StringWriter = ::java::io::StringWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _WriteFromString_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WriteFromString::*)()>(&WriteFromString::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&WriteFromString::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _WriteFromString_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"WriteFromString",
	"java.lang.Object",
	nullptr,
	nullptr,
	_WriteFromString_MethodInfo_
};

$Object* allocate$WriteFromString($Class* clazz) {
	return $of($alloc(WriteFromString));
}

void WriteFromString::init$() {
}

void WriteFromString::main($StringArray* argv) {
	$useLocalCurrentObjectStackCache();
	$var($LocalStringWriter, lsw, $new($LocalStringWriter));
	bool result = true;
	$var($String, testString, "Testing of what gets written"_s);
	lsw->write(testString, 1, 4);
	$var($String, res, lsw->toString());
	if (!$nc(res)->equals("esti"_s)) {
		result = false;
		$nc($System::err)->println($$str({"Writer.write is incorrect:"_s, res}));
	}
	$var($StringWriter, sw, $new($StringWriter));
	sw->write(testString, 1, 4);
	$assign(res, sw->toString());
	$var($String, ss, testString->substring(1, 4));
	$nc($System::out)->println($$str({"Substring = "_s, ss}));
	if (!$nc(res)->equals("esti"_s)) {
		$nc($System::err)->println($$str({"StringWriter.write is incorrect:"_s, res}));
		result = false;
	}
	if (!result) {
		$throwNew($Exception, "Writer.write method is incorrect."_s);
	}
}

WriteFromString::WriteFromString() {
}

$Class* WriteFromString::load$($String* name, bool initialize) {
	$loadClass(WriteFromString, name, initialize, &_WriteFromString_ClassInfo_, allocate$WriteFromString);
	return class$;
}

$Class* WriteFromString::class$ = nullptr;