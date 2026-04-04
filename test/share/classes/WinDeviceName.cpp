#include <WinDeviceName.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

$StringArray* WinDeviceName::devnames = nullptr;

void WinDeviceName::init$() {
}

void WinDeviceName::main($StringArray* args) {
	$init(WinDeviceName);
	$useLocalObjectStack();
	$var($String, osName, $System::getProperty("os.name"_s));
	if (!$nc(osName)->startsWith("Windows"_s)) {
		return;
	}
	for (int32_t i = 0; i < $nc(WinDeviceName::devnames)->length; ++i) {
		$var($StringArray, names, $new($StringArray, {
			WinDeviceName::devnames->get(i),
			$$str({WinDeviceName::devnames->get(i), ".TXT"_s}),
			$($nc(WinDeviceName::devnames->get(i))->toLowerCase()),
			$$str({$($nc(WinDeviceName::devnames->get(i))->toLowerCase()), ".txt"_s})
		}));
		{
			$var($StringArray, arr$, names);
			for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
				$var($String, name, arr$->get(i$));
				{
					$var($File, f, $new($File, name));
					if (f->isFile()) {
						bool var$0 = "CLOCK$"_s->equals(WinDeviceName::devnames->get(i));
						if (var$0) {
							bool var$1 = osName->startsWith("Windows 9"_s);
							var$0 = var$1 || osName->startsWith("Windows Me"_s);
						}
						if (var$0) {
							continue;
						}
						$throwNew($RuntimeException, $$str({"isFile() returns true for Device name "_s, WinDeviceName::devnames->get(i)}));
					}
					if (!"CLOCK$"_s->equals(WinDeviceName::devnames->get(i))) {
						try {
							$nc($System::out)->println($(($$new($File, name))->getCanonicalPath()));
						} catch ($IOException& ie) {
							$throwNew($RuntimeException, $$str({"Fail to get canonical path for "_s, name}));
						}
					}
				}
			}
		}
	}
}

void WinDeviceName::clinit$($Class* clazz) {
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
	$FieldInfo fieldInfos$$[] = {
		{"devnames", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(WinDeviceName, devnames)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WinDeviceName, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(WinDeviceName, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"WinDeviceName",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(WinDeviceName, name, initialize, &classInfo$$, WinDeviceName::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(WinDeviceName);
	});
	return class$;
}

$Class* WinDeviceName::class$ = nullptr;