#ifndef _sun_text_IntHashtable_h_
#define _sun_text_IntHashtable_h_
//$ class sun.text.IntHashtable
//$ extends java.lang.Object

#include <java/lang/Array.h>
#include <java/lang/Integer.h>

#pragma push_macro("LOW_WATER_FACTOR")
#undef LOW_WATER_FACTOR
#pragma push_macro("HIGH_WATER_FACTOR")
#undef HIGH_WATER_FACTOR
#pragma push_macro("MIN_VALUE")
#undef MIN_VALUE
#pragma push_macro("DELETED")
#undef DELETED
#pragma push_macro("MAX_UNUSED")
#undef MAX_UNUSED
#pragma push_macro("EMPTY")
#undef EMPTY
#pragma push_macro("PRIMES")
#undef PRIMES

namespace sun {
	namespace text {

class $import IntHashtable : public ::java::lang::Object {
	$class(IntHashtable, 0, ::java::lang::Object)
public:
	IntHashtable();
	void init$();
	void init$(int32_t initialSize);
	virtual $Object* clone() override;
	virtual bool equals(Object$* that) override;
	int32_t find(int32_t key);
	int32_t get(int32_t key);
	int32_t getDefaultValue();
	virtual int32_t hashCode() override;
	void initialize(int32_t primeIndex);
	bool isEmpty();
	static int32_t leastGreaterPrimeIndex(int32_t source);
	void put(int32_t key, int32_t value);
	void putInternal(int32_t key, int32_t value);
	void rehash();
	void remove(int32_t key);
	void setDefaultValue(int32_t newValue);
	int32_t size();
	int32_t defaultValue = 0;
	int32_t primeIndex = 0;
	static float HIGH_WATER_FACTOR;
	int32_t highWaterMark = 0;
	static float LOW_WATER_FACTOR;
	int32_t lowWaterMark = 0;
	int32_t count = 0;
	$ints* values = nullptr;
	$ints* keyList = nullptr;
	static const int32_t EMPTY = ::java::lang::Integer::MIN_VALUE;
	static const int32_t DELETED = 0x80000001; // EMPTY + 1
	static const int32_t MAX_UNUSED = DELETED;
	static $ints* PRIMES;
};

	} // text
} // sun

#pragma pop_macro("LOW_WATER_FACTOR")
#pragma pop_macro("HIGH_WATER_FACTOR")
#pragma pop_macro("MIN_VALUE")
#pragma pop_macro("DELETED")
#pragma pop_macro("MAX_UNUSED")
#pragma pop_macro("EMPTY")
#pragma pop_macro("PRIMES")

#endif // _sun_text_IntHashtable_h_