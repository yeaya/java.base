#include <sun/nio/fs/UnixFileSystem$2.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Iterator.h>
#include <sun/nio/fs/UnixFileSystem$FileStoreIterator.h>
#include <sun/nio/fs/UnixFileSystem.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $UnixFileSystem = ::sun::nio::fs::UnixFileSystem;
using $UnixFileSystem$FileStoreIterator = ::sun::nio::fs::UnixFileSystem$FileStoreIterator;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _UnixFileSystem$2_FieldInfo_[] = {
	{"this$0", "Lsun/nio/fs/UnixFileSystem;", nullptr, $FINAL | $SYNTHETIC, $field(UnixFileSystem$2, this$0)},
	{}
};

$MethodInfo _UnixFileSystem$2_MethodInfo_[] = {
	{"<init>", "(Lsun/nio/fs/UnixFileSystem;)V", nullptr, 0, $method(static_cast<void(UnixFileSystem$2::*)($UnixFileSystem*)>(&UnixFileSystem$2::init$))},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/nio/file/FileStore;>;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _UnixFileSystem$2_EnclosingMethodInfo_ = {
	"sun.nio.fs.UnixFileSystem",
	"getFileStores",
	"()Ljava/lang/Iterable;"
};

$InnerClassInfo _UnixFileSystem$2_InnerClassesInfo_[] = {
	{"sun.nio.fs.UnixFileSystem$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _UnixFileSystem$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.UnixFileSystem$2",
	"java.lang.Object",
	"java.lang.Iterable",
	_UnixFileSystem$2_FieldInfo_,
	_UnixFileSystem$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/lang/Iterable<Ljava/nio/file/FileStore;>;",
	&_UnixFileSystem$2_EnclosingMethodInfo_,
	_UnixFileSystem$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.fs.UnixFileSystem"
};

$Object* allocate$UnixFileSystem$2($Class* clazz) {
	return $of($alloc(UnixFileSystem$2));
}

void UnixFileSystem$2::init$($UnixFileSystem* this$0) {
	$set(this, this$0, this$0);
}

$Iterator* UnixFileSystem$2::iterator() {
	return $new($UnixFileSystem$FileStoreIterator, this->this$0);
}

UnixFileSystem$2::UnixFileSystem$2() {
}

$Class* UnixFileSystem$2::load$($String* name, bool initialize) {
	$loadClass(UnixFileSystem$2, name, initialize, &_UnixFileSystem$2_ClassInfo_, allocate$UnixFileSystem$2);
	return class$;
}

$Class* UnixFileSystem$2::class$ = nullptr;

		} // fs
	} // nio
} // sun