#include <WinCommand.h>
#include <CommandRunner.h>
#include <java/io/File.h>
#include <java/io/FileOutputStream.h>
#include <jcpp.h>

#undef CD

using $CommandRunner = ::CommandRunner;
using $File = ::java::io::File;
using $FileOutputStream = ::java::io::FileOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

int32_t WinCommand::failed = 0;

void WinCommand::init$() {
}

void WinCommand::fail($String* msg) {
	$init(WinCommand);
	$nc($System::err)->printf("FAIL: %s%n"_s, $$new($ObjectArray, {msg}));
	++WinCommand::failed;
}

$String* WinCommand::outputOf($StringArray* args) {
	$init(WinCommand);
	$useLocalObjectStack();
	try {
		$var($CommandRunner, cr, $new($CommandRunner, args));
		if (cr->exitValue != 0) {
			fail("exitValue != 0"_s);
		}
		if (!$nc(cr->err)->equals(""_s)) {
			fail($$str({"stderr: "_s, cr->err}));
		}
		return $nc(cr->out)->replaceFirst("[\r\n]+$"_s, ""_s);
	} catch ($Exception& e) {
		fail($(e->toString()));
		return ""_s;
	}
	$shouldNotReachHere();
}

void WinCommand::checkCD($StringArray* filespecs) {
	$init(WinCommand);
	$useLocalObjectStack();
	$var($String, firstCD, nullptr);
	{
		$var($StringArray, arr$, filespecs);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($String, filespec, arr$->get(i$));
			{
				$var($String, CD, outputOf($$new($StringArray, {
					filespec,
					"/C"_s,
					"CD"_s
				})));
				$nc($System::out)->printf("%s CD ==> %s%n"_s, $$new($ObjectArray, {
					filespec,
					CD
				}));
				if (firstCD == nullptr) {
					$assign(firstCD, CD);
					checkDir(CD);
				}
				if (!$nc(CD)->equals(firstCD)) {
					fail("Inconsistent result from CD subcommand"_s);
					checkDir(CD);
				}
			}
		}
	}
}

void WinCommand::checkDir($String* dirname) {
	$init(WinCommand);
	$useLocalObjectStack();
	if (!$$new($File, dirname)->isDirectory()) {
		fail($($String::format("Not a directory: %s%n"_s, $$new($ObjectArray, {dirname}))));
	}
}

void WinCommand::writeFile($String* filename, $String* contents) {
	$init(WinCommand);
	$useLocalObjectStack();
	try {
		$var($FileOutputStream, fos, $new($FileOutputStream, filename));
		fos->write($($nc(contents)->getBytes()));
		fos->close();
	} catch ($Exception& e) {
		fail($$str({"Unexpected exception"_s, $(e->toString())}));
	}
}

void WinCommand::main($StringArray* args) {
	$init(WinCommand);
	$useLocalObjectStack();
	$var($File, systemRoot, $System::getenv("SystemRoot"_s) != nullptr ? $new($File, $($System::getenv("SystemRoot"_s))) : $System::getenv("WINDIR"_s) != nullptr ? $new($File, $($System::getenv("WINDIR"_s))) : ($File*)nullptr);
	if (systemRoot == nullptr || !systemRoot->isDirectory()) {
		return;
	}
	$var($String, systemDirW, $$new($File, systemRoot, "System32"_s)->getPath());
	$var($String, systemDirM, $nc(systemDirW)->replace(u'\\', u'/'));
	$nc($System::out)->printf("systemDirW=%s%n"_s, $$new($ObjectArray, {systemDirW}));
	$System::out->printf("systemDirM=%s%n"_s, $$new($ObjectArray, {systemDirM}));
	if ($$new($File, systemDirW, "cmd.exe"_s)->exists()) {
		$var($Throwable, var$0, nullptr);
		try {
			$System::out->println("Running cmd.exe tests..."_s);
			writeFile("cdcmd.cmd"_s, "@echo off\r\nCD\r\n"_s);
			writeFile("cdbat.bat"_s, "@echo off\r\nCD\r\n"_s);
			checkCD($$new($StringArray, {
				"cmd"_s,
				"cmd.exe"_s,
				$$str({systemDirW, "\\cmd.exe"_s}),
				$$str({systemDirW, "\\cmd"_s}),
				$$str({systemDirM, "/cmd.exe"_s}),
				$$str({systemDirM, "/cmd"_s}),
				$$str({"/"_s, systemDirM, "/cmd"_s}),
				"cdcmd.cmd"_s,
				"./cdcmd.cmd"_s,
				".\\cdcmd.cmd"_s,
				"cdbat.bat"_s,
				"./cdbat.bat"_s,
				".\\cdbat.bat"_s
			}));
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$$new($File, "cdcmd.cmd"_s)->delete$();
			$$new($File, "cdbat.bat"_s)->delete$();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	if (WinCommand::failed > 0) {
		$throwNew($Exception, $$str({$$str(WinCommand::failed), " tests failed"_s}));
	}
}

void WinCommand::clinit$($Class* clazz) {
	WinCommand::failed = 0;
}

WinCommand::WinCommand() {
}

$Class* WinCommand::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"failed", "I", nullptr, $PRIVATE | $STATIC, $staticField(WinCommand, failed)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WinCommand, init$, void)},
		{"checkCD", "([Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC | $TRANSIENT, $staticMethod(WinCommand, checkCD, void, $StringArray*)},
		{"checkDir", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(WinCommand, checkDir, void, $String*)},
		{"fail", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(WinCommand, fail, void, $String*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(WinCommand, main, void, $StringArray*), "java.lang.Exception"},
		{"outputOf", "([Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $TRANSIENT, $staticMethod(WinCommand, outputOf, $String*, $StringArray*)},
		{"writeFile", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(WinCommand, writeFile, void, $String*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"WinCommand",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(WinCommand, name, initialize, &classInfo$$, WinCommand::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(WinCommand);
	});
	return class$;
}

$Class* WinCommand::class$ = nullptr;