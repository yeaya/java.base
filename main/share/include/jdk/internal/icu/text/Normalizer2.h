#ifndef _jdk_internal_icu_text_Normalizer2_h_
#define _jdk_internal_icu_text_Normalizer2_h_
//$ class jdk.internal.icu.text.Normalizer2
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class Appendable;
		class CharSequence;
		class StringBuilder;
	}
}

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

class $import Normalizer2 : public ::java::lang::Object {
	$class(Normalizer2, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Normalizer2();
	void init$();
	virtual ::java::lang::StringBuilder* append(::java::lang::StringBuilder* first, ::java::lang::CharSequence* second) {return nullptr;}
	virtual int32_t getCombiningClass(int32_t c);
	virtual $String* getDecomposition(int32_t c) {return nullptr;}
	static ::jdk::internal::icu::text::Normalizer2* getNFCInstance();
	static ::jdk::internal::icu::text::Normalizer2* getNFDInstance();
	static ::jdk::internal::icu::text::Normalizer2* getNFKCInstance();
	static ::jdk::internal::icu::text::Normalizer2* getNFKDInstance();
	virtual bool hasBoundaryBefore(int32_t c) {return false;}
	virtual bool isNormalized(::java::lang::CharSequence* s) {return false;}
	virtual $String* normalize(::java::lang::CharSequence* src);
	virtual ::java::lang::StringBuilder* normalize(::java::lang::CharSequence* src, ::java::lang::StringBuilder* dest) {return nullptr;}
	virtual ::java::lang::Appendable* normalize(::java::lang::CharSequence* src, ::java::lang::Appendable* dest) {return nullptr;}
	virtual ::java::lang::StringBuilder* normalizeSecondAndAppend(::java::lang::StringBuilder* first, ::java::lang::CharSequence* second) {return nullptr;}
	virtual int32_t spanQuickCheckYes(::java::lang::CharSequence* s) {return 0;}
};

			} // text
		} // icu
	} // internal
} // jdk

#endif // _jdk_internal_icu_text_Normalizer2_h_