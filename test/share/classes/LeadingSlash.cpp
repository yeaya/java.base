#include <LeadingSlash.h>

#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/FileOutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $FileOutputStream = ::java::io::FileOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _LeadingSlash_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LeadingSlash::*)()>(&LeadingSlash::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&LeadingSlash::main)), "java.lang.Exception"},
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
	$init($File);
	if ($File::separatorChar == u'\\') {
		$var($File, file, nullptr);
		{
			$var($Throwable, var$0, nullptr);
			try {
				$assign(file, $File::createTempFile("bug"_s, "4487368"_s));
				$$new($FileInputStream, $$str({"\\"_s, $($nc(file)->getPath())}))->close();
				$$new($FileOutputStream, $$str({"\\"_s, $($nc(file)->getPath())}))->close();
			} catch ($Throwable&) {
				$assign(var$0, $catch());
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