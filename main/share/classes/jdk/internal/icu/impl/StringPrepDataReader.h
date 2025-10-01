#ifndef _jdk_internal_icu_impl_StringPrepDataReader_h_
#define _jdk_internal_icu_impl_StringPrepDataReader_h_
//$ class jdk.internal.icu.impl.StringPrepDataReader
//$ extends jdk.internal.icu.impl.ICUBinary$Authenticate

#include <java/lang/Array.h>
#include <jdk/internal/icu/impl/ICUBinary$Authenticate.h>

#pragma push_macro("DATA_FORMAT_ID")
#undef DATA_FORMAT_ID
#pragma push_macro("DATA_FORMAT_VERSION")
#undef DATA_FORMAT_VERSION

namespace java {
	namespace io {
		class DataInputStream;
		class InputStream;
	}
}

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

class StringPrepDataReader : public ::jdk::internal::icu::impl::ICUBinary$Authenticate {
	$class(StringPrepDataReader, 0, ::jdk::internal::icu::impl::ICUBinary$Authenticate)
public:
	StringPrepDataReader();
	void init$(::java::io::InputStream* inputStream);
	$bytes* getDataFormatVersion();
	$bytes* getUnicodeVersion();
	virtual bool isDataVersionAcceptable($bytes* version) override;
	void read($bytes* idnaBytes, $chars* mappingTable);
	$ints* readIndexes(int32_t length);
	::java::io::DataInputStream* dataInputStream = nullptr;
	$bytes* unicodeVersion = nullptr;
	static $bytes* DATA_FORMAT_ID;
	static $bytes* DATA_FORMAT_VERSION;
};

			} // impl
		} // icu
	} // internal
} // jdk

#pragma pop_macro("DATA_FORMAT_ID")
#pragma pop_macro("DATA_FORMAT_VERSION")

#endif // _jdk_internal_icu_impl_StringPrepDataReader_h_