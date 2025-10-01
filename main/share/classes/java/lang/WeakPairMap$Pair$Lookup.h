#ifndef _java_lang_WeakPairMap$Pair$Lookup_h_
#define _java_lang_WeakPairMap$Pair$Lookup_h_
//$ class java.lang.WeakPairMap$Pair$Lookup
//$ extends java.lang.WeakPairMap$Pair

#include <java/lang/WeakPairMap$Pair.h>

namespace java {
	namespace lang {

class WeakPairMap$Pair$Lookup : public ::java::lang::WeakPairMap$Pair {
	$class(WeakPairMap$Pair$Lookup, $NO_CLASS_INIT, ::java::lang::WeakPairMap$Pair)
public:
	WeakPairMap$Pair$Lookup();
	void init$(Object$* k1, Object$* k2);
	virtual bool equals(Object$* obj) override;
	virtual $Object* first() override;
	virtual int32_t hashCode() override;
	virtual $Object* second() override;
	$Object* k1 = nullptr;
	$Object* k2 = nullptr;
};

	} // lang
} // java

#endif // _java_lang_WeakPairMap$Pair$Lookup_h_