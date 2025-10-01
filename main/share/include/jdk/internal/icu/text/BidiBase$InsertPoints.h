#ifndef _jdk_internal_icu_text_BidiBase$InsertPoints_h_
#define _jdk_internal_icu_text_BidiBase$InsertPoints_h_
//$ class jdk.internal.icu.text.BidiBase$InsertPoints
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {
				class BidiBase$Point;
			}
		}
	}
}

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

class $import BidiBase$InsertPoints : public ::java::lang::Object {
	$class(BidiBase$InsertPoints, $NO_CLASS_INIT, ::java::lang::Object)
public:
	BidiBase$InsertPoints();
	void init$();
	int32_t size = 0;
	int32_t confirmed = 0;
	$Array<::jdk::internal::icu::text::BidiBase$Point>* points = nullptr;
};

			} // text
		} // icu
	} // internal
} // jdk

#endif // _jdk_internal_icu_text_BidiBase$InsertPoints_h_