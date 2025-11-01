#ifndef _java_util_BitSet_h_
#define _java_util_BitSet_h_
//$ class java.util.BitSet
//$ extends java.lang.Cloneable
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>

#pragma push_macro("ADDRESS_BITS_PER_WORD")
#undef ADDRESS_BITS_PER_WORD
#pragma push_macro("BITS_PER_WORD")
#undef BITS_PER_WORD
#pragma push_macro("BIT_INDEX_MASK")
#undef BIT_INDEX_MASK
#pragma push_macro("WORD_MASK")
#undef WORD_MASK

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
		class ObjectStreamField;
	}
}
namespace java {
	namespace nio {
		class ByteBuffer;
		class LongBuffer;
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
	namespace util {

class $export BitSet : public ::java::lang::Cloneable, public ::java::io::Serializable {
	$class(BitSet, 0, ::java::lang::Cloneable, ::java::io::Serializable)
public:
	BitSet();
	virtual void finalize() override;
	void init$();
	void init$(int32_t nbits);
	void init$($longs* words);
	virtual void and$(::java::util::BitSet* set);
	virtual void andNot(::java::util::BitSet* set);
	virtual int32_t cardinality();
	void checkInvariants();
	static void checkRange(int32_t fromIndex, int32_t toIndex);
	virtual void clear(int32_t bitIndex);
	virtual void clear(int32_t fromIndex, int32_t toIndex);
	virtual void clear();
	virtual $Object* clone() override;
	void ensureCapacity(int32_t wordsRequired);
	virtual bool equals(Object$* obj) override;
	void expandTo(int32_t wordIndex);
	virtual void flip(int32_t bitIndex);
	virtual void flip(int32_t fromIndex, int32_t toIndex);
	virtual bool get(int32_t bitIndex);
	virtual ::java::util::BitSet* get(int32_t fromIndex, int32_t toIndex);
	virtual int32_t hashCode() override;
	void initWords(int32_t nbits);
	virtual bool intersects(::java::util::BitSet* set);
	virtual bool isEmpty();
	virtual int32_t length();
	virtual int32_t nextClearBit(int32_t fromIndex);
	virtual int32_t nextSetBit(int32_t fromIndex);
	int32_t nextSetBit(int32_t fromIndex, int32_t toWordIndex);
	virtual void or$(::java::util::BitSet* set);
	virtual int32_t previousClearBit(int32_t fromIndex);
	virtual int32_t previousSetBit(int32_t fromIndex);
	void readObject(::java::io::ObjectInputStream* s);
	void recalculateWordsInUse();
	virtual void set(int32_t bitIndex);
	virtual void set(int32_t bitIndex, bool value);
	virtual void set(int32_t fromIndex, int32_t toIndex);
	virtual void set(int32_t fromIndex, int32_t toIndex, bool value);
	virtual int32_t size();
	virtual ::java::util::stream::IntStream* stream();
	virtual $bytes* toByteArray();
	virtual $longs* toLongArray();
	virtual $String* toString() override;
	void trimToSize();
	static ::java::util::BitSet* valueOf($longs* longs);
	static ::java::util::BitSet* valueOf(::java::nio::LongBuffer* lb);
	static ::java::util::BitSet* valueOf($bytes* bytes);
	static ::java::util::BitSet* valueOf(::java::nio::ByteBuffer* bb);
	static int32_t wordIndex(int32_t bitIndex);
	void writeObject(::java::io::ObjectOutputStream* s);
	virtual void xor$(::java::util::BitSet* set);
	static bool $assertionsDisabled;
	static const int32_t ADDRESS_BITS_PER_WORD = 6;
	static const int32_t BITS_PER_WORD = 64; // 1 << ADDRESS_BITS_PER_WORD
	static const int32_t BIT_INDEX_MASK = 63; // BITS_PER_WORD - 1
	static const int64_t WORD_MASK = (int64_t)-1;
	static $Array<::java::io::ObjectStreamField>* serialPersistentFields;
	$longs* words = nullptr;
	int32_t wordsInUse = 0;
	bool sizeIsSticky = false;
	static const int64_t serialVersionUID = (int64_t)0x6EFD887E3934AB21;
};

	} // util
} // java

#pragma pop_macro("ADDRESS_BITS_PER_WORD")
#pragma pop_macro("BITS_PER_WORD")
#pragma pop_macro("BIT_INDEX_MASK")
#pragma pop_macro("WORD_MASK")

#endif // _java_util_BitSet_h_