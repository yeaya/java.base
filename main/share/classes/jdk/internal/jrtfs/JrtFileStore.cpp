#include <jdk/internal/jrtfs/JrtFileStore.h>

#include <java/lang/UnsupportedOperationException.h>
#include <java/nio/file/FileStore.h>
#include <java/nio/file/FileSystem.h>
#include <java/nio/file/attribute/BasicFileAttributeView.h>
#include <java/nio/file/attribute/FileStoreAttributeView.h>
#include <java/util/Objects.h>
#include <jdk/internal/jrtfs/JrtFileAttributeView.h>
#include <jdk/internal/jrtfs/JrtFileSystem.h>
#include <jdk/internal/jrtfs/JrtPath.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $FileStore = ::java::nio::file::FileStore;
using $FileSystem = ::java::nio::file::FileSystem;
using $BasicFileAttributeView = ::java::nio::file::attribute::BasicFileAttributeView;
using $FileStoreAttributeView = ::java::nio::file::attribute::FileStoreAttributeView;
using $Objects = ::java::util::Objects;
using $JrtFileAttributeView = ::jdk::internal::jrtfs::JrtFileAttributeView;
using $JrtPath = ::jdk::internal::jrtfs::JrtPath;

namespace jdk {
	namespace internal {
		namespace jrtfs {

$FieldInfo _JrtFileStore_FieldInfo_[] = {
	{"jrtfs", "Ljava/nio/file/FileSystem;", nullptr, $PROTECTED | $FINAL, $field(JrtFileStore, jrtfs)},
	{}
};

$MethodInfo _JrtFileStore_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/jrtfs/JrtPath;)V", nullptr, 0, $method(static_cast<void(JrtFileStore::*)($JrtPath*)>(&JrtFileStore::init$))},
	{"getAttribute", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getFileStoreAttributeView", "(Ljava/lang/Class;)Ljava/nio/file/attribute/FileStoreAttributeView;", "<V::Ljava/nio/file/attribute/FileStoreAttributeView;>(Ljava/lang/Class<TV;>;)TV;", $PUBLIC},
	{"getTotalSpace", "()J", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getUnallocatedSpace", "()J", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getUsableSpace", "()J", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"isReadOnly", "()Z", nullptr, $PUBLIC},
	{"name", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"supportsFileAttributeView", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"supportsFileAttributeView", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<+Ljava/nio/file/attribute/FileAttributeView;>;)Z", $PUBLIC},
	{"type", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _JrtFileStore_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"jdk.internal.jrtfs.JrtFileStore",
	"java.nio.file.FileStore",
	nullptr,
	_JrtFileStore_FieldInfo_,
	_JrtFileStore_MethodInfo_
};

$Object* allocate$JrtFileStore($Class* clazz) {
	return $of($alloc(JrtFileStore));
}

void JrtFileStore::init$($JrtPath* jrtPath) {
	$FileStore::init$();
	$set(this, jrtfs, $nc(jrtPath)->getFileSystem());
}

$String* JrtFileStore::name() {
	return $str({$($nc($of(this->jrtfs))->toString()), "/"_s});
}

$String* JrtFileStore::type() {
	return "jrtfs"_s;
}

bool JrtFileStore::isReadOnly() {
	return $nc(this->jrtfs)->isReadOnly();
}

bool JrtFileStore::supportsFileAttributeView($String* name) {
	bool var$0 = $nc(name)->equals("basic"_s);
	return var$0 || $nc(name)->equals("jrt"_s);
}

$FileStoreAttributeView* JrtFileStore::getFileStoreAttributeView($Class* type) {
	$Objects::requireNonNull($of(type), "type"_s);
	return ($FileStoreAttributeView*)nullptr;
}

int64_t JrtFileStore::getTotalSpace() {
	$throwNew($UnsupportedOperationException, "getTotalSpace"_s);
	$shouldNotReachHere();
}

int64_t JrtFileStore::getUsableSpace() {
	$throwNew($UnsupportedOperationException, "getUsableSpace"_s);
	$shouldNotReachHere();
}

int64_t JrtFileStore::getUnallocatedSpace() {
	$throwNew($UnsupportedOperationException, "getUnallocatedSpace"_s);
	$shouldNotReachHere();
}

$Object* JrtFileStore::getAttribute($String* attribute) {
	$throwNew($UnsupportedOperationException, $$str({"does not support "_s, attribute}));
	$shouldNotReachHere();
}

bool JrtFileStore::supportsFileAttributeView($Class* type) {
	$load($BasicFileAttributeView);
	$load($JrtFileAttributeView);
	return type == $BasicFileAttributeView::class$ || type == $JrtFileAttributeView::class$;
}

JrtFileStore::JrtFileStore() {
}

$Class* JrtFileStore::load$($String* name, bool initialize) {
	$loadClass(JrtFileStore, name, initialize, &_JrtFileStore_ClassInfo_, allocate$JrtFileStore);
	return class$;
}

$Class* JrtFileStore::class$ = nullptr;

		} // jrtfs
	} // internal
} // jdk