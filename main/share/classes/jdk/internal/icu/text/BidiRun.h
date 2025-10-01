#ifndef _jdk_internal_icu_text_BidiRun_h_
#define _jdk_internal_icu_text_BidiRun_h_
//$ class jdk.internal.icu.text.BidiRun
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

class $export BidiRun : public ::java::lang::Object {
	$class(BidiRun, $NO_CLASS_INIT, ::java::lang::Object)
public:
	BidiRun();
	void init$();
	void init$(int32_t start, int32_t limit, int8_t embeddingLevel);
	virtual void copyFrom(::jdk::internal::icu::text::BidiRun* run);
	virtual int8_t getEmbeddingLevel();
	virtual bool isEvenRun();
	int32_t start = 0;
	int32_t limit = 0;
	int32_t insertRemove = 0;
	int8_t level = 0;
};

			} // text
		} // icu
	} // internal
} // jdk

#endif // _jdk_internal_icu_text_BidiRun_h_