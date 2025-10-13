#ifndef _java_text_Collator_h_
#define _java_text_Collator_h_
//$ class java.text.Collator
//$ extends java.util.Comparator
//$ implements java.lang.Cloneable

#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>
#include <java/util/Comparator.h>

#pragma push_macro("CANONICAL_DECOMPOSITION")
#undef CANONICAL_DECOMPOSITION
#pragma push_macro("EQUAL")
#undef EQUAL
#pragma push_macro("FULL_DECOMPOSITION")
#undef FULL_DECOMPOSITION
#pragma push_macro("GREATER")
#undef GREATER
#pragma push_macro("IDENTICAL")
#undef IDENTICAL
#pragma push_macro("LESS")
#undef LESS
#pragma push_macro("NO_DECOMPOSITION")
#undef NO_DECOMPOSITION
#pragma push_macro("PRIMARY")
#undef PRIMARY
#pragma push_macro("SECONDARY")
#undef SECONDARY
#pragma push_macro("TERTIARY")
#undef TERTIARY

namespace java {
	namespace text {
		class CollationKey;
	}
}
namespace java {
	namespace util {
		class Locale;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentMap;
		}
	}
}

namespace java {
	namespace text {

class $export Collator : public ::java::util::Comparator, public ::java::lang::Cloneable {
	$class(Collator, 0, ::java::util::Comparator, ::java::lang::Cloneable)
public:
	Collator();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual $Object* clone() override;
	virtual int32_t compare($String* source, $String* target) {return 0;}
	virtual int32_t compare(Object$* o1, Object$* o2) override;
	virtual bool equals($String* source, $String* target);
	virtual bool equals(Object$* that) override;
	static $Array<::java::util::Locale>* getAvailableLocales();
	virtual ::java::text::CollationKey* getCollationKey($String* source) {return nullptr;}
	virtual int32_t getDecomposition();
	static ::java::text::Collator* getInstance();
	static ::java::text::Collator* getInstance(::java::util::Locale* desiredLocale);
	virtual int32_t getStrength();
	virtual void setDecomposition(int32_t decompositionMode);
	virtual void setStrength(int32_t newStrength);
	virtual $String* toString() override;
	static const int32_t PRIMARY = 0;
	static const int32_t SECONDARY = 1;
	static const int32_t TERTIARY = 2;
	static const int32_t IDENTICAL = 3;
	static const int32_t NO_DECOMPOSITION = 0;
	static const int32_t CANONICAL_DECOMPOSITION = 1;
	static const int32_t FULL_DECOMPOSITION = 2;
	int32_t strength = 0;
	int32_t decmp = 0;
	static ::java::util::concurrent::ConcurrentMap* cache;
	static const int32_t LESS = (-1);
	static const int32_t EQUAL = 0;
	static const int32_t GREATER = 1;
};

	} // text
} // java

#pragma pop_macro("CANONICAL_DECOMPOSITION")
#pragma pop_macro("EQUAL")
#pragma pop_macro("FULL_DECOMPOSITION")
#pragma pop_macro("GREATER")
#pragma pop_macro("IDENTICAL")
#pragma pop_macro("LESS")
#pragma pop_macro("NO_DECOMPOSITION")
#pragma pop_macro("PRIMARY")
#pragma pop_macro("SECONDARY")
#pragma pop_macro("TERTIARY")

#endif // _java_text_Collator_h_