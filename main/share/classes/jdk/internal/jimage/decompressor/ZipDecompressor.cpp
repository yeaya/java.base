#include <jdk/internal/jimage/decompressor/ZipDecompressor.h>

#include <java/io/ByteArrayOutputStream.h>
#include <java/util/zip/Inflater.h>
#include <jdk/internal/jimage/decompressor/ResourceDecompressor$StringsProvider.h>
#include <jdk/internal/jimage/decompressor/ZipDecompressorFactory.h>
#include <jcpp.h>

#undef NAME

using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Inflater = ::java::util::zip::Inflater;
using $ResourceDecompressor$StringsProvider = ::jdk::internal::jimage::decompressor::ResourceDecompressor$StringsProvider;
using $ZipDecompressorFactory = ::jdk::internal::jimage::decompressor::ZipDecompressorFactory;

namespace jdk {
	namespace internal {
		namespace jimage {
			namespace decompressor {

$MethodInfo _ZipDecompressor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ZipDecompressor::*)()>(&ZipDecompressor::init$))},
	{"decompress", "([BI)[B", nullptr, $STATIC, $method(static_cast<$bytes*(*)($bytes*,int32_t)>(&ZipDecompressor::decompress)), "java.lang.Exception"},
	{"decompress", "(Ljdk/internal/jimage/decompressor/ResourceDecompressor$StringsProvider;[BIJ)[B", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ZipDecompressor_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"jdk.internal.jimage.decompressor.ZipDecompressor",
	"java.lang.Object",
	"jdk.internal.jimage.decompressor.ResourceDecompressor",
	nullptr,
	_ZipDecompressor_MethodInfo_
};

$Object* allocate$ZipDecompressor($Class* clazz) {
	return $of($alloc(ZipDecompressor));
}

void ZipDecompressor::init$() {
}

$String* ZipDecompressor::getName() {
	$init($ZipDecompressorFactory);
	return $ZipDecompressorFactory::NAME;
}

$bytes* ZipDecompressor::decompress($bytes* bytesIn, int32_t offset) {
	$init(ZipDecompressor);
	$useLocalCurrentObjectStackCache();
	$var($Inflater, inflater, $new($Inflater));
	inflater->setInput(bytesIn, offset, $nc(bytesIn)->length - offset);
	$var($ByteArrayOutputStream, stream, $new($ByteArrayOutputStream, $nc(bytesIn)->length - offset));
	$var($bytes, buffer, $new($bytes, 1024));
	while (!inflater->finished()) {
		int32_t count = inflater->inflate(buffer);
		stream->write(buffer, 0, count);
	}
	stream->close();
	$var($bytes, bytesOut, stream->toByteArray());
	inflater->end();
	return bytesOut;
}

$bytes* ZipDecompressor::decompress($ResourceDecompressor$StringsProvider* reader, $bytes* content, int32_t offset, int64_t originalSize) {
	$var($bytes, decompressed, decompress(content, offset));
	return decompressed;
}

ZipDecompressor::ZipDecompressor() {
}

$Class* ZipDecompressor::load$($String* name, bool initialize) {
	$loadClass(ZipDecompressor, name, initialize, &_ZipDecompressor_ClassInfo_, allocate$ZipDecompressor);
	return class$;
}

$Class* ZipDecompressor::class$ = nullptr;

			} // decompressor
		} // jimage
	} // internal
} // jdk