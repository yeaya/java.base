#ifndef _java_lang_CharSequence$1CodePointIterator_h_
#define _java_lang_CharSequence$1CodePointIterator_h_
//$ class java.lang.CharSequence$1CodePointIterator
//$ extends java.util.PrimitiveIterator$OfInt

#include <java/util/PrimitiveIterator$OfInt.h>

namespace java {
	namespace lang {
		class CharSequence;
	}
}
namespace java {
	namespace util {
		namespace function {
			class IntConsumer;
		}
	}
}

namespace java {
	namespace lang {

class CharSequence$1CodePointIterator : public ::java::util::PrimitiveIterator$OfInt {
	$class(CharSequence$1CodePointIterator, $NO_CLASS_INIT, ::java::util::PrimitiveIterator$OfInt)
public:
	CharSequence$1CodePointIterator();
	using ::java::util::PrimitiveIterator$OfInt::forEachRemaining;
	void init$(::java::lang::CharSequence* this$0);
	virtual void forEachRemaining(::java::util::function::IntConsumer* block) override;
	virtual void forEachRemaining(Object$* block) override;
	virtual bool hasNext() override;
	virtual int32_t nextInt() override;
	::java::lang::CharSequence* this$0 = nullptr;
	int32_t cur = 0;
};

	} // lang
} // java

#endif // _java_lang_CharSequence$1CodePointIterator_h_