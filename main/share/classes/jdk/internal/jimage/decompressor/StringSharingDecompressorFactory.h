#ifndef _jdk_internal_jimage_decompressor_StringSharingDecompressorFactory_h_
#define _jdk_internal_jimage_decompressor_StringSharingDecompressorFactory_h_
//$ class jdk.internal.jimage.decompressor.StringSharingDecompressorFactory
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

class $export StringSharingDecompressorFactory : public ::jdk::internal::jimage::decompressor::ResourceDecompressorFactory {
	$class(StringSharingDecompressorFactory, 0, ::jdk::internal::jimage::decompressor::ResourceDecompressorFactory)
public:
	StringSharingDecompressorFactory();
	void init$();
	virtual ::jdk::internal::jimage::decompressor::ResourceDecompressor* newDecompressor(::java::util::Properties* properties) override;
	static $String* NAME;
};

			} // decompressor
		} // jimage
	} // internal
} // jdk

#pragma pop_macro("NAME")

#endif // _jdk_internal_jimage_decompressor_StringSharingDecompressorFactory_h_