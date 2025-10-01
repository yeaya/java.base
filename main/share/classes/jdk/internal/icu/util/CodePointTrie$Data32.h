#ifndef _jdk_internal_icu_util_CodePointTrie$Data32_h_
#define _jdk_internal_icu_util_CodePointTrie$Data32_h_
//$ class jdk.internal.icu.util.CodePointTrie$Data32
//$ extends jdk.internal.icu.util.CodePointTrie$Data

#include <java/lang/Array.h>
#include <jdk/internal/icu/util/CodePointTrie$Data.h>

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

class CodePointTrie$Data32 : public ::jdk::internal::icu::util::CodePointTrie$Data {
	$class(CodePointTrie$Data32, $NO_CLASS_INIT, ::jdk::internal::icu::util::CodePointTrie$Data)
public:
	CodePointTrie$Data32();
	void init$($ints* a);
	virtual int32_t getDataLength() override;
	virtual int32_t getFromIndex(int32_t index) override;
	virtual ::jdk::internal::icu::util::CodePointTrie$ValueWidth* getValueWidth() override;
	virtual int32_t write(::java::io::DataOutputStream* dos) override;
	$ints* array = nullptr;
};

			} // util
		} // icu
	} // internal
} // jdk

#endif // _jdk_internal_icu_util_CodePointTrie$Data32_h_