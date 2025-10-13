#ifndef _jdk_internal_javac_PreviewFeature$Feature_h_
#define _jdk_internal_javac_PreviewFeature$Feature_h_
//$ class jdk.internal.javac.PreviewFeature$Feature
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("SEALED_CLASSES")
#undef SEALED_CLASSES
#pragma push_macro("SWITCH_PATTERN_MATCHING")
#undef SWITCH_PATTERN_MATCHING
#pragma push_macro("TEST")
#undef TEST

namespace jdk {
	namespace internal {
		namespace javac {

class $export PreviewFeature$Feature : public ::java::lang::Enum {
	$class(PreviewFeature$Feature, 0, ::java::lang::Enum)
public:
	PreviewFeature$Feature();
	static $Array<::jdk::internal::javac::PreviewFeature$Feature>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::jdk::internal::javac::PreviewFeature$Feature* valueOf($String* name);
	static $Array<::jdk::internal::javac::PreviewFeature$Feature>* values();
	static ::jdk::internal::javac::PreviewFeature$Feature* SEALED_CLASSES;
	static ::jdk::internal::javac::PreviewFeature$Feature* SWITCH_PATTERN_MATCHING;
	static ::jdk::internal::javac::PreviewFeature$Feature* TEST;
	static $Array<::jdk::internal::javac::PreviewFeature$Feature>* $VALUES;
};

		} // javac
	} // internal
} // jdk

#pragma pop_macro("SEALED_CLASSES")
#pragma pop_macro("SWITCH_PATTERN_MATCHING")
#pragma pop_macro("TEST")

#endif // _jdk_internal_javac_PreviewFeature$Feature_h_