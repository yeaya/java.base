#ifndef _jdk_internal_jimage_decompressor_ResourceDecompressorRepository_h_
#define _jdk_internal_jimage_decompressor_ResourceDecompressorRepository_h_
//$ class jdk.internal.jimage.decompressor.ResourceDecompressorRepository
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Map;
		class Properties;
	}
}
namespace jdk {
	namespace internal {
		namespace jimage {
			namespace decompressor {
				class ResourceDecompressor;
				class ResourceDecompressorFactory;
			}
		}
	}
}

namespace jdk {
	namespace internal {
		namespace jimage {
			namespace decompressor {

class $export ResourceDecompressorRepository : public ::java::lang::Object {
	$class(ResourceDecompressorRepository, 0, ::java::lang::Object)
public:
	ResourceDecompressorRepository();
	void init$();
	static ::jdk::internal::jimage::decompressor::ResourceDecompressor* newResourceDecompressor(::java::util::Properties* properties, $String* name);
	static void registerReaderProvider(::jdk::internal::jimage::decompressor::ResourceDecompressorFactory* factory);
	static ::java::util::Map* factories;
};

			} // decompressor
		} // jimage
	} // internal
} // jdk

#endif // _jdk_internal_jimage_decompressor_ResourceDecompressorRepository_h_