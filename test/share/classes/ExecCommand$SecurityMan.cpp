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

$MethodInfo _ExecCommand$SecurityMan_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ExecCommand$SecurityMan::*)()>(&ExecCommand$SecurityMan::init$))},
	{"checkDelete", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"checkExec", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"checkRead", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"unquote", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*)>(&ExecCommand$SecurityMan::unquote))},
	{}
};

$InnerClassInfo _ExecCommand$SecurityMan_InnerClassesInfo_[] = {
	{"ExecCommand$SecurityMan", "ExecCommand", "SecurityMan", $STATIC},
	{}
};

$ClassInfo _ExecCommand$SecurityMan_ClassInfo_ = {
	$ACC_SUPER,
	"ExecCommand$SecurityMan",
	"java.lang.SecurityManager",
	nullptr,
	nullptr,
	_ExecCommand$SecurityMan_MethodInfo_,
	nullptr,
	nullptr,
	_ExecCommand$SecurityMan_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ExecCommand"
};

$Object* allocate$ExecCommand$SecurityMan($Class* clazz) {
	return $of($alloc(ExecCommand$SecurityMan));
}

void ExecCommand$SecurityMan::init$() {
	$SecurityManager::init$();
}

$String* ExecCommand$SecurityMan::unquote($String* str) {
	$init(ExecCommand$SecurityMan);
	int32_t length = (str == nullptr) ? 0 : $nc(str)->length();
	bool var$0 = length > 1 && str->charAt(0) == u'\"';
	if (var$0 && str->charAt(length - 1) == u'\"') {
		return str->substring(1, length - 1);
	}
	return str;
}

void ExecCommand$SecurityMan::checkExec($String* cmd) {
	$useLocalCurrentObjectStackCache();
	$var($String, ncmd, ($$new($File, $(unquote(cmd))))->getPath());
	bool var$3 = $nc(ncmd)->equals(".\\Program"_s);
	bool var$2 = var$3 || $nc(ncmd)->equals("\".\\Program"_s);
	bool var$1 = var$2 || $nc(ncmd)->equals(".\\Program Files\\do.cmd"_s);
	bool var$0 = var$1 || $nc(ncmd)->equals(".\\Program.cmd"_s);
	if (var$0 || $nc(ncmd)->equals("cmd"_s)) {
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
	$loadClass(ExecCommand$SecurityMan, name, initialize, &_ExecCommand$SecurityMan_ClassInfo_, allocate$ExecCommand$SecurityMan);
	return class$;
}

$Class* ExecCommand$SecurityMan::class$ = nullptr;