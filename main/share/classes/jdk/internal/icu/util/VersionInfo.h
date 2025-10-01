#ifndef _jdk_internal_icu_util_VersionInfo_h_
#define _jdk_internal_icu_util_VersionInfo_h_
//$ class jdk.internal.icu.util.VersionInfo
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("MAP_")
#undef MAP_
#pragma push_macro("ICU_DATA_VERSION_PATH")
#undef ICU_DATA_VERSION_PATH
#pragma push_macro("INVALID_VERSION_NUMBER_")
#undef INVALID_VERSION_NUMBER_

namespace java {
	namespace util {
		class HashMap;
	}
}

namespace jdk {
	namespace internal {
		namespace icu {
			namespace util {

class VersionInfo : public ::java::lang::Object {
	$class(VersionInfo, 0, ::java::lang::Object)
public:
	VersionInfo();
	void init$(int32_t compactversion);
	int32_t compareTo(::jdk::internal::icu::util::VersionInfo* other);
	static ::jdk::internal::icu::util::VersionInfo* getInstance($String* version);
	static ::jdk::internal::icu::util::VersionInfo* getInstance(int32_t major, int32_t minor, int32_t milli, int32_t micro);
	static int32_t getInt(int32_t major, int32_t minor, int32_t milli, int32_t micro);
	static $String* ICU_DATA_VERSION_PATH;
	int32_t m_version_ = 0;
	static ::java::util::HashMap* MAP_;
	static $String* INVALID_VERSION_NUMBER_;
};

			} // util
		} // icu
	} // internal
} // jdk

#pragma pop_macro("MAP_")
#pragma pop_macro("ICU_DATA_VERSION_PATH")
#pragma pop_macro("INVALID_VERSION_NUMBER_")

#endif // _jdk_internal_icu_util_VersionInfo_h_