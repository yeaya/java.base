#include <Fill4BufferedReader.h>

#include <Fill4BufferedReader$Source.h>
#include <java/io/BufferedReader.h>
#include <java/io/Reader.h>
#include <jcpp.h>

using $Fill4BufferedReader$Source = ::Fill4BufferedReader$Source;
using $BufferedReader = ::java::io::BufferedReader;
using $PrintStream = ::java::io::PrintStream;
using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _Fill4BufferedReader_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Fill4BufferedReader::*)()>(&Fill4BufferedReader::init$))},
	{"go", "(I)V", nullptr, $STATIC, $method(static_cast<void(*)(int32_t)>(&Fill4BufferedReader::go)), "java.lang.Exception"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Fill4BufferedReader::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _Fill4BufferedReader_InnerClassesInfo_[] = {
	{"Fill4BufferedReader$Source", "Fill4BufferedReader", "Source", $STATIC},
	{}
};

$ClassInfo _Fill4BufferedReader_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Fill4BufferedReader",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Fill4BufferedReader_MethodInfo_,
	nullptr,
	nullptr,
	_Fill4BufferedReader_InnerClassesInfo_,
	nullptr,
	nullptr,
	"Fill4BufferedReader$Source"
};

$Object* allocate$Fill4BufferedReader($Class* clazz) {
	return $of($alloc(Fill4BufferedReader));
}

void Fill4BufferedReader::init$() {
}

void Fill4BufferedReader::go(int32_t shortFall) {
	$useLocalCurrentObjectStackCache();
	$var($Reader, r, $new($BufferedReader, $$new($Fill4BufferedReader$Source, shortFall), 10));
	$var($chars, cbuf, $new($chars, 8));
	int32_t n1 = r->read(cbuf);
	int32_t n2 = r->read(cbuf);
	$nc($System::err)->println($$str({"Shortfall "_s, $$str(shortFall), ": Read "_s, $$str(n1), ", then "_s, $$str(n2), " chars"_s}));
	if (n1 != cbuf->length) {
		$throwNew($Exception, $$str({"First read returned "_s, $$str(n1)}));
	}
	if (n2 != cbuf->length) {
		$throwNew($Exception, $$str({"Second read returned "_s, $$str(n2)}));
	}
}

void Fill4BufferedReader::main($StringArray* args) {
	for (int32_t i = 0; i < 8; ++i) {
		go(i);
	}
}

Fill4BufferedReader::Fill4BufferedReader() {
}

$Class* Fill4BufferedReader::load$($String* name, bool initialize) {
	$loadClass(Fill4BufferedReader, name, initialize, &_Fill4BufferedReader_ClassInfo_, allocate$Fill4BufferedReader);
	return class$;
}

$Class* Fill4BufferedReader::class$ = nullptr;