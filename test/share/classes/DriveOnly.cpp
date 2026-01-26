#include <DriveOnly.h>

#include <java/io/File.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $PrintStream = ::java::io::PrintStream;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _DriveOnly_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(DriveOnly, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(DriveOnly, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$ClassInfo _DriveOnly_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"DriveOnly",
	"java.lang.Object",
	nullptr,
	nullptr,
	_DriveOnly_MethodInfo_
};

$Object* allocate$DriveOnly($Class* clazz) {
	return $of($alloc(DriveOnly));
}

void DriveOnly::init$() {
}

void DriveOnly::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$init($File);
	if ($File::separatorChar != u'\\') {
		return;
	}
	$var($File, f, $$new($File, ""_s)->getCanonicalFile());
	while ($nc(f)->getParent() != nullptr) {
		$assign(f, f->getParentFile());
	}
	$var($String, p, $nc($($nc(f)->getPath()))->substring(0, 2));
	bool var$0 = $Character::isLetter(p->charAt(0));
	if (!(var$0 && (p->charAt(1) == u':'))) {
		$nc($System::err)->println("No current drive, cannot run test"_s);
		return;
	}
	$assign(f, $new($File, p));
	if (!f->isDirectory()) {
		$throwNew($Exception, $$str({"\""_s, f, "\" is not a directory"_s}));
	}
	if (f->lastModified() == 0) {
		$throwNew($Exception, $$str({"\""_s, f, "\" has no last-modified time"_s}));
	}
}

DriveOnly::DriveOnly() {
}

$Class* DriveOnly::load$($String* name, bool initialize) {
	$loadClass(DriveOnly, name, initialize, &_DriveOnly_ClassInfo_, allocate$DriveOnly);
	return class$;
}

$Class* DriveOnly::class$ = nullptr;