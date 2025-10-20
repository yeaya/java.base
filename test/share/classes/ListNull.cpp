#include <ListNull.h>

#include <java/io/File.h>
#include <java/io/FileFilter.h>
#include <java/io/FilenameFilter.h>
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
using $FileFilter = ::java::io::FileFilter;
using $FilenameFilter = ::java::io::FilenameFilter;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _ListNull_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ListNull::*)()>(&ListNull::init$))},
	{"go", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $STATIC, $method(static_cast<void(*)($String*,$ObjectArray*)>(&ListNull::go)), "java.lang.Exception"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ListNull::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _ListNull_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ListNull",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ListNull_MethodInfo_
};

$Object* allocate$ListNull($Class* clazz) {
	return $of($alloc(ListNull));
}

void ListNull::init$() {
}

void ListNull::go($String* what, $ObjectArray* fs) {
	$useLocalCurrentObjectStackCache();
	if (fs == nullptr) {
		$throwNew($Exception, $$str({what, " returned null"_s}));
	}
	$init($System);
	$nc($System::err)->println($$str({"-- "_s, what}));
	for (int32_t i = 0; i < $nc(fs)->length; ++i) {
		$nc($System::err)->println(fs->get(i));
	}
}

void ListNull::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($File, d, $new($File, "."_s));
	go("list()"_s, $(d->list()));
	go("listFiles()"_s, $(d->listFiles()));
	go("list(null)"_s, $(d->list(nullptr)));
	go("listFiles((FilenameFilter)null)"_s, $(d->listFiles(($FilenameFilter*)nullptr)));
	go("listFiles((FileFilter)null)"_s, $(d->listFiles(($FileFilter*)nullptr)));
}

ListNull::ListNull() {
}

$Class* ListNull::load$($String* name, bool initialize) {
	$loadClass(ListNull, name, initialize, &_ListNull_ClassInfo_, allocate$ListNull);
	return class$;
}

$Class* ListNull::class$ = nullptr;