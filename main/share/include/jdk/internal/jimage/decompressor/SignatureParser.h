#ifndef _jdk_internal_jimage_decompressor_SignatureParser_h_
#define _jdk_internal_jimage_decompressor_SignatureParser_h_
//$ class jdk.internal.jimage.decompressor.SignatureParser
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class List;
	}
}
namespace jdk {
	namespace internal {
		namespace jimage {
			namespace decompressor {
				class SignatureParser$ParseResult;
			}
		}
	}
}

namespace jdk {
	namespace internal {
		namespace jimage {
			namespace decompressor {

class $import SignatureParser : public ::java::lang::Object {
	$class(SignatureParser, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SignatureParser();
	void init$();
	static ::jdk::internal::jimage::decompressor::SignatureParser$ParseResult* parseSignatureDescriptor($String* str);
	static $String* reconstruct($String* formatted, ::java::util::List* arguments);
};

			} // decompressor
		} // jimage
	} // internal
} // jdk

#endif // _jdk_internal_jimage_decompressor_SignatureParser_h_