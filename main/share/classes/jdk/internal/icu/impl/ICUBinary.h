#ifndef _jdk_internal_icu_impl_ICUBinary_h_
#define _jdk_internal_icu_impl_ICUBinary_h_
//$ class jdk.internal.icu.impl.ICUBinary
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("BIG_ENDIAN_")
#undef BIG_ENDIAN_
#pragma push_macro("CHAR_SET_")
#undef CHAR_SET_
#pragma push_macro("CHAR_SIZE_")
#undef CHAR_SIZE_
#pragma push_macro("HEADER_AUTHENTICATION_FAILED_")
#undef HEADER_AUTHENTICATION_FAILED_
#pragma push_macro("MAGIC1")
#undef MAGIC1
#pragma push_macro("MAGIC2")
#undef MAGIC2
#pragma push_macro("MAGIC_NUMBER_AUTHENTICATION_FAILED_")
#undef MAGIC_NUMBER_AUTHENTICATION_FAILED_

namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {
				class ICUBinary$Authenticate;
			}
		}
	}
}
namespace jdk {
	namespace internal {
		namespace icu {
			namespace util {
				class VersionInfo;
			}
		}
	}
}

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

class ICUBinary : public ::java::lang::Object {
	$class(ICUBinary, 0, ::java::lang::Object)
public:
	ICUBinary();
	void init$();
	static $bytes* getBytes(::java::nio::ByteBuffer* bytes, int32_t length, int32_t additionalSkipLength);
	static $chars* getChars(::java::nio::ByteBuffer* bytes, int32_t length, int32_t additionalSkipLength);
	static $ints* getInts(::java::nio::ByteBuffer* bytes, int32_t length, int32_t additionalSkipLength);
	static ::java::nio::ByteBuffer* getRequiredData($String* itemPath);
	static $String* getString(::java::nio::ByteBuffer* bytes, int32_t length, int32_t additionalSkipLength);
	static ::jdk::internal::icu::util::VersionInfo* getVersionInfoFromCompactInt(int32_t version);
	static $bytes* readHeader(::java::io::InputStream* inputStream, $bytes* dataFormatIDExpected, ::jdk::internal::icu::impl::ICUBinary$Authenticate* authenticate);
	static int32_t readHeader(::java::nio::ByteBuffer* bytes, int32_t dataFormat, ::jdk::internal::icu::impl::ICUBinary$Authenticate* authenticate);
	static ::jdk::internal::icu::util::VersionInfo* readHeaderAndDataVersion(::java::nio::ByteBuffer* bytes, int32_t dataFormat, ::jdk::internal::icu::impl::ICUBinary$Authenticate* authenticate);
	static void skipBytes(::java::nio::ByteBuffer* bytes, int32_t skipLength);
	static bool $assertionsDisabled;
	static const int8_t BIG_ENDIAN_ = 1;
	static const int8_t MAGIC1 = (int8_t)218;
	static const int8_t MAGIC2 = (int8_t)39;
	static const int8_t CHAR_SET_ = 0;
	static const int8_t CHAR_SIZE_ = 2;
	static $String* MAGIC_NUMBER_AUTHENTICATION_FAILED_;
	static $String* HEADER_AUTHENTICATION_FAILED_;
};

			} // impl
		} // icu
	} // internal
} // jdk

#pragma pop_macro("BIG_ENDIAN_")
#pragma pop_macro("CHAR_SET_")
#pragma pop_macro("CHAR_SIZE_")
#pragma pop_macro("HEADER_AUTHENTICATION_FAILED_")
#pragma pop_macro("MAGIC1")
#pragma pop_macro("MAGIC2")
#pragma pop_macro("MAGIC_NUMBER_AUTHENTICATION_FAILED_")

#endif // _jdk_internal_icu_impl_ICUBinary_h_