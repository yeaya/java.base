#include <ReadReadLine.h>

#include <java/io/LineNumberReader.h>
#include <java/io/Reader.h>
#include <java/io/StringReader.h>
#include <jcpp.h>

using $LineNumberReader = ::java::io::LineNumberReader;
using $Reader = ::java::io::Reader;
using $StringReader = ::java::io::StringReader;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _ReadReadLine_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ReadReadLine::*)()>(&ReadReadLine::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ReadReadLine::main)), "java.lang.Exception"},
	{"test", "(Ljava/lang/String;I)V", nullptr, $STATIC, $method(static_cast<void(*)($String*,int32_t)>(&ReadReadLine::test)), "java.lang.Exception"},
	{}
};

$ClassInfo _ReadReadLine_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ReadReadLine",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ReadReadLine_MethodInfo_
};

$Object* allocate$ReadReadLine($Class* clazz) {
	return $of($alloc(ReadReadLine));
}

void ReadReadLine::init$() {
}

void ReadReadLine::main($StringArray* args) {
	test("\r\n"_s, 1);
	test("\r\r\n"_s, 2);
	test("\r\n\n\n"_s, 3);
}

void ReadReadLine::test($String* s, int32_t good) {
	$useLocalCurrentObjectStackCache();
	int32_t c = 0;
	int32_t line = 0;
	$var($LineNumberReader, r, $new($LineNumberReader, $$new($StringReader, s), 2));
	if ((c = r->read()) >= 0) {
		while (r->readLine() != nullptr) {
		}
	}
	line = r->getLineNumber();
	if (line != good) {
		$throwNew($Exception, $$str({"Failed test: Expected line number "_s, $$str(good), " Got: "_s, $$str(line)}));
	}
}

ReadReadLine::ReadReadLine() {
}

$Class* ReadReadLine::load$($String* name, bool initialize) {
	$loadClass(ReadReadLine, name, initialize, &_ReadReadLine_ClassInfo_, allocate$ReadReadLine);
	return class$;
}

$Class* ReadReadLine::class$ = nullptr;