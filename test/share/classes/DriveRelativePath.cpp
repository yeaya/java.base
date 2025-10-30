#include <DriveRelativePath.h>

#include <java/io/File.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

$MethodInfo _DriveRelativePath_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DriveRelativePath::*)()>(&DriveRelativePath::init$))},
	{"fail", "(Ljava/lang/String;)V", nullptr, $STATIC, $method(static_cast<void(*)($String*)>(&DriveRelativePath::fail))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&DriveRelativePath::main)), "java.io.IOException"},
	{}
};

$ClassInfo _DriveRelativePath_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"DriveRelativePath",
	"java.lang.Object",
	nullptr,
	nullptr,
	_DriveRelativePath_MethodInfo_
};

$Object* allocate$DriveRelativePath($Class* clazz) {
	return $of($alloc(DriveRelativePath));
}

void DriveRelativePath::init$() {
}

void DriveRelativePath::fail($String* s) {
	$throwNew($RuntimeException, s);
}

void DriveRelativePath::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$init($File);
	if ($File::separatorChar != u'\\') {
		return;
	}
	$var($File, f, $new($File, "foo"_s));
	$var($String, c, f->getCanonicalPath());
	$nc($System::err)->println(c);
	int32_t di = $nc(c)->indexOf((int32_t)u':');
	if (di == -1) {
		fail("No drive in canonical path"_s);
	}
	$var($String, drive, c->substring(0, di + 1));
	$var($File, f2, $new($File, $$str({drive, "foo"_s})));
	$nc($System::err)->println($of(f2));
	$var($String, c2, f2->getCanonicalPath());
	$nc($System::err)->println(c2);
	if (!$nc(c2)->equals(c)) {
		fail($$str({"Canonical path mismatch: \""_s, f2, "\" maps to \""_s, c2, "\"; it should map to \""_s, c, "\""_s}));
	}
}

DriveRelativePath::DriveRelativePath() {
}

$Class* DriveRelativePath::load$($String* name, bool initialize) {
	$loadClass(DriveRelativePath, name, initialize, &_DriveRelativePath_ClassInfo_, allocate$DriveRelativePath);
	return class$;
}

$Class* DriveRelativePath::class$ = nullptr;