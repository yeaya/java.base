#ifndef _jdk_internal_jimage_decompressor_ResourceDecompressorFactory_h_
#define _jdk_internal_jimage_decompressor_ResourceDecompressorFactory_h_
//$ class jdk.internal.jimage.decompressor.ResourceDecompressorFactory
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class $export ResourceDecompressorFactory : public ::java::lang::Object {
	$class(ResourceDecompressorFactory, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ResourceDecompressorFactory();
	void init$($String* name);
	virtual $String* getName();
	virtual ::jdk::internal::jimage::decompressor::ResourceDecompressor* newDecompressor(::java::util::Properties* properties) {return nullptr;}
	$String* name = nullptr;
};

			} // decompressor
		} // jimage
	} // internal
} // jdk

#endif // _jdk_internal_jimage_decompressor_ResourceDecompressorFactory_h_