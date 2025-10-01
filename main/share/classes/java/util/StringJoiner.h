#ifndef _java_util_StringJoiner_h_
#define _java_util_StringJoiner_h_
//$ class java.util.StringJoiner
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("JLA")
#undef JLA
#pragma push_macro("EMPTY_STRING_ARRAY")
#undef EMPTY_STRING_ARRAY

namespace java {
	namespace lang {
		class CharSequence;
	}
}
namespace jdk {
	namespace internal {
		namespace access {
			class JavaLangAccess;
		}
	}
}

namespace java {
	namespace util {

class $export StringJoiner : public ::java::lang::Object {
	$class(StringJoiner, 0, ::java::lang::Object)
public:
	StringJoiner();
	void init$(::java::lang::CharSequence* delimiter);
	void init$(::java::lang::CharSequence* delimiter, ::java::lang::CharSequence* prefix, ::java::lang::CharSequence* suffix);
	::java::util::StringJoiner* add(::java::lang::CharSequence* newElement);
	int32_t checkAddLength(int32_t oldLen, int32_t inc);
	void compactElts();
	int32_t length();
	::java::util::StringJoiner* merge(::java::util::StringJoiner* other);
	::java::util::StringJoiner* setEmptyValue(::java::lang::CharSequence* emptyValue);
	virtual $String* toString() override;
	static $StringArray* EMPTY_STRING_ARRAY;
	$String* prefix = nullptr;
	$String* delimiter = nullptr;
	$String* suffix = nullptr;
	$StringArray* elts = nullptr;
	int32_t size = 0;
	int32_t len = 0;
	$String* emptyValue = nullptr;
	static ::jdk::internal::access::JavaLangAccess* JLA;
};

	} // util
} // java

#pragma pop_macro("JLA")
#pragma pop_macro("EMPTY_STRING_ARRAY")

#endif // _java_util_StringJoiner_h_