#ifndef _jdk_internal_icu_text_BidiLine_h_
#define _jdk_internal_icu_text_BidiLine_h_
//$ class jdk.internal.icu.text.BidiLine
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace text {
		class Bidi;
	}
}
namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {
				class BidiBase;
				class BidiRun;
			}
		}
	}
}

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

class $import BidiLine : public ::java::lang::Object {
	$class(BidiLine, $NO_CLASS_INIT, ::java::lang::Object)
public:
	BidiLine();
	void init$();
	static int8_t getLevelAt(::jdk::internal::icu::text::BidiBase* bidiBase, int32_t charIndex);
	static $bytes* getLevels(::jdk::internal::icu::text::BidiBase* bidiBase);
	static int32_t getRunFromLogicalIndex(::jdk::internal::icu::text::BidiBase* bidiBase, int32_t logicalIndex);
	static void getRuns(::jdk::internal::icu::text::BidiBase* bidiBase);
	static void getSingleRun(::jdk::internal::icu::text::BidiBase* bidiBase, int8_t level);
	static $ints* getVisualMap(::jdk::internal::icu::text::BidiBase* bidiBase);
	static ::jdk::internal::icu::text::BidiRun* getVisualRun(::jdk::internal::icu::text::BidiBase* bidiBase, int32_t runIndex);
	static $ints* prepareReorder($bytes* levels, $bytes* pMinLevel, $bytes* pMaxLevel);
	static void reorderLine(::jdk::internal::icu::text::BidiBase* bidiBase, int8_t minLevel, int8_t maxLevel);
	static $ints* reorderVisual($bytes* levels);
	static ::java::text::Bidi* setLine(::jdk::internal::icu::text::BidiBase* paraBidi, ::java::text::Bidi* newBidi, ::jdk::internal::icu::text::BidiBase* lineBidi, int32_t start, int32_t limit);
	static void setTrailingWSStart(::jdk::internal::icu::text::BidiBase* bidiBase);
};

			} // text
		} // icu
	} // internal
} // jdk

#endif // _jdk_internal_icu_text_BidiLine_h_