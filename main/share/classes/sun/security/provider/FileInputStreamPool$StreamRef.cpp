#include <sun/security/provider/FileInputStreamPool$StreamRef.h>

#include <java/io/File.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/ref/WeakReference.h>
#include <sun/security/provider/FileInputStreamPool$UnclosableInputStream.h>
#include <sun/security/provider/FileInputStreamPool.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $WeakReference = ::java::lang::ref::WeakReference;
using $FileInputStreamPool$UnclosableInputStream = ::sun::security::provider::FileInputStreamPool$UnclosableInputStream;

namespace sun {
	namespace security {
		namespace provider {

$FieldInfo _FileInputStreamPool$StreamRef_FieldInfo_[] = {
	{"file", "Ljava/io/File;", nullptr, $FINAL, $field(FileInputStreamPool$StreamRef, file)},
	{}
};

$MethodInfo _FileInputStreamPool$StreamRef_MethodInfo_[] = {
	{"<init>", "(Ljava/io/File;Lsun/security/provider/FileInputStreamPool$UnclosableInputStream;Ljava/lang/ref/ReferenceQueue;)V", "(Ljava/io/File;Lsun/security/provider/FileInputStreamPool$UnclosableInputStream;Ljava/lang/ref/ReferenceQueue<Lsun/security/provider/FileInputStreamPool$UnclosableInputStream;>;)V", 0, $method(FileInputStreamPool$StreamRef, init$, void, $File*, $FileInputStreamPool$UnclosableInputStream*, $ReferenceQueue*)},
	{}
};

$InnerClassInfo _FileInputStreamPool$StreamRef_InnerClassesInfo_[] = {
	{"sun.security.provider.FileInputStreamPool$StreamRef", "sun.security.provider.FileInputStreamPool", "StreamRef", $PRIVATE | $STATIC},
	{"sun.security.provider.FileInputStreamPool$UnclosableInputStream", "sun.security.provider.FileInputStreamPool", "UnclosableInputStream", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _FileInputStreamPool$StreamRef_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.provider.FileInputStreamPool$StreamRef",
	"java.lang.ref.WeakReference",
	nullptr,
	_FileInputStreamPool$StreamRef_FieldInfo_,
	_FileInputStreamPool$StreamRef_MethodInfo_,
	"Ljava/lang/ref/WeakReference<Lsun/security/provider/FileInputStreamPool$UnclosableInputStream;>;",
	nullptr,
	_FileInputStreamPool$StreamRef_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.FileInputStreamPool"
};

$Object* allocate$FileInputStreamPool$StreamRef($Class* clazz) {
	return $of($alloc(FileInputStreamPool$StreamRef));
}

void FileInputStreamPool$StreamRef::init$($File* file, $FileInputStreamPool$UnclosableInputStream* stream, $ReferenceQueue* refQueue) {
	$WeakReference::init$(stream, refQueue);
	$set(this, file, file);
}

FileInputStreamPool$StreamRef::FileInputStreamPool$StreamRef() {
}

$Class* FileInputStreamPool$StreamRef::load$($String* name, bool initialize) {
	$loadClass(FileInputStreamPool$StreamRef, name, initialize, &_FileInputStreamPool$StreamRef_ClassInfo_, allocate$FileInputStreamPool$StreamRef);
	return class$;
}

$Class* FileInputStreamPool$StreamRef::class$ = nullptr;

		} // provider
	} // security
} // sun