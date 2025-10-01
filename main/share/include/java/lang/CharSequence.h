#ifndef _java_lang_CharSequence_h_
#define _java_lang_CharSequence_h_
//$ interface java.lang.CharSequence
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Spliterator$OfInt;
	}
}
namespace java {
	namespace util {
		namespace stream {
			class IntStream;
		}
	}
}

namespace java {
	namespace lang {

class $import CharSequence : public ::java::lang::Object {
	$interface(CharSequence, $PRELOAD | $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual char16_t charAt(int32_t index) {return 0;}
	virtual ::java::util::stream::IntStream* chars();
	virtual ::java::util::stream::IntStream* codePoints();
	static int32_t compare(::java::lang::CharSequence* cs1, ::java::lang::CharSequence* cs2);
	virtual bool isEmpty();
	::java::util::Spliterator$OfInt* lambda$chars$0();
	::java::util::Spliterator$OfInt* lambda$codePoints$1();
	virtual int32_t length() {return 0;}
	virtual ::java::lang::CharSequence* subSequence(int32_t start, int32_t end) {return nullptr;}
	virtual $String* toString() override;
};

	} // lang
} // java

#endif // _java_lang_CharSequence_h_