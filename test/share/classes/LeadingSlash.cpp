#include <LeadingSlash.h>
#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/FileOutputStream.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $FileOutputStream = ::java::io::FileOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void LeadingSlash::init$() {
}

void LeadingSlash::main($StringArray* args) {
	$useLocalObjectStack();
	$init($File);
	if ($File::separatorChar == u'\\') {
		$var($File, file, nullptr);
		$var($Throwable, var$0, nullptr);
		try {
			$assign(file, $File::createTempFile("bug"_s, "4487368"_s));
			$$new($FileInputStream, $$str({"\\"_s, $($nc(file)->getPath())}))->close();
			$$new($FileOutputStream, $$str({"\\"_s, $(file->getPath())}))->close();
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			if (file != nullptr) {
				file->delete$();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

LeadingSlash::LeadingSlash() {
}

$Class* LeadingSlash::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LeadingSlash, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(LeadingSlash, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"LeadingSlash",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(LeadingSlash, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LeadingSlash);
	});
	return class$;
}

$Class* LeadingSlash::class$ = nullptr;