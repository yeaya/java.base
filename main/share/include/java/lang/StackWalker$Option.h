#ifndef _java_lang_StackWalker$Option_h_
#define _java_lang_StackWalker$Option_h_
//$ class java.lang.StackWalker$Option
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("SHOW_HIDDEN_FRAMES")
#undef SHOW_HIDDEN_FRAMES
#pragma push_macro("SHOW_REFLECT_FRAMES")
#undef SHOW_REFLECT_FRAMES
#pragma push_macro("RETAIN_CLASS_REFERENCE")
#undef RETAIN_CLASS_REFERENCE

namespace java {
	namespace lang {

class $import StackWalker$Option : public ::java::lang::Enum {
	$class(StackWalker$Option, 0, ::java::lang::Enum)
public:
	StackWalker$Option();
	static $Array<::java::lang::StackWalker$Option>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::java::lang::StackWalker$Option* valueOf($String* name);
	static $Array<::java::lang::StackWalker$Option>* values();
	static ::java::lang::StackWalker$Option* RETAIN_CLASS_REFERENCE;
	static ::java::lang::StackWalker$Option* SHOW_REFLECT_FRAMES;
	static ::java::lang::StackWalker$Option* SHOW_HIDDEN_FRAMES;
	static $Array<::java::lang::StackWalker$Option>* $VALUES;
};

	} // lang
} // java

#pragma pop_macro("SHOW_HIDDEN_FRAMES")
#pragma pop_macro("SHOW_REFLECT_FRAMES")
#pragma pop_macro("RETAIN_CLASS_REFERENCE")

#endif // _java_lang_StackWalker$Option_h_