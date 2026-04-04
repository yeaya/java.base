#include <DriveSlash.h>
#include <java/io/File.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

void DriveSlash::init$() {
}

void DriveSlash::main($StringArray* args) {
	$useLocalObjectStack();
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
		$System::err->print($$str({" "_s, fs->get(i)}));
	}
	$System::err->println();
}

DriveSlash::DriveSlash() {
}

$Class* DriveSlash::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DriveSlash, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(DriveSlash, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"DriveSlash",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(DriveSlash, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DriveSlash);
	});
	return class$;
}

$Class* DriveSlash::class$ = nullptr;