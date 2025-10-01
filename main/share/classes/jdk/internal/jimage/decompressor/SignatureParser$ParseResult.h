#ifndef _jdk_internal_jimage_decompressor_SignatureParser$ParseResult_h_
#define _jdk_internal_jimage_decompressor_SignatureParser$ParseResult_h_
//$ class jdk.internal.jimage.decompressor.SignatureParser$ParseResult
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

class $export SignatureParser$ParseResult : public ::java::lang::Object {
	$class(SignatureParser$ParseResult, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SignatureParser$ParseResult();
	void init$();
	::java::util::List* types = nullptr;
	$String* formatted = nullptr;
};

			} // decompressor
		} // jimage
	} // internal
} // jdk

#endif // _jdk_internal_jimage_decompressor_SignatureParser$ParseResult_h_