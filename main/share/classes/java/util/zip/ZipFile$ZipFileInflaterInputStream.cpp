#include <java/util/zip/ZipFile$ZipFileInflaterInputStream.h>

#include <java/io/EOFException.h>
#include <java/io/FilterInputStream.h>
#include <java/io/InputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/ref/Cleaner$Cleanable.h>
#include <java/lang/ref/Cleaner.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Set.h>
#include <java/util/zip/Inflater.h>
#include <java/util/zip/InflaterInputStream.h>
#include <java/util/zip/ZipFile$CleanableResource.h>
#include <java/util/zip/ZipFile$InflaterCleanupAction.h>
#include <java/util/zip/ZipFile$ZipFileInputStream.h>
#include <java/util/zip/ZipFile.h>
#include <jdk/internal/ref/CleanerFactory.h>
#include <jcpp.h>

#undef MAX_VALUE

using $EOFException = ::java::io::EOFException;
using $FilterInputStream = ::java::io::FilterInputStream;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Cleaner = ::java::lang::ref::Cleaner;
using $Cleaner$Cleanable = ::java::lang::ref::Cleaner$Cleanable;
using $Set = ::java::util::Set;
using $Inflater = ::java::util::zip::Inflater;
using $InflaterInputStream = ::java::util::zip::InflaterInputStream;
using $ZipFile = ::java::util::zip::ZipFile;
using $ZipFile$CleanableResource = ::java::util::zip::ZipFile$CleanableResource;
using $ZipFile$InflaterCleanupAction = ::java::util::zip::ZipFile$InflaterCleanupAction;
using $ZipFile$ZipFileInputStream = ::java::util::zip::ZipFile$ZipFileInputStream;
using $CleanerFactory = ::jdk::internal::ref::CleanerFactory;

namespace java {
	namespace util {
		namespace zip {

$FieldInfo _ZipFile$ZipFileInflaterInputStream_FieldInfo_[] = {
	{"this$0", "Ljava/util/zip/ZipFile;", nullptr, $FINAL | $SYNTHETIC, $field(ZipFile$ZipFileInflaterInputStream, this$0)},
	{"closeRequested", "Z", nullptr, $PRIVATE | $VOLATILE, $field(ZipFile$ZipFileInflaterInputStream, closeRequested)},
	{"eof", "Z", nullptr, $PRIVATE, $field(ZipFile$ZipFileInflaterInputStream, eof)},
	{"cleanable", "Ljava/lang/ref/Cleaner$Cleanable;", nullptr, $PRIVATE | $FINAL, $field(ZipFile$ZipFileInflaterInputStream, cleanable)},
	{}
};

$MethodInfo _ZipFile$ZipFileInflaterInputStream_MethodInfo_[] = {
	{"<init>", "(Ljava/util/zip/ZipFile;Ljava/util/zip/ZipFile$ZipFileInputStream;Ljava/util/zip/ZipFile$CleanableResource;I)V", nullptr, 0, $method(static_cast<void(ZipFile$ZipFileInflaterInputStream::*)($ZipFile*,$ZipFile$ZipFileInputStream*,$ZipFile$CleanableResource*,int32_t)>(&ZipFile$ZipFileInflaterInputStream::init$))},
	{"<init>", "(Ljava/util/zip/ZipFile;Ljava/util/zip/ZipFile$ZipFileInputStream;Ljava/util/zip/ZipFile$CleanableResource;Ljava/util/zip/Inflater;I)V", nullptr, $PRIVATE, $method(static_cast<void(ZipFile$ZipFileInflaterInputStream::*)($ZipFile*,$ZipFile$ZipFileInputStream*,$ZipFile$CleanableResource*,$Inflater*,int32_t)>(&ZipFile$ZipFileInflaterInputStream::init$))},
	{"available", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"fill", "()V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _ZipFile$ZipFileInflaterInputStream_InnerClassesInfo_[] = {
	{"java.util.zip.ZipFile$ZipFileInflaterInputStream", "java.util.zip.ZipFile", "ZipFileInflaterInputStream", $PRIVATE},
	{}
};

$ClassInfo _ZipFile$ZipFileInflaterInputStream_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.zip.ZipFile$ZipFileInflaterInputStream",
	"java.util.zip.InflaterInputStream",
	nullptr,
	_ZipFile$ZipFileInflaterInputStream_FieldInfo_,
	_ZipFile$ZipFileInflaterInputStream_MethodInfo_,
	nullptr,
	nullptr,
	_ZipFile$ZipFileInflaterInputStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.zip.ZipFile"
};

$Object* allocate$ZipFile$ZipFileInflaterInputStream($Class* clazz) {
	return $of($alloc(ZipFile$ZipFileInflaterInputStream));
}

void ZipFile$ZipFileInflaterInputStream::init$($ZipFile* this$0, $ZipFile$ZipFileInputStream* zfin, $ZipFile$CleanableResource* res, int32_t size) {
	ZipFile$ZipFileInflaterInputStream::init$(this$0, zfin, res, $($nc(res)->getInflater()), size);
}

void ZipFile$ZipFileInflaterInputStream::init$($ZipFile* this$0, $ZipFile$ZipFileInputStream* zfin, $ZipFile$CleanableResource* res, $Inflater* inf, int32_t size) {
	$set(this, this$0, this$0);
	$InflaterInputStream::init$(zfin, inf, size);
	this->eof = false;
	$set(this, cleanable, $nc($($CleanerFactory::cleaner()))->register$(this, $$new($ZipFile$InflaterCleanupAction, inf, res)));
}

void ZipFile$ZipFileInflaterInputStream::close() {
	if (this->closeRequested) {
		return;
	}
	this->closeRequested = true;
	$InflaterInputStream::close();
	$synchronized($nc(this->this$0->res)->istreams) {
		$nc($nc(this->this$0->res)->istreams)->remove(this);
	}
	$nc(this->cleanable)->clean();
}

void ZipFile$ZipFileInflaterInputStream::fill() {
	if (this->eof) {
		$throwNew($EOFException, "Unexpected end of ZLIB input stream"_s);
	}
	this->len = $nc(this->in)->read(this->buf, 0, $nc(this->buf)->length);
	if (this->len == -1) {
		$nc(this->buf)->set(0, (int8_t)0);
		this->len = 1;
		this->eof = true;
	}
	$nc(this->inf)->setInput(this->buf, 0, this->len);
}

int32_t ZipFile$ZipFileInflaterInputStream::available() {
	if (this->closeRequested) {
		return 0;
	}
	int64_t var$0 = $nc(($cast($ZipFile$ZipFileInputStream, this->in)))->size();
	int64_t avail = var$0 - $nc(this->inf)->getBytesWritten();
	return (avail > (int64_t)$Integer::MAX_VALUE ? $Integer::MAX_VALUE : (int32_t)avail);
}

ZipFile$ZipFileInflaterInputStream::ZipFile$ZipFileInflaterInputStream() {
}

$Class* ZipFile$ZipFileInflaterInputStream::load$($String* name, bool initialize) {
	$loadClass(ZipFile$ZipFileInflaterInputStream, name, initialize, &_ZipFile$ZipFileInflaterInputStream_ClassInfo_, allocate$ZipFile$ZipFileInflaterInputStream);
	return class$;
}

$Class* ZipFile$ZipFileInflaterInputStream::class$ = nullptr;

		} // zip
	} // util
} // java