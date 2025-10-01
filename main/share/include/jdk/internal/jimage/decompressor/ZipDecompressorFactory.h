#ifndef _jdk_internal_jimage_decompressor_ZipDecompressorFactory_h_
#define _jdk_internal_jimage_decompressor_ZipDecompressorFactory_h_
//$ class jdk.internal.jimage.decompressor.ZipDecompressorFactory
//$ extends jdk.internal.jimage.decompressor.ResourceDecompressorFactory

#include <jdk/internal/jimage/decompressor/ResourceDecompressorFactory.h>

#pragma push_macro("NAME")
#undef NAME

namespace java {
	namespace util {
		class Properties;
	}
}
namespace jdk {
	namespace internal {
		namespace jimage {
			namespace decompressor {
				class ResourceDecompressor;
			}
		}
	}
}

namespace jdk {
	namespace internal {
		namespace jimage {
			namespace decompressor {

class $import ZipDecompressorFactory : public ::jdk::internal::jimage::decompressor::ResourceDecompressorFactory {
	$class(ZipDecompressorFactory, 0, ::jdk::internal::jimage::decompressor::ResourceDecompressorFactory)
public:
	ZipDecompressorFactory();
	void init$();
	virtual ::jdk::internal::jimage::decompressor::ResourceDecompressor* newDecompressor(::java::util::Properties* properties) override;
	static $String* NAME;
};

			} // decompressor
		} // jimage
	} // internal
} // jdk

#pragma pop_macro("NAME")

#endif // _jdk_internal_jimage_decompressor_ZipDecompressorFactory_h_