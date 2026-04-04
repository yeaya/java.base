#include <jdk/internal/jimage/decompressor/Decompressor.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/IOException.h>
#include <java/nio/ByteOrder.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/StandardCharsets.h>
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
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteOrder = ::java::nio::ByteOrder;
using $StandardCharsets = ::java::nio::charset::StandardCharsets;
using $HashMap = ::java::util::HashMap;
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

void Decompressor::init$() {
	$set(this, pluginsCache, $new($HashMap));
}

$bytes* Decompressor::decompressResource($ByteOrder* order, $ResourceDecompressor$StringsProvider* provider, $bytes* content$renamed) {
	$useLocalObjectStack();
	$var($bytes, content, content$renamed);
	$Objects::requireNonNull(order);
	$Objects::requireNonNull(provider);
	$Objects::requireNonNull(content);
	$var($CompressedResourceHeader, header, nullptr);
	do {
		$assign(header, $CompressedResourceHeader::readFromResource(order, content));
		if (header != nullptr) {
			$var($ResourceDecompressor, decompressor, $cast($ResourceDecompressor, this->pluginsCache->get($($Integer::valueOf(header->getDecompressorNameOffset())))));
			if (decompressor == nullptr) {
				$var($String, pluginName, provider->getString(header->getDecompressorNameOffset()));
				if (pluginName == nullptr) {
					$throwNew($IOException, "Plugin name not found"_s);
				}
				$var($String, storedContent, header->getStoredContent(provider));
				$var($Properties, props, $new($Properties));
				if (storedContent != nullptr) {
					$init($StandardCharsets);
					$var($ByteArrayInputStream, stream, $new($ByteArrayInputStream, $(storedContent->getBytes($StandardCharsets::UTF_8))));
					$var($Throwable, var$0, nullptr);
					try {
						try {
							props->loadFromXML(stream);
						} catch ($Throwable& t$) {
							try {
								stream->close();
							} catch ($Throwable& x2) {
								t$->addSuppressed(x2);
							}
							$throw(t$);
						}
					} catch ($Throwable& var$1) {
						$assign(var$0, var$1);
					} /*finally*/ {
						stream->close();
					}
					if (var$0 != nullptr) {
						$throw(var$0);
					}
				}
				$assign(decompressor, $ResourceDecompressorRepository::newResourceDecompressor(props, pluginName));
				if (decompressor == nullptr) {
					$throwNew($IOException, $$str({"Plugin not found: "_s, pluginName}));
				}
				this->pluginsCache->put($($Integer::valueOf(header->getDecompressorNameOffset())), decompressor);
			}
			try {
				int32_t var$2 = $CompressedResourceHeader::getSize();
				$assign(content, $nc(decompressor)->decompress(provider, content, var$2, header->getUncompressedSize()));
			} catch ($Exception& ex) {
				$throwNew($IOException, ex);
			}
		}
	} while (header != nullptr);
	return content;
}

Decompressor::Decompressor() {
}

$Class* Decompressor::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"pluginsCache", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Integer;Ljdk/internal/jimage/decompressor/ResourceDecompressor;>;", $PRIVATE | $FINAL, $field(Decompressor, pluginsCache)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Decompressor, init$, void)},
		{"decompressResource", "(Ljava/nio/ByteOrder;Ljdk/internal/jimage/decompressor/ResourceDecompressor$StringsProvider;[B)[B", nullptr, $PUBLIC, $method(Decompressor, decompressResource, $bytes*, $ByteOrder*, $ResourceDecompressor$StringsProvider*, $bytes*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"jdk.internal.jimage.decompressor.Decompressor",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Decompressor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Decompressor);
	});
	return class$;
}

$Class* Decompressor::class$ = nullptr;

			} // decompressor
		} // jimage
	} // internal
} // jdk