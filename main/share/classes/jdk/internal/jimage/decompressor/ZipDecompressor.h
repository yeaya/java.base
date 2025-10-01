#ifndef _jdk_internal_jimage_decompressor_ZipDecompressor_h_
#define _jdk_internal_jimage_decompressor_ZipDecompressor_h_
//$ class jdk.internal.jimage.decompressor.ZipDecompressor
//$ extends jdk.internal.jimage.decompressor.ResourceDecompressor

#include <java/lang/Array.h>
#include <jdk/internal/jimage/decompressor/ResourceDecompressor.h>

namespace jdk {
	namespace internal {
		namespace jimage {
			namespace decompressor {
				class ResourceDecompressor$StringsProvider;
			}
		}
	}
}

namespace jdk {
	namespace internal {
		namespace jimage {
			namespace decompressor {

class ZipDecompressor : public ::jdk::internal::jimage::decompressor::ResourceDecompressor {
	$class(ZipDecompressor, $NO_CLASS_INIT, ::jdk::internal::jimage::decompressor::ResourceDecompressor)
public:
	ZipDecompressor();
	void init$();
	static $bytes* decompress($bytes* bytesIn, int32_t offset);
	virtual $bytes* decompress(::jdk::internal::jimage::decompressor::ResourceDecompressor$StringsProvider* reader, $bytes* content, int32_t offset, int64_t originalSize) override;
	virtual $String* getName() override;
};

			} // decompressor
		} // jimage
	} // internal
} // jdk

#endif // _jdk_internal_jimage_decompressor_ZipDecompressor_h_