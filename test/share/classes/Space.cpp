#include <Space.h>
#include <java/io/BufferedReader.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/InputStreamReader.h>
#include <java/lang/Process.h>
#include <java/lang/Runtime.h>
#include <jcpp.h>

using $BufferedReader = ::java::io::BufferedReader;
using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $InputStreamReader = ::java::io::InputStreamReader;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Process = ::java::lang::Process;
using $Runtime = ::java::lang::Runtime;
using $RuntimeException = ::java::lang::RuntimeException;

void Space::init$() {
}

void Space::main($StringArray* args) {
	$useLocalObjectStack();
	$init($File);
	if ($File::separatorChar == u'\\') {
		try {
			$var($Process, p, $$nc($Runtime::getRuntime())->exec("cmd /c echo hello"_s));
			$var($BufferedReader, reader, $new($BufferedReader, $$new($InputStreamReader, $($nc(p)->getInputStream()))));
			p->waitFor();
			$var($String, echo, reader->readLine());
			if ($nc(echo)->length() == 6) {
				$throwNew($RuntimeException, "Extra space in command."_s);
			}
		} catch ($IOException& e) {
			return;
		}
	}
}

Space::Space() {
}

$Class* Space::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Space, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Space, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Space",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Space, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Space);
	});
	return class$;
}

$Class* Space::class$ = nullptr;