#include <ListRoots.h>

#include <java/io/File.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $FileArray = $Array<::java::io::File>;
using $File = ::java::io::File;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _ListRoots_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ListRoots::*)()>(&ListRoots::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ListRoots::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _ListRoots_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ListRoots",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ListRoots_MethodInfo_
};

$Object* allocate$ListRoots($Class* clazz) {
	return $of($alloc(ListRoots));
}

void ListRoots::init$() {
}

void ListRoots::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($FileArray, rs, $File::listRoots());
	for (int32_t i = 0; i < $nc(rs)->length; ++i) {
		$init($System);
		$nc($System::out)->println($$str({$$str(i), ": "_s, rs->get(i)}));
	}
	$var($File, f, $new($File, $($System::getProperty("test.src"_s, "."_s)), "ListRoots.java"_s));
	$var($String, cp, f->getCanonicalPath());
	for (int32_t i = 0; i < $nc(rs)->length; ++i) {
		if ($nc(cp)->startsWith($($nc(rs->get(i))->getPath()))) {
			break;
		}
		if (i == rs->length - 1) {
			$throwNew($Exception, $$str({cp, " does not have a recognized root"_s}));
		}
	}
}

ListRoots::ListRoots() {
}

$Class* ListRoots::load$($String* name, bool initialize) {
	$loadClass(ListRoots, name, initialize, &_ListRoots_ClassInfo_, allocate$ListRoots);
	return class$;
}

$Class* ListRoots::class$ = nullptr;