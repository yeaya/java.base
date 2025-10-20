#include <WinCommand.h>

#include <CommandRunner.h>
#include <java/io/File.h>
#include <java/io/FileOutputStream.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef CD

using $CommandRunner = ::CommandRunner;
using $File = ::java::io::File;
using $FileOutputStream = ::java::io::FileOutputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _WinCommand_FieldInfo_[] = {
	{"failed", "I", nullptr, $PRIVATE | $STATIC, $staticField(WinCommand, failed)},
	{}
};

$MethodInfo _WinCommand_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WinCommand::*)()>(&WinCommand::init$))},
	{"checkCD", "([Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC | $TRANSIENT, $method(static_cast<void(*)($StringArray*)>(&WinCommand::checkCD))},
	{"checkDir", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*)>(&WinCommand::checkDir))},
	{"fail", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*)>(&WinCommand::fail))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&WinCommand::main)), "java.lang.Exception"},
	{"outputOf", "([Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $TRANSIENT, $method(static_cast<$String*(*)($StringArray*)>(&WinCommand::outputOf))},
	{"writeFile", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*,$String*)>(&WinCommand::writeFile))},
	{}
};

$ClassInfo _WinCommand_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"WinCommand",
	"java.lang.Object",
	nullptr,
	_WinCommand_FieldInfo_,
	_WinCommand_MethodInfo_
};

$Object* allocate$WinCommand($Class* clazz) {
	return $of($alloc(WinCommand));
}

int32_t WinCommand::failed = 0;

void WinCommand::init$() {
}

void WinCommand::fail($String* msg) {
	$init(WinCommand);
	$init($System);
	$nc($System::err)->printf("FAIL: %s%n"_s, $$new($ObjectArray, {$of(msg)}));
	++WinCommand::failed;
}

$String* WinCommand::outputOf($StringArray* args) {
	$init(WinCommand);
	$useLocalCurrentObjectStackCache();
	try {
		$var($CommandRunner, cr, $new($CommandRunner, args));
		if (cr->exitValue != 0) {
			fail("exitValue != 0"_s);
		}
		if (!$nc(cr->err)->equals(""_s)) {
			fail($$str({"stderr: "_s, cr->err}));
		}
		return $nc(cr->out)->replaceFirst("[\r\n]+$"_s, ""_s);
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		fail($(e->toString()));
		return ""_s;
	}
	$shouldNotReachHere();
}

void WinCommand::checkCD($StringArray* filespecs) {
	$init(WinCommand);
	$useLocalCurrentObjectStackCache();
	$var($String, firstCD, nullptr);
	{
		$var($StringArray, arr$, filespecs);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, filespec, arr$->get(i$));
			{
				$var($String, CD, outputOf($$new($StringArray, {
					filespec,
					"/C"_s,
					"CD"_s
				})));
				$init($System);
				$nc($System::out)->printf("%s CD ==> %s%n"_s, $$new($ObjectArray, {
					$of(filespec),
					$of(CD)
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
	$useLocalCurrentObjectStackCache();
	if (!$$new($File, dirname)->isDirectory()) {
		fail($($String::format("Not a directory: %s%n"_s, $$new($ObjectArray, {$of(dirname)}))));
	}
}

void WinCommand::writeFile($String* filename, $String* contents) {
	$init(WinCommand);
	$useLocalCurrentObjectStackCache();
	try {
		$var($FileOutputStream, fos, $new($FileOutputStream, filename));
		fos->write($($nc(contents)->getBytes()));
		fos->close();
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		fail($$str({"Unexpected exception"_s, $(e->toString())}));
	}
}

void WinCommand::main($StringArray* args) {
	$init(WinCommand);
	$useLocalCurrentObjectStackCache();
	$var($File, systemRoot, $System::getenv("SystemRoot"_s) != nullptr ? $new($File, $($System::getenv("SystemRoot"_s))) : $System::getenv("WINDIR"_s) != nullptr ? $new($File, $($System::getenv("WINDIR"_s))) : ($File*)nullptr);
	if (systemRoot == nullptr || !$nc(systemRoot)->isDirectory()) {
		return;
	}
	$var($String, systemDirW, $$new($File, systemRoot, "System32"_s)->getPath());
	$var($String, systemDirM, $nc(systemDirW)->replace(u'\\', u'/'));
	$nc($System::out)->printf("systemDirW=%s%n"_s, $$new($ObjectArray, {$of(systemDirW)}));
	$nc($System::out)->printf("systemDirM=%s%n"_s, $$new($ObjectArray, {$of(systemDirM)}));
	if ($$new($File, systemDirW, "cmd.exe"_s)->exists()) {
		{
			$var($Throwable, var$0, nullptr);
			try {
				$nc($System::out)->println("Running cmd.exe tests..."_s);
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
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				$$new($File, "cdcmd.cmd"_s)->delete$();
				$$new($File, "cdbat.bat"_s)->delete$();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
	if (WinCommand::failed > 0) {
		$throwNew($Exception, $$str({$$str(WinCommand::failed), " tests failed"_s}));
	}
}

void clinit$WinCommand($Class* class$) {
	WinCommand::failed = 0;
}

WinCommand::WinCommand() {
}

$Class* WinCommand::load$($String* name, bool initialize) {
	$loadClass(WinCommand, name, initialize, &_WinCommand_ClassInfo_, clinit$WinCommand, allocate$WinCommand);
	return class$;
}

$Class* WinCommand::class$ = nullptr;