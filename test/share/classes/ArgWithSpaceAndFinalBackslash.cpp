#include <ArgWithSpaceAndFinalBackslash.h>

#include <java/io/File.h>
#include <java/io/InputStream.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Process.h>
#include <java/lang/Runtime.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $InputStream = ::java::io::InputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $Process = ::java::lang::Process;
using $Runtime = ::java::lang::Runtime;

$MethodInfo _ArgWithSpaceAndFinalBackslash_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ArgWithSpaceAndFinalBackslash::*)()>(&ArgWithSpaceAndFinalBackslash::init$))},
	{"getJavaCommand", "()Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)()>(&ArgWithSpaceAndFinalBackslash::getJavaCommand))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ArgWithSpaceAndFinalBackslash::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _ArgWithSpaceAndFinalBackslash_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ArgWithSpaceAndFinalBackslash",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ArgWithSpaceAndFinalBackslash_MethodInfo_
};

$Object* allocate$ArgWithSpaceAndFinalBackslash($Class* clazz) {
	return $of($alloc(ArgWithSpaceAndFinalBackslash));
}

void ArgWithSpaceAndFinalBackslash::init$() {
}

$String* ArgWithSpaceAndFinalBackslash::getJavaCommand() {
	$useLocalCurrentObjectStackCache();
	$var($String, javaHome, $System::getProperty("java.home"_s));
	if (javaHome != nullptr && javaHome->length() > 0) {
		$init($File);
		return ($str({javaHome, $$str($File::separatorChar), "bin"_s, $$str($File::separatorChar), "java"_s}));
	} else {
		return "java"_s;
	}
}

void ArgWithSpaceAndFinalBackslash::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	if ($nc(args)->length > 0) {
		$init($System);
		$nc($System::err)->println(args->get(0));
		return;
	}
	$var($StringArray, cmd, $new($StringArray, 5));
	int32_t i = 0;
	cmd->set(i++, $(getJavaCommand()));
	cmd->set(i++, "-cp"_s);
	$var($String, cp, $System::getProperty("test.classes"_s));
	if (cp == nullptr) {
		$assign(cp, "."_s);
	}
	cmd->set(i++, cp);
	cmd->set(i++, "ArgWithSpaceAndFinalBackslash"_s);
	cmd->set(i++, "foo bar\\baz\\"_s);
	$var($Process, process, $nc($($Runtime::getRuntime()))->exec(cmd));
	$var($InputStream, in, $nc(process)->getErrorStream());
	$var($bytes, buf, $new($bytes, 1024));
	int32_t n = 0;
	int32_t d = 0;
	while ((d = $nc(in)->read(buf, n, buf->length - n)) >= 0) {
		n += d;
	}
	$var($String, s, $$new($String, buf, 0, n, "US-ASCII"_s)->trim());
	if (!s->equals(cmd->get(i - 1))) {
		$throwNew($Exception, $$str({"Test failed: Got \""_s, s, "\", expected \""_s, cmd->get(i - 1), "\""_s}));
	}
}

ArgWithSpaceAndFinalBackslash::ArgWithSpaceAndFinalBackslash() {
}

$Class* ArgWithSpaceAndFinalBackslash::load$($String* name, bool initialize) {
	$loadClass(ArgWithSpaceAndFinalBackslash, name, initialize, &_ArgWithSpaceAndFinalBackslash_ClassInfo_, allocate$ArgWithSpaceAndFinalBackslash);
	return class$;
}

$Class* ArgWithSpaceAndFinalBackslash::class$ = nullptr;