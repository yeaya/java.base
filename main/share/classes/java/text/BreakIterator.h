#ifndef _java_text_BreakIterator_h_
#define _java_text_BreakIterator_h_
//$ class java.text.BreakIterator
//$ extends java.lang.Cloneable

#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>

#pragma push_macro("CHARACTER_INDEX")
#undef CHARACTER_INDEX
#pragma push_macro("DONE")
#undef DONE
#pragma push_macro("LINE_INDEX")
#undef LINE_INDEX
#pragma push_macro("WORD_INDEX")
#undef WORD_INDEX
#pragma push_macro("SENTENCE_INDEX")
#undef SENTENCE_INDEX

namespace java {
	namespace lang {
		namespace ref {
			class SoftReference;
		}
	}
}
namespace java {
	namespace text {
		class CharacterIterator;
	}
}
namespace java {
	namespace util {
		class Locale;
	}
}
namespace sun {
	namespace util {
		namespace locale {
			namespace provider {
				class LocaleProviderAdapter;
			}
		}
	}
}

namespace java {
	namespace text {

class $export BreakIterator : public ::java::lang::Cloneable {
	$class(BreakIterator, 0, ::java::lang::Cloneable)
public:
	BreakIterator();
	void init$();
	virtual $Object* clone() override;
	static ::java::text::BreakIterator* createBreakInstance(::java::util::Locale* locale, int32_t type);
	static ::java::text::BreakIterator* createBreakInstance(::sun::util::locale::provider::LocaleProviderAdapter* adapter, ::java::util::Locale* locale, int32_t type);
	virtual int32_t current() {return 0;}
	virtual int32_t first() {return 0;}
	virtual int32_t following(int32_t offset) {return 0;}
	static $Array<::java::util::Locale>* getAvailableLocales();
	static ::java::text::BreakIterator* getBreakInstance(::java::util::Locale* locale, int32_t type);
	static ::java::text::BreakIterator* getCharacterInstance();
	static ::java::text::BreakIterator* getCharacterInstance(::java::util::Locale* locale);
	static ::java::text::BreakIterator* getLineInstance();
	static ::java::text::BreakIterator* getLineInstance(::java::util::Locale* locale);
	static ::java::text::BreakIterator* getSentenceInstance();
	static ::java::text::BreakIterator* getSentenceInstance(::java::util::Locale* locale);
	virtual ::java::text::CharacterIterator* getText() {return nullptr;}
	static ::java::text::BreakIterator* getWordInstance();
	static ::java::text::BreakIterator* getWordInstance(::java::util::Locale* locale);
	virtual bool isBoundary(int32_t offset);
	virtual int32_t last() {return 0;}
	virtual int32_t next(int32_t n) {return 0;}
	virtual int32_t next() {return 0;}
	virtual int32_t preceding(int32_t offset);
	virtual int32_t previous() {return 0;}
	virtual void setText($String* newText);
	virtual void setText(::java::text::CharacterIterator* newText) {}
	static const int32_t DONE = (-1);
	static const int32_t CHARACTER_INDEX = 0;
	static const int32_t WORD_INDEX = 1;
	static const int32_t LINE_INDEX = 2;
	static const int32_t SENTENCE_INDEX = 3;
	static $Array<::java::lang::ref::SoftReference>* iterCache;
};

	} // text
} // java

#pragma pop_macro("CHARACTER_INDEX")
#pragma pop_macro("DONE")
#pragma pop_macro("LINE_INDEX")
#pragma pop_macro("WORD_INDEX")
#pragma pop_macro("SENTENCE_INDEX")

#endif // _java_text_BreakIterator_h_