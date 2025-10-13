#ifndef _java_text_Bidi_h_
#define _java_text_Bidi_h_
//$ class java.text.Bidi
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("DIRECTION_DEFAULT_LEFT_TO_RIGHT")
#undef DIRECTION_DEFAULT_LEFT_TO_RIGHT
#pragma push_macro("DIRECTION_DEFAULT_RIGHT_TO_LEFT")
#undef DIRECTION_DEFAULT_RIGHT_TO_LEFT
#pragma push_macro("DIRECTION_LEFT_TO_RIGHT")
#undef DIRECTION_LEFT_TO_RIGHT
#pragma push_macro("DIRECTION_RIGHT_TO_LEFT")
#undef DIRECTION_RIGHT_TO_LEFT

namespace java {
	namespace text {
		class AttributedCharacterIterator;
	}
}
namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {
				class BidiBase;
			}
		}
	}
}

namespace java {
	namespace text {

class $export Bidi : public ::java::lang::Object {
	$class(Bidi, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Bidi();
	void init$($String* paragraph, int32_t flags);
	void init$(::java::text::AttributedCharacterIterator* paragraph);
	void init$($chars* text, int32_t textStart, $bytes* embeddings, int32_t embStart, int32_t paragraphLength, int32_t flags);
	bool baseIsLeftToRight();
	::java::text::Bidi* createLineBidi(int32_t lineStart, int32_t lineLimit);
	int32_t getBaseLevel();
	int32_t getLength();
	int32_t getLevelAt(int32_t offset);
	int32_t getRunCount();
	int32_t getRunLevel(int32_t run);
	int32_t getRunLimit(int32_t run);
	int32_t getRunStart(int32_t run);
	bool isLeftToRight();
	bool isMixed();
	bool isRightToLeft();
	static void reorderVisually($bytes* levels, int32_t levelStart, $ObjectArray* objects, int32_t objectStart, int32_t count);
	static bool requiresBidi($chars* text, int32_t start, int32_t limit);
	virtual $String* toString() override;
	static const int32_t DIRECTION_LEFT_TO_RIGHT = 0;
	static const int32_t DIRECTION_RIGHT_TO_LEFT = 1;
	static const int32_t DIRECTION_DEFAULT_LEFT_TO_RIGHT = (-2);
	static const int32_t DIRECTION_DEFAULT_RIGHT_TO_LEFT = (-1);
	::jdk::internal::icu::text::BidiBase* bidiBase = nullptr;
};

	} // text
} // java

#pragma pop_macro("DIRECTION_DEFAULT_LEFT_TO_RIGHT")
#pragma pop_macro("DIRECTION_DEFAULT_RIGHT_TO_LEFT")
#pragma pop_macro("DIRECTION_LEFT_TO_RIGHT")
#pragma pop_macro("DIRECTION_RIGHT_TO_LEFT")

#endif // _java_text_Bidi_h_