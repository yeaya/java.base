#include <DriveOnly.h>
#include <java/io/File.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

void DriveOnly::init$() {
}

void DriveOnly::main($StringArray* args) {
	$useLocalObjectStack();
	$init($File);
	if ($File::separatorChar != u'\\') {
		return;
	}
	$var($File, f, $$new($File, ""_s)->getCanonicalFile());
	while ($nc(f)->getParent() != nullptr) {
		$assign(f, f->getParentFile());
	}
	$var($String, p, $$nc($nc(f)->getPath())->substring(0, 2));
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
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DriveOnly, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(DriveOnly, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"DriveOnly",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(DriveOnly, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DriveOnly);
	});
	return class$;
}

$Class* DriveOnly::class$ = nullptr;