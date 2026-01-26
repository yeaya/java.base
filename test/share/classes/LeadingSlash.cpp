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

$MethodInfo _LeadingSlash_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LeadingSlash, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(LeadingSlash, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$ClassInfo _LeadingSlash_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"LeadingSlash",
	"java.lang.Object",
	nullptr,
	nullptr,
	_LeadingSlash_MethodInfo_
};

$Object* allocate$LeadingSlash($Class* clazz) {
	return $of($alloc(LeadingSlash));
}

void LeadingSlash::init$() {
}

void LeadingSlash::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$init($File);
	if ($File::separatorChar == u'\\') {
		$var($File, file, nullptr);
		{
			$var($Throwable, var$0, nullptr);
			try {
				$assign(file, $File::createTempFile("bug"_s, "4487368"_s));
				$$new($FileInputStream, $$str({"\\"_s, $($nc(file)->getPath())}))->close();
				$$new($FileOutputStream, $$str({"\\"_s, $($nc(file)->getPath())}))->close();
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
}

LeadingSlash::LeadingSlash() {
}

$Class* LeadingSlash::load$($String* name, bool initialize) {
	$loadClass(LeadingSlash, name, initialize, &_LeadingSlash_ClassInfo_, allocate$LeadingSlash);
	return class$;
}

$Class* LeadingSlash::class$ = nullptr;