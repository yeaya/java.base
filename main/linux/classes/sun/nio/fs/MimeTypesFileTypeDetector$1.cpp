#include <sun/nio/fs/MimeTypesFileTypeDetector$1.h>
#include <java/io/IOException.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/Path.h>
#include <java/util/Collections.h>
#include <java/util/List.h>
#include <sun/nio/fs/MimeTypesFileTypeDetector.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $Files = ::java::nio::file::Files;
using $Collections = ::java::util::Collections;
using $MimeTypesFileTypeDetector = ::sun::nio::fs::MimeTypesFileTypeDetector;

namespace sun {
	namespace nio {
		namespace fs {

void MimeTypesFileTypeDetector$1::init$($MimeTypesFileTypeDetector* this$0) {
	$set(this, this$0, this$0);
}

$Object* MimeTypesFileTypeDetector$1::run() {
	try {
		return $Files::readAllLines(this->this$0->mimeTypesFile, $($Charset::defaultCharset()));
	} catch ($IOException& ignore) {
		return $Collections::emptyList();
	}
	$shouldNotReachHere();
}

MimeTypesFileTypeDetector$1::MimeTypesFileTypeDetector$1() {
}

$Class* MimeTypesFileTypeDetector$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/nio/fs/MimeTypesFileTypeDetector;", nullptr, $FINAL | $SYNTHETIC, $field(MimeTypesFileTypeDetector$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/nio/fs/MimeTypesFileTypeDetector;)V", nullptr, 0, $method(MimeTypesFileTypeDetector$1, init$, void, $MimeTypesFileTypeDetector*)},
		{"run", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(MimeTypesFileTypeDetector$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.nio.fs.MimeTypesFileTypeDetector",
		"loadMimeTypes",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.fs.MimeTypesFileTypeDetector$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.fs.MimeTypesFileTypeDetector$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/util/List<Ljava/lang/String;>;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.fs.MimeTypesFileTypeDetector"
	};
	$loadClass(MimeTypesFileTypeDetector$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MimeTypesFileTypeDetector$1);
	});
	return class$;
}

$Class* MimeTypesFileTypeDetector$1::class$ = nullptr;

		} // fs
	} // nio
} // sun