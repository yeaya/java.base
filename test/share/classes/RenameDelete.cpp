#include <RenameDelete.h>

#include <java/io/File.h>
#include <java/lang/StringBuffer.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $StringBuffer = ::java::lang::StringBuffer;

$MethodInfo _RenameDelete_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(RenameDelete, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(RenameDelete, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$ClassInfo _RenameDelete_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"RenameDelete",
	"java.lang.Object",
	nullptr,
	nullptr,
	_RenameDelete_MethodInfo_
};

$Object* allocate$RenameDelete($Class* clazz) {
	return $of($alloc(RenameDelete));
}

void RenameDelete::init$() {
}

void RenameDelete::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	bool success = false;
	$init($File);
	if ($File::separatorChar != u'\\') {
		$nc($System::err)->println("Not a win32 platform -- test inapplicable"_s);
		return;
	}
	$var($File, f1, $new($File, "."_s));
	$var($StringBuffer, location, $new($StringBuffer, "\\"_s));
	location->append($(f1->getCanonicalPath()));
	$var($StringBuffer, fromLocation, $new($StringBuffer, $$str({$(location->toString()), "\\From"_s})));
	$var($StringBuffer, toLocation, $new($StringBuffer, $$str({$(location->toString()), "\\To"_s})));
	$assign(f1, $new($File, $(fromLocation->toString())));
	$var($File, f2, $new($File, $(toLocation->toString())));
	bool var$0 = f1->exists();
	if (var$0 || f2->exists()) {
		$nc($System::err)->println("Directories exist -- test not valid"_s);
		return;
	}
	$nc($System::err)->println($$str({"Create:"_s, $$str(f1->mkdir())}));
	$var($String, var$1, $$str({"Exist as directory:"_s, $$str(f1->exists()), " "_s}));
	$nc($System::err)->println($$concat(var$1, $$str(f1->isDirectory())));
	success = f1->renameTo(f2);
	$nc($System::err)->println($$str({"Rename:"_s, $$str(success)}));
	if (!success) {
		$throwNew($RuntimeException, "File method rename did not function"_s);
	}
	success = f2->delete$();
	$nc($System::err)->println($$str({"Delete:"_s, $$str(success)}));
	if (!success) {
		$throwNew($RuntimeException, "File method delete did not function"_s);
	}
}

RenameDelete::RenameDelete() {
}

$Class* RenameDelete::load$($String* name, bool initialize) {
	$loadClass(RenameDelete, name, initialize, &_RenameDelete_ClassInfo_, allocate$RenameDelete);
	return class$;
}

$Class* RenameDelete::class$ = nullptr;