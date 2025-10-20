#include <WinDeviceName.h>

#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

$FieldInfo _WinDeviceName_FieldInfo_[] = {
	{"devnames", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(WinDeviceName, devnames)},
	{}
};

$MethodInfo _WinDeviceName_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WinDeviceName::*)()>(&WinDeviceName::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&WinDeviceName::main))},
	{}
};

$ClassInfo _WinDeviceName_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"WinDeviceName",
	"java.lang.Object",
	nullptr,
	_WinDeviceName_FieldInfo_,
	_WinDeviceName_MethodInfo_
};

$Object* allocate$WinDeviceName($Class* clazz) {
	return $of($alloc(WinDeviceName));
}

$StringArray* WinDeviceName::devnames = nullptr;

void WinDeviceName::init$() {
}

void WinDeviceName::main($StringArray* args) {
	$init(WinDeviceName);
	$useLocalCurrentObjectStackCache();
	$var($String, osName, $System::getProperty("os.name"_s));
	if (!$nc(osName)->startsWith("Windows"_s)) {
		return;
	}
	for (int32_t i = 0; i < $nc(WinDeviceName::devnames)->length; ++i) {
		$var($StringArray, names, $new($StringArray, {
			$nc(WinDeviceName::devnames)->get(i),
			$$str({$nc(WinDeviceName::devnames)->get(i), ".TXT"_s}),
			$($nc($nc(WinDeviceName::devnames)->get(i))->toLowerCase()),
			$$str({$($nc($nc(WinDeviceName::devnames)->get(i))->toLowerCase()), ".txt"_s})
		}));
		{
			$var($StringArray, arr$, names);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($String, name, arr$->get(i$));
				{
					$var($File, f, $new($File, name));
					if (f->isFile()) {
						bool var$0 = "CLOCK$"_s->equals($nc(WinDeviceName::devnames)->get(i));
						if (var$0) {
							bool var$1 = $nc(osName)->startsWith("Windows 9"_s);
							var$0 = (var$1 || $nc(osName)->startsWith("Windows Me"_s));
						}
						if (var$0) {
							continue;
						}
						$throwNew($RuntimeException, $$str({"isFile() returns true for Device name "_s, $nc(WinDeviceName::devnames)->get(i)}));
					}
					if (!"CLOCK$"_s->equals($nc(WinDeviceName::devnames)->get(i))) {
						try {
							$nc($System::out)->println($(($$new($File, name))->getCanonicalPath()));
						} catch ($IOException&) {
							$var($IOException, ie, $catch());
							$throwNew($RuntimeException, $$str({"Fail to get canonical path for "_s, name}));
						}
					}
				}
			}
		}
	}
}

void clinit$WinDeviceName($Class* class$) {
	$assignStatic(WinDeviceName::devnames, $new($StringArray, {
		"CON"_s,
		"PRN"_s,
		"AUX"_s,
		"NUL"_s,
		"COM1"_s,
		"COM2"_s,
		"COM3"_s,
		"COM4"_s,
		"COM5"_s,
		"COM6"_s,
		"COM7"_s,
		"COM8"_s,
		"COM9"_s,
		"LPT1"_s,
		"LPT2"_s,
		"LPT3"_s,
		"LPT4"_s,
		"LPT5"_s,
		"LPT6"_s,
		"LPT7"_s,
		"LPT8"_s,
		"LPT9"_s,
		"CLOCK$"_s
	}));
}

WinDeviceName::WinDeviceName() {
}

$Class* WinDeviceName::load$($String* name, bool initialize) {
	$loadClass(WinDeviceName, name, initialize, &_WinDeviceName_ClassInfo_, clinit$WinDeviceName, allocate$WinDeviceName);
	return class$;
}

$Class* WinDeviceName::class$ = nullptr;