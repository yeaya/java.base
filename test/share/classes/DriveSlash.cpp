#include <DriveSlash.h>

#include <java/io/File.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _DriveSlash_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DriveSlash::*)()>(&DriveSlash::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&DriveSlash::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _DriveSlash_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"DriveSlash",
	"java.lang.Object",
	nullptr,
	nullptr,
	_DriveSlash_MethodInfo_
};

$Object* allocate$DriveSlash($Class* clazz) {
	return $of($alloc(DriveSlash));
}

void DriveSlash::init$() {
}

void DriveSlash::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$init($File);
	if ($File::separatorChar != u'\\') {
		return;
	}
	$var($File, f, $new($File, "c:\\"_s));
	$nc($System::err)->println($(f->getCanonicalPath()));
	$var($StringArray, fs, f->list());
	if (fs == nullptr) {
		$throwNew($Exception, "File.list returned null"_s);
	}
	for (int32_t i = 0; i < $nc(fs)->length; ++i) {
		$nc($System::err)->print($$str({" "_s, fs->get(i)}));
	}
	$nc($System::err)->println();
}

DriveSlash::DriveSlash() {
}

$Class* DriveSlash::load$($String* name, bool initialize) {
	$loadClass(DriveSlash, name, initialize, &_DriveSlash_ClassInfo_, allocate$DriveSlash);
	return class$;
}

$Class* DriveSlash::class$ = nullptr;