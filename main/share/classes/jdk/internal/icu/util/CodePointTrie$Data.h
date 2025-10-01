#ifndef _jdk_internal_icu_util_CodePointTrie$Data_h_
#define _jdk_internal_icu_util_CodePointTrie$Data_h_
//$ class jdk.internal.icu.util.CodePointTrie$Data
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class DataOutputStream;
	}
}
namespace jdk {
	namespace internal {
		namespace icu {
			namespace util {
				class CodePointTrie$ValueWidth;
			}
		}
	}
}

namespace jdk {
	namespace internal {
		namespace icu {
			namespace util {

class CodePointTrie$Data : public ::java::lang::Object {
	$class(CodePointTrie$Data, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CodePointTrie$Data();
	void init$();
	virtual int32_t getDataLength() {return 0;}
	virtual int32_t getFromIndex(int32_t index) {return 0;}
	virtual ::jdk::internal::icu::util::CodePointTrie$ValueWidth* getValueWidth() {return nullptr;}
	virtual int32_t write(::java::io::DataOutputStream* dos) {return 0;}
};

			} // util
		} // icu
	} // internal
} // jdk

#endif // _jdk_internal_icu_util_CodePointTrie$Data_h_