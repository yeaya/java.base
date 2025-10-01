#ifndef _sun_text_ComposedCharIter_h_
#define _sun_text_ComposedCharIter_h_
//$ class sun.text.ComposedCharIter
//$ extends java.lang.Object

#include <java/lang/Array.h>
#include <jdk/internal/icu/text/NormalizerBase.h>

#pragma push_macro("DONE")
#undef DONE

namespace sun {
	namespace text {

class $import ComposedCharIter : public ::java::lang::Object {
	$class(ComposedCharIter, 0, ::java::lang::Object)
public:
	ComposedCharIter();
	void init$();
	$String* decomposition();
	int32_t next();
	static const int32_t DONE = ::jdk::internal::icu::text::NormalizerBase::DONE;
	static $ints* chars;
	static $StringArray* decomps;
	static int32_t decompNum;
	int32_t curChar = 0;
};

	} // text
} // sun

#pragma pop_macro("DONE")

#endif // _sun_text_ComposedCharIter_h_