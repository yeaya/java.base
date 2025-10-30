#include <WinMaxPath.h>

#include <java/io/FileNotFoundException.h>
#include <java/io/FileOutputStream.h>
#include <java/util/Arrays.h>
#include <jcpp.h>

using $FileNotFoundException = ::java::io::FileNotFoundException;
using $FileOutputStream = ::java::io::FileOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;

$MethodInfo _WinMaxPath_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WinMaxPath::*)()>(&WinMaxPath::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&WinMaxPath::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _WinMaxPath_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"WinMaxPath",
	"java.lang.Object",
	nullptr,
	nullptr,
	_WinMaxPath_MethodInfo_
};

$Object* allocate$WinMaxPath($Class* clazz) {
	return $of($alloc(WinMaxPath));
}

void WinMaxPath::init$() {
}

void WinMaxPath::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($String, osName, $System::getProperty("os.name"_s));
	if (!$nc(osName)->startsWith("Windows"_s)) {
		return;
	}
	try {
		$var($chars, as, $new($chars, 0x0000FDE8));
		$Arrays::fill(as, u'a');
		$var($FileOutputStream, out, $new($FileOutputStream, $$new($String, as)));
		out->close();
	} catch ($FileNotFoundException& x) {
	}
}

WinMaxPath::WinMaxPath() {
}

$Class* WinMaxPath::load$($String* name, bool initialize) {
	$loadClass(WinMaxPath, name, initialize, &_WinMaxPath_ClassInfo_, allocate$WinMaxPath);
	return class$;
}

$Class* WinMaxPath::class$ = nullptr;