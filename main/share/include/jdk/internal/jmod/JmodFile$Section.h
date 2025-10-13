#ifndef _jdk_internal_jmod_JmodFile$Section_h_
#define _jdk_internal_jmod_JmodFile$Section_h_
//$ class jdk.internal.jmod.JmodFile$Section
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("CLASSES")
#undef CLASSES
#pragma push_macro("CONFIG")
#undef CONFIG
#pragma push_macro("HEADER_FILES")
#undef HEADER_FILES
#pragma push_macro("LEGAL_NOTICES")
#undef LEGAL_NOTICES
#pragma push_macro("MAN_PAGES")
#undef MAN_PAGES
#pragma push_macro("NATIVE_CMDS")
#undef NATIVE_CMDS
#pragma push_macro("NATIVE_LIBS")
#undef NATIVE_LIBS

namespace jdk {
	namespace internal {
		namespace jmod {

class $import JmodFile$Section : public ::java::lang::Enum {
	$class(JmodFile$Section, 0, ::java::lang::Enum)
public:
	JmodFile$Section();
	static $Array<::jdk::internal::jmod::JmodFile$Section>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* jmodDir);
	virtual $String* jmodDir();
	static ::jdk::internal::jmod::JmodFile$Section* valueOf($String* name);
	static $Array<::jdk::internal::jmod::JmodFile$Section>* values();
	static ::jdk::internal::jmod::JmodFile$Section* CLASSES;
	static ::jdk::internal::jmod::JmodFile$Section* CONFIG;
	static ::jdk::internal::jmod::JmodFile$Section* HEADER_FILES;
	static ::jdk::internal::jmod::JmodFile$Section* LEGAL_NOTICES;
	static ::jdk::internal::jmod::JmodFile$Section* MAN_PAGES;
	static ::jdk::internal::jmod::JmodFile$Section* NATIVE_LIBS;
	static ::jdk::internal::jmod::JmodFile$Section* NATIVE_CMDS;
	static $Array<::jdk::internal::jmod::JmodFile$Section>* $VALUES;
	$String* jmodDir$ = nullptr;
};

		} // jmod
	} // internal
} // jdk

#pragma pop_macro("CLASSES")
#pragma pop_macro("CONFIG")
#pragma pop_macro("HEADER_FILES")
#pragma pop_macro("LEGAL_NOTICES")
#pragma pop_macro("MAN_PAGES")
#pragma pop_macro("NATIVE_CMDS")
#pragma pop_macro("NATIVE_LIBS")

#endif // _jdk_internal_jmod_JmodFile$Section_h_