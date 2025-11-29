#include <sun/nio/ch/FileLockTable$FileLockReference.h>

#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/ref/WeakReference.h>
#include <java/nio/channels/FileLock.h>
#include <sun/nio/ch/FileKey.h>
#include <sun/nio/ch/FileLockTable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $WeakReference = ::java::lang::ref::WeakReference;
using $FileLock = ::java::nio::channels::FileLock;
using $FileKey = ::sun::nio::ch::FileKey;

namespace sun {
	namespace nio {
		namespace ch {

$FieldInfo _FileLockTable$FileLockReference_FieldInfo_[] = {
	{"fileKey", "Lsun/nio/ch/FileKey;", nullptr, $PRIVATE, $field(FileLockTable$FileLockReference, fileKey$)},
	{}
};

$MethodInfo _FileLockTable$FileLockReference_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/channels/FileLock;Ljava/lang/ref/ReferenceQueue;Lsun/nio/ch/FileKey;)V", "(Ljava/nio/channels/FileLock;Ljava/lang/ref/ReferenceQueue<Ljava/nio/channels/FileLock;>;Lsun/nio/ch/FileKey;)V", 0, $method(static_cast<void(FileLockTable$FileLockReference::*)($FileLock*,$ReferenceQueue*,$FileKey*)>(&FileLockTable$FileLockReference::init$))},
	{"fileKey", "()Lsun/nio/ch/FileKey;", nullptr, 0},
	{}
};

$InnerClassInfo _FileLockTable$FileLockReference_InnerClassesInfo_[] = {
	{"sun.nio.ch.FileLockTable$FileLockReference", "sun.nio.ch.FileLockTable", "FileLockReference", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _FileLockTable$FileLockReference_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.ch.FileLockTable$FileLockReference",
	"java.lang.ref.WeakReference",
	nullptr,
	_FileLockTable$FileLockReference_FieldInfo_,
	_FileLockTable$FileLockReference_MethodInfo_,
	"Ljava/lang/ref/WeakReference<Ljava/nio/channels/FileLock;>;",
	nullptr,
	_FileLockTable$FileLockReference_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.ch.FileLockTable"
};

$Object* allocate$FileLockTable$FileLockReference($Class* clazz) {
	return $of($alloc(FileLockTable$FileLockReference));
}

void FileLockTable$FileLockReference::init$($FileLock* referent, $ReferenceQueue* queue, $FileKey* key) {
	$WeakReference::init$(referent, queue);
	$set(this, fileKey$, key);
}

$FileKey* FileLockTable$FileLockReference::fileKey() {
	return this->fileKey$;
}

FileLockTable$FileLockReference::FileLockTable$FileLockReference() {
}

$Class* FileLockTable$FileLockReference::load$($String* name, bool initialize) {
	$loadClass(FileLockTable$FileLockReference, name, initialize, &_FileLockTable$FileLockReference_ClassInfo_, allocate$FileLockTable$FileLockReference);
	return class$;
}

$Class* FileLockTable$FileLockReference::class$ = nullptr;

		} // ch
	} // nio
} // sun