#include <Space.h>

#include <java/io/BufferedReader.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/InputStreamReader.h>
#include <java/io/Reader.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Process.h>
#include <java/lang/Runtime.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $BufferedReader = ::java::io::BufferedReader;
using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $InputStreamReader = ::java::io::InputStreamReader;
using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Process = ::java::lang::Process;
using $Runtime = ::java::lang::Runtime;
using $RuntimeException = ::java::lang::RuntimeException;

$MethodInfo _Space_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Space::*)()>(&Space::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Space::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _Space_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Space",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Space_MethodInfo_
};

$Object* allocate$Space($Class* clazz) {
	return $of($alloc(Space));
}

void Space::init$() {
}

void Space::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$init($File);
	if ($File::separatorChar == u'\\') {
		try {
			$var($Process, p, $nc($($Runtime::getRuntime()))->exec("cmd /c echo hello"_s));
			$var($BufferedReader, reader, $new($BufferedReader, $$new($InputStreamReader, $($nc(p)->getInputStream()))));
			$nc(p)->waitFor();
			$var($String, echo, reader->readLine());
			if ($nc(echo)->length() == 6) {
				$throwNew($RuntimeException, "Extra space in command."_s);
			}
		} catch ($IOException&) {
			$var($IOException, e, $catch());
			return;
		}
	}
}

Space::Space() {
}

$Class* Space::load$($String* name, bool initialize) {
	$loadClass(Space, name, initialize, &_Space_ClassInfo_, allocate$Space);
	return class$;
}

$Class* Space::class$ = nullptr;