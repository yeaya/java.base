#ifndef _jdk_internal_jimage_decompressor_Decompressor_h_
#define _jdk_internal_jimage_decompressor_Decompressor_h_
//$ class jdk.internal.jimage.decompressor.Decompressor
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace nio {
		class ByteOrder;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}
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

class $export Decompressor : public ::java::lang::Object {
	$class(Decompressor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Decompressor();
	void init$();
	$bytes* decompressResource(::java::nio::ByteOrder* order, ::jdk::internal::jimage::decompressor::ResourceDecompressor$StringsProvider* provider, $bytes* content);
	::java::util::Map* pluginsCache = nullptr;
};

			} // decompressor
		} // jimage
	} // internal
} // jdk

#endif // _jdk_internal_jimage_decompressor_Decompressor_h_