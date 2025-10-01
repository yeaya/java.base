#include <jdk/internal/jimage/decompressor/Decompressor.h>

#include <java/io/ByteArrayInputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteOrder.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/StandardCharsets.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <java/util/Objects.h>
#include <java/util/Properties.h>
#include <jdk/internal/jimage/decompressor/CompressedResourceHeader.h>
#include <jdk/internal/jimage/decompressor/ResourceDecompressor$StringsProvider.h>
#include <jdk/internal/jimage/decompressor/ResourceDecompressor.h>
#include <jdk/internal/jimage/decompressor/ResourceDecompressorRepository.h>
#include <jcpp.h>

#undef UTF_8

using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $ByteOrder = ::java::nio::ByteOrder;
using $Charset = ::java::nio::charset::Charset;
using $StandardCharsets = ::java::nio::charset::StandardCharsets;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $Objects = ::java::util::Objects;
using $Properties = ::java::util::Properties;
using $CompressedResourceHeader = ::jdk::internal::jimage::decompressor::CompressedResourceHeader;
using $ResourceDecompressor = ::jdk::internal::jimage::decompressor::ResourceDecompressor;
using $ResourceDecompressor$StringsProvider = ::jdk::internal::jimage::decompressor::ResourceDecompressor$StringsProvider;
using $ResourceDecompressorRepository = ::jdk::internal::jimage::decompressor::ResourceDecompressorRepository;

namespace jdk {
	namespace internal {
		namespace jimage {
			namespace decompressor {

$FieldInfo _Decompressor_FieldInfo_[] = {
	{"pluginsCache", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Integer;Ljdk/internal/jimage/decompressor/ResourceDecompressor;>;", $PRIVATE | $FINAL, $field(Decompressor, pluginsCache)},
	{}
};

$MethodInfo _Decompressor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Decompressor::*)()>(&Decompressor::init$))},
	{"decompressResource", "(Ljava/nio/ByteOrder;Ljdk/internal/jimage/decompressor/ResourceDecompressor$StringsProvider;[B)[B", nullptr, $PUBLIC, $method(static_cast<$bytes*(Decompressor::*)($ByteOrder*,$ResourceDecompressor$StringsProvider*,$bytes*)>(&Decompressor::decompressResource)), "java.io.IOException"},
	{}
};

$ClassInfo _Decompressor_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"jdk.internal.jimage.decompressor.Decompressor",
	"java.lang.Object",
	nullptr,
	_Decompressor_FieldInfo_,
	_Decompressor_MethodInfo_
};

$Object* allocate$Decompressor($Class* clazz) {
	return $of($alloc(Decompressor));
}

void Decompressor::init$() {
	$set(this, pluginsCache, $new($HashMap));
}

$bytes* Decompressor::decompressResource($ByteOrder* order, $ResourceDecompressor$StringsProvider* provider, $bytes* content$renamed) {
	$var($bytes, content, content$renamed);
	$Objects::requireNonNull(order);
	$Objects::requireNonNull(provider);
	$Objects::requireNonNull(content);
	$var($CompressedResourceHeader, header, nullptr);
	do {
		$assign(header, $CompressedResourceHeader::readFromResource(order, content));
		if (header != nullptr) {
			$var($ResourceDecompressor, decompressor, $cast($ResourceDecompressor, $nc(this->pluginsCache)->get($($Integer::valueOf(header->getDecompressorNameOffset())))));
			if (decompressor == nullptr) {
				$var($String, pluginName, provider->getString(header->getDecompressorNameOffset()));
				if (pluginName == nullptr) {
					$throwNew($IOException, "Plugin name not found"_s);
				}
				$var($String, storedContent, header->getStoredContent(provider));
				$var($Properties, props, $new($Properties));
				if (storedContent != nullptr) {
					{
						$init($StandardCharsets);
						$var($ByteArrayInputStream, stream, $new($ByteArrayInputStream, $(storedContent->getBytes($StandardCharsets::UTF_8))));
						{
							$var($Throwable, var$0, nullptr);
							try {
								try {
									props->loadFromXML(stream);
								} catch ($Throwable&) {
									$var($Throwable, t$, $catch());
									try {
										stream->close();
									} catch ($Throwable&) {
										$var($Throwable, x2, $catch());
										t$->addSuppressed(x2);
									}
									$throw(t$);
								}
							} catch ($Throwable&) {
								$assign(var$0, $catch());
							} /*finally*/ {
								stream->close();
							}
							if (var$0 != nullptr) {
								$throw(var$0);
							}
						}
					}
				}
				$assign(decompressor, $ResourceDecompressorRepository::newResourceDecompressor(props, pluginName));
				if (decompressor == nullptr) {
					$throwNew($IOException, $$str({"Plugin not found: "_s, pluginName}));
				}
				$nc(this->pluginsCache)->put($($Integer::valueOf(header->getDecompressorNameOffset())), decompressor);
			}
			try {
				$var($ResourceDecompressor$StringsProvider, var$1, provider);
				$var($bytes, var$2, content);
				int32_t var$3 = $CompressedResourceHeader::getSize();
				$assign(content, $nc(decompressor)->decompress(var$1, var$2, var$3, header->getUncompressedSize()));
			} catch ($Exception&) {
				$var($Exception, ex, $catch());
				$throwNew($IOException, static_cast<$Throwable*>(ex));
			}
		}
	} while (header != nullptr);
	return content;
}

Decompressor::Decompressor() {
}

$Class* Decompressor::load$($String* name, bool initialize) {
	$loadClass(Decompressor, name, initialize, &_Decompressor_ClassInfo_, allocate$Decompressor);
	return class$;
}

$Class* Decompressor::class$ = nullptr;

			} // decompressor
		} // jimage
	} // internal
} // jdk