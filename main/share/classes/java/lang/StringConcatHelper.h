#ifndef _java_lang_StringConcatHelper_h_
#define _java_lang_StringConcatHelper_h_
//$ class java.lang.StringConcatHelper
//$ extends java.lang.Object

#include <java/lang/Array.h>
#include <java/lang/String.h>

#pragma push_macro("LATIN1")
#undef LATIN1
#pragma push_macro("UNSAFE")
#undef UNSAFE
#pragma push_macro("UTF16")
#undef UTF16

namespace java {
	namespace lang {
		namespace invoke {
			class MethodHandle;
			class MethodType;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace misc {
			class Unsafe;
		}
	}
}

namespace java {
	namespace lang {

class StringConcatHelper : public ::java::lang::Object {
	$class(StringConcatHelper, $PRELOAD, ::java::lang::Object)
public:
	StringConcatHelper();
	void init$();
	static int64_t checkOverflow(int64_t lengthCoder);
	static int64_t initialCoder();
	static ::java::lang::invoke::MethodHandle* lookupStatic($String* name, ::java::lang::invoke::MethodType* methodType);
	static int64_t mix(int64_t lengthCoder, bool value);
	static int64_t mix(int64_t lengthCoder, int8_t value);
	static int64_t mix(int64_t lengthCoder, char16_t value);
	static int64_t mix(int64_t lengthCoder, int16_t value);
	static int64_t mix(int64_t lengthCoder, int32_t value);
	static int64_t mix(int64_t lengthCoder, int64_t value);
	static int64_t mix(int64_t lengthCoder, $String* value);
	static $bytes* newArray(int64_t indexCoder);
	static $bytes* newArrayWithSuffix($String* suffix, int64_t indexCoder);
	static $String* newString($bytes* buf, int64_t indexCoder);
	static $String* newStringOf(Object$* arg);
	static int64_t prepend(int64_t indexCoder, $bytes* buf, bool value);
	static int64_t prepend(int64_t indexCoder, $bytes* buf, bool value, $String* prefix);
	static int64_t prepend(int64_t indexCoder, $bytes* buf, int8_t value, $String* prefix);
	static int64_t prepend(int64_t indexCoder, $bytes* buf, char16_t value);
	static int64_t prepend(int64_t indexCoder, $bytes* buf, char16_t value, $String* prefix);
	static int64_t prepend(int64_t indexCoder, $bytes* buf, int16_t value, $String* prefix);
	static int64_t prepend(int64_t indexCoder, $bytes* buf, int32_t value);
	static int64_t prepend(int64_t indexCoder, $bytes* buf, int32_t value, $String* prefix);
	static int64_t prepend(int64_t indexCoder, $bytes* buf, int64_t value);
	static int64_t prepend(int64_t indexCoder, $bytes* buf, int64_t value, $String* prefix);
	static int64_t prepend(int64_t indexCoder, $bytes* buf, $String* value);
	static int64_t prepend(int64_t indexCoder, $bytes* buf, $String* value, $String* prefix);
	static $String* simpleConcat(Object$* first, Object$* second);
	static $String* stringOf(Object$* value);
	static const int64_t LATIN1 = 0; // (int64_t)::java::lang::String::LATIN1 << 32
	static const int64_t UTF16 = 4294967296; // (int64_t)::java::lang::String::UTF16 << 32
	static ::jdk::internal::misc::Unsafe* UNSAFE;
};

	} // lang
} // java

#pragma pop_macro("LATIN1")
#pragma pop_macro("UNSAFE")
#pragma pop_macro("UTF16")

#endif // _java_lang_StringConcatHelper_h_