#include <MaxPath.h>

#include <java/io/File.h>
#include <java/io/IOException.h>
#include <jcpp.h>

#undef MAX_PATH

using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

$MethodInfo _MaxPath_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MaxPath::*)()>(&MaxPath::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&MaxPath::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _MaxPath_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"MaxPath",
	"java.lang.Object",
	nullptr,
	nullptr,
	_MaxPath_MethodInfo_
};

$Object* allocate$MaxPath($Class* clazz) {
	return $of($alloc(MaxPath));
}

void MaxPath::init$() {
}

void MaxPath::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($String, osName, $System::getProperty("os.name"_s));
	if (!$nc(osName)->startsWith("Windows"_s)) {
		return;
	}
	int32_t MAX_PATH = 260;
	$var($String, dir, $str({$($$new($File, "."_s)->getAbsolutePath()), "\\"_s}));
	$var($String, padding, "1234567890123456789012345678901234567890012345678900123456789001234567890012345678900123456789001234567890012345678900123456789001234567890012345678900123456789001234567890012345678900123456789001234567890012345678900123456789001234567890012345678900123456789001234567890012345678900123456789001234567890012345678900123456789001234567890"_s);
	for (int32_t i = 240 - $nc(dir)->length(); i < MAX_PATH - dir->length(); ++i) {
		$var($String, longname, $str({dir, $(padding->substring(0, i))}));
		try {
			$var($File, f, $new($File, longname));
			if (f->createNewFile()) {
				bool var$0 = !f->exists();
				if (var$0 || !f->canRead()) {
					$throwNew($RuntimeException, $$str({"Failed at length: "_s, $$str($nc(longname)->length())}));
				}
				f->delete$();
			}
		} catch ($IOException& e) {
			$nc($System::out)->println($$str({"Failed at length: "_s, $$str($nc(longname)->length())}));
			$throw(e);
		}
	}
}

MaxPath::MaxPath() {
}

$Class* MaxPath::load$($String* name, bool initialize) {
	$loadClass(MaxPath, name, initialize, &_MaxPath_ClassInfo_, allocate$MaxPath);
	return class$;
}

$Class* MaxPath::class$ = nullptr;