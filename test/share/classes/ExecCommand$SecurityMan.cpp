#include <ExecCommand$SecurityMan.h>
#include <ExecCommand.h>
#include <java/io/File.h>
#include <java/lang/SecurityManager.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityManager = ::java::lang::SecurityManager;

void ExecCommand$SecurityMan::init$() {
	$SecurityManager::init$();
}

$String* ExecCommand$SecurityMan::unquote($String* str) {
	$init(ExecCommand$SecurityMan);
	int32_t length = (str == nullptr) ? 0 : str->length();
	bool var$0 = length > 1 && $nc(str)->charAt(0) == u'\"';
	if (var$0 && str->charAt(length - 1) == u'\"') {
		return str->substring(1, length - 1);
	}
	return str;
}

void ExecCommand$SecurityMan::checkExec($String* cmd) {
	$useLocalObjectStack();
	$var($String, ncmd, ($$new($File, $(unquote(cmd))))->getPath());
	bool var$3 = $nc(ncmd)->equals(".\\Program"_s);
	bool var$2 = var$3 || ncmd->equals("\".\\Program"_s);
	bool var$1 = var$2 || ncmd->equals(".\\Program Files\\do.cmd"_s);
	bool var$0 = var$1 || ncmd->equals(".\\Program.cmd"_s);
	if (var$0 || ncmd->equals("cmd"_s)) {
		return;
	}
	$SecurityManager::checkExec(cmd);
}

void ExecCommand$SecurityMan::checkDelete($String* file) {
}

void ExecCommand$SecurityMan::checkRead($String* file) {
}

ExecCommand$SecurityMan::ExecCommand$SecurityMan() {
}

$Class* ExecCommand$SecurityMan::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ExecCommand$SecurityMan, init$, void)},
		{"checkDelete", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ExecCommand$SecurityMan, checkDelete, void, $String*)},
		{"checkExec", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ExecCommand$SecurityMan, checkExec, void, $String*)},
		{"checkRead", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ExecCommand$SecurityMan, checkRead, void, $String*)},
		{"unquote", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(ExecCommand$SecurityMan, unquote, $String*, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ExecCommand$SecurityMan", "ExecCommand", "SecurityMan", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ExecCommand$SecurityMan",
		"java.lang.SecurityManager",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"ExecCommand"
	};
	$loadClass(ExecCommand$SecurityMan, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExecCommand$SecurityMan);
	});
	return class$;
}

$Class* ExecCommand$SecurityMan::class$ = nullptr;