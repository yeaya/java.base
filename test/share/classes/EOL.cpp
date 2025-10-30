#include <EOL.h>

#include <java/io/BufferedReader.h>
#include <java/io/Reader.h>
#include <java/io/StringReader.h>
#include <jcpp.h>

#undef EOL

using $BufferedReader = ::java::io::BufferedReader;
using $PrintStream = ::java::io::PrintStream;
using $Reader = ::java::io::Reader;
using $StringReader = ::java::io::StringReader;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

$MethodInfo _EOL_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(EOL::*)()>(&EOL::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&EOL::main)), "java.io.IOException"},
	{}
};

$ClassInfo _EOL_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"EOL",
	"java.lang.Object",
	nullptr,
	nullptr,
	_EOL_MethodInfo_
};

$Object* allocate$EOL($Class* clazz) {
	return $of($alloc(EOL));
}

void EOL::init$() {
}

void EOL::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($Reader, sr, $new($StringReader, "one\rtwo\r\nthree\nfour\r"_s));
	$var($BufferedReader, br, $new($BufferedReader, sr));
	for (int32_t i = 0;; ++i) {
		$var($String, l, br->readLine());
		if (l == nullptr) {
			if (i != 4) {
				$throwNew($RuntimeException, $$str({"Expected 4 lines, got "_s, $$str(i)}));
			}
			break;
		}
		$nc($System::err)->println($$str({$$str(i), ": "_s, l}));
	}
}

EOL::EOL() {
}

$Class* EOL::load$($String* name, bool initialize) {
	$loadClass(EOL, name, initialize, &_EOL_ClassInfo_, allocate$EOL);
	return class$;
}

$Class* EOL::class$ = nullptr;