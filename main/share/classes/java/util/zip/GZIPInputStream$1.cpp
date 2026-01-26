#include <java/util/zip/GZIPInputStream$1.h>

#include <java/io/FilterInputStream.h>
#include <java/io/InputStream.h>
#include <java/util/zip/GZIPInputStream.h>
#include <jcpp.h>

using $FilterInputStream = ::java::io::FilterInputStream;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GZIPInputStream = ::java::util::zip::GZIPInputStream;

namespace java {
	namespace util {
		namespace zip {

$FieldInfo _GZIPInputStream$1_FieldInfo_[] = {
	{"this$0", "Ljava/util/zip/GZIPInputStream;", nullptr, $FINAL | $SYNTHETIC, $field(GZIPInputStream$1, this$0)},
	{}
};

$MethodInfo _GZIPInputStream$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/zip/GZIPInputStream;Ljava/io/InputStream;)V", nullptr, 0, $method(GZIPInputStream$1, init$, void, $GZIPInputStream*, $InputStream*)},
	{"close", "()V", nullptr, $PUBLIC, $virtualMethod(GZIPInputStream$1, close, void), "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _GZIPInputStream$1_EnclosingMethodInfo_ = {
	"java.util.zip.GZIPInputStream",
	"readTrailer",
	"()Z"
};

$InnerClassInfo _GZIPInputStream$1_InnerClassesInfo_[] = {
	{"java.util.zip.GZIPInputStream$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _GZIPInputStream$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.zip.GZIPInputStream$1",
	"java.io.FilterInputStream",
	nullptr,
	_GZIPInputStream$1_FieldInfo_,
	_GZIPInputStream$1_MethodInfo_,
	nullptr,
	&_GZIPInputStream$1_EnclosingMethodInfo_,
	_GZIPInputStream$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.zip.GZIPInputStream"
};

$Object* allocate$GZIPInputStream$1($Class* clazz) {
	return $of($alloc(GZIPInputStream$1));
}

void GZIPInputStream$1::init$($GZIPInputStream* this$0, $InputStream* in) {
	$set(this, this$0, this$0);
	$FilterInputStream::init$(in);
}

void GZIPInputStream$1::close() {
}

GZIPInputStream$1::GZIPInputStream$1() {
}

$Class* GZIPInputStream$1::load$($String* name, bool initialize) {
	$loadClass(GZIPInputStream$1, name, initialize, &_GZIPInputStream$1_ClassInfo_, allocate$GZIPInputStream$1);
	return class$;
}

$Class* GZIPInputStream$1::class$ = nullptr;

		} // zip
	} // util
} // java