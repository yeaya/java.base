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
using $Path = ::java::nio::file::Path;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Collections = ::java::util::Collections;
using $List = ::java::util::List;
using $MimeTypesFileTypeDetector = ::sun::nio::fs::MimeTypesFileTypeDetector;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _MimeTypesFileTypeDetector$1_FieldInfo_[] = {
	{"this$0", "Lsun/nio/fs/MimeTypesFileTypeDetector;", nullptr, $FINAL | $SYNTHETIC, $field(MimeTypesFileTypeDetector$1, this$0)},
	{}
};

$MethodInfo _MimeTypesFileTypeDetector$1_MethodInfo_[] = {
	{"<init>", "(Lsun/nio/fs/MimeTypesFileTypeDetector;)V", nullptr, 0, $method(static_cast<void(MimeTypesFileTypeDetector$1::*)($MimeTypesFileTypeDetector*)>(&MimeTypesFileTypeDetector$1::init$))},
	{"run", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/String;>;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _MimeTypesFileTypeDetector$1_EnclosingMethodInfo_ = {
	"sun.nio.fs.MimeTypesFileTypeDetector",
	"loadMimeTypes",
	"()V"
};

$InnerClassInfo _MimeTypesFileTypeDetector$1_InnerClassesInfo_[] = {
	{"sun.nio.fs.MimeTypesFileTypeDetector$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MimeTypesFileTypeDetector$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.MimeTypesFileTypeDetector$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_MimeTypesFileTypeDetector$1_FieldInfo_,
	_MimeTypesFileTypeDetector$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/util/List<Ljava/lang/String;>;>;",
	&_MimeTypesFileTypeDetector$1_EnclosingMethodInfo_,
	_MimeTypesFileTypeDetector$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.fs.MimeTypesFileTypeDetector"
};

$Object* allocate$MimeTypesFileTypeDetector$1($Class* clazz) {
	return $of($alloc(MimeTypesFileTypeDetector$1));
}

void MimeTypesFileTypeDetector$1::init$($MimeTypesFileTypeDetector* this$0) {
	$set(this, this$0, this$0);
}

$Object* MimeTypesFileTypeDetector$1::run() {
	try {
		return $of($Files::readAllLines(this->this$0->mimeTypesFile, $($Charset::defaultCharset())));
	} catch ($IOException& ignore) {
		return $of($Collections::emptyList());
	}
	$shouldNotReachHere();
}

MimeTypesFileTypeDetector$1::MimeTypesFileTypeDetector$1() {
}

$Class* MimeTypesFileTypeDetector$1::load$($String* name, bool initialize) {
	$loadClass(MimeTypesFileTypeDetector$1, name, initialize, &_MimeTypesFileTypeDetector$1_ClassInfo_, allocate$MimeTypesFileTypeDetector$1);
	return class$;
}

$Class* MimeTypesFileTypeDetector$1::class$ = nullptr;

		} // fs
	} // nio
} // sun