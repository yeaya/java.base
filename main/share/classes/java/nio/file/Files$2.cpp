#include <java/nio/file/Files$2.h>

#include <java/io/IOException.h>
#include <java/io/UncheckedIOException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/file/DirectoryIteratorException.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/Path.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $UncheckedIOException = ::java::io::UncheckedIOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DirectoryIteratorException = ::java::nio::file::DirectoryIteratorException;
using $Files = ::java::nio::file::Files;
using $Path = ::java::nio::file::Path;
using $Iterator = ::java::util::Iterator;

namespace java {
	namespace nio {
		namespace file {

$FieldInfo _Files$2_FieldInfo_[] = {
	{"val$delegate", "Ljava/util/Iterator;", nullptr, $FINAL | $SYNTHETIC, $field(Files$2, val$delegate)},
	{}
};

$MethodInfo _Files$2_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Iterator;)V", nullptr, 0, $method(static_cast<void(Files$2::*)($Iterator*)>(&Files$2::init$))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljava/nio/file/Path;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Files$2_EnclosingMethodInfo_ = {
	"java.nio.file.Files",
	"list",
	"(Ljava/nio/file/Path;)Ljava/util/stream/Stream;"
};

$InnerClassInfo _Files$2_InnerClassesInfo_[] = {
	{"java.nio.file.Files$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Files$2_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.file.Files$2",
	"java.lang.Object",
	"java.util.Iterator",
	_Files$2_FieldInfo_,
	_Files$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<Ljava/nio/file/Path;>;",
	&_Files$2_EnclosingMethodInfo_,
	_Files$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.nio.file.Files"
};

$Object* allocate$Files$2($Class* clazz) {
	return $of($alloc(Files$2));
}

void Files$2::init$($Iterator* val$delegate) {
	$set(this, val$delegate, val$delegate);
}

bool Files$2::hasNext() {
	$useLocalCurrentObjectStackCache();
	try {
		return $nc(this->val$delegate)->hasNext();
	} catch ($DirectoryIteratorException&) {
		$var($DirectoryIteratorException, e, $catch());
		$throwNew($UncheckedIOException, $($cast($IOException, e->getCause())));
	}
	$shouldNotReachHere();
}

$Object* Files$2::next() {
	$useLocalCurrentObjectStackCache();
	try {
		return $of($cast($Path, $nc(this->val$delegate)->next()));
	} catch ($DirectoryIteratorException&) {
		$var($DirectoryIteratorException, e, $catch());
		$throwNew($UncheckedIOException, $($cast($IOException, e->getCause())));
	}
	$shouldNotReachHere();
}

Files$2::Files$2() {
}

$Class* Files$2::load$($String* name, bool initialize) {
	$loadClass(Files$2, name, initialize, &_Files$2_ClassInfo_, allocate$Files$2);
	return class$;
}

$Class* Files$2::class$ = nullptr;

		} // file
	} // nio
} // java