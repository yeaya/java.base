#ifndef _sun_nio_cs_CharsetMapping_h_
#define _sun_nio_cs_CharsetMapping_h_
//$ class sun.nio.cs.CharsetMapping
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("MAP_COMPOSITE")
#undef MAP_COMPOSITE
#pragma push_macro("MAP_DOUBLEBYTE1")
#undef MAP_DOUBLEBYTE1
#pragma push_macro("MAP_DOUBLEBYTE2")
#undef MAP_DOUBLEBYTE2
#pragma push_macro("MAP_INDEXC2B")
#undef MAP_INDEXC2B
#pragma push_macro("MAP_SINGLEBYTE")
#undef MAP_SINGLEBYTE
#pragma push_macro("MAP_SUPPLEMENT")
#undef MAP_SUPPLEMENT
#pragma push_macro("MAP_SUPPLEMENT_C2B")
#undef MAP_SUPPLEMENT_C2B
#pragma push_macro("N")
#undef N
#pragma push_macro("UNMAPPABLE_DECODING")
#undef UNMAPPABLE_DECODING
#pragma push_macro("UNMAPPABLE_ENCODING")
#undef UNMAPPABLE_ENCODING

namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace util {
		class Comparator;
	}
}
namespace sun {
	namespace nio {
		namespace cs {
			class CharsetMapping$Entry;
		}
	}
}

namespace sun {
	namespace nio {
		namespace cs {

class $import CharsetMapping : public ::java::lang::Object {
	$class(CharsetMapping, 0, ::java::lang::Object)
public:
	CharsetMapping();
	void init$();
	virtual $chars* decodeComposite(::sun::nio::cs::CharsetMapping$Entry* comp, $chars* cc);
	virtual char16_t decodeDouble(int32_t b1, int32_t b2);
	virtual char16_t decodeSingle(int32_t b);
	virtual $chars* decodeSurrogate(int32_t db, $chars* cc);
	virtual int32_t encodeChar(char16_t ch);
	virtual int32_t encodeComposite(::sun::nio::cs::CharsetMapping$Entry* comp);
	virtual int32_t encodeSurrogate(char16_t hi, char16_t lo);
	static int32_t findBytes($Array<::sun::nio::cs::CharsetMapping$Entry>* a, ::sun::nio::cs::CharsetMapping$Entry* k);
	static int32_t findCP($Array<::sun::nio::cs::CharsetMapping$Entry>* a, ::sun::nio::cs::CharsetMapping$Entry* k);
	static int32_t findComp($Array<::sun::nio::cs::CharsetMapping$Entry>* a, ::sun::nio::cs::CharsetMapping$Entry* k);
	static ::sun::nio::cs::CharsetMapping* get(::java::io::InputStream* is);
	virtual bool isCompositeBase(::sun::nio::cs::CharsetMapping$Entry* comp);
	virtual ::sun::nio::cs::CharsetMapping* load(::java::io::InputStream* in);
	virtual void readCOMPOSITE();
	$chars* readCharArray();
	virtual $chars* readDB(int32_t b1Min, int32_t b2Min, int32_t segSize);
	virtual void readDOUBLEBYTE1();
	virtual void readDOUBLEBYTE2();
	virtual void readINDEXC2B();
	static bool readNBytes(::java::io::InputStream* in, $bytes* bb, int32_t N);
	virtual void readSINGLEBYTE();
	static const char16_t UNMAPPABLE_DECODING = ((char16_t)65533);
	static const int32_t UNMAPPABLE_ENCODING = 0x0000FFFD;
	$chars* b2cSB = nullptr;
	$chars* b2cDB1 = nullptr;
	$chars* b2cDB2 = nullptr;
	int32_t b2Min = 0;
	int32_t b2Max = 0;
	int32_t b1MinDB1 = 0;
	int32_t b1MaxDB1 = 0;
	int32_t b1MinDB2 = 0;
	int32_t b1MaxDB2 = 0;
	int32_t dbSegSize = 0;
	$chars* c2b = nullptr;
	$chars* c2bIndex = nullptr;
	$chars* b2cSupp = nullptr;
	$chars* c2bSupp = nullptr;
	$Array<::sun::nio::cs::CharsetMapping$Entry>* b2cComp = nullptr;
	$Array<::sun::nio::cs::CharsetMapping$Entry>* c2bComp = nullptr;
	static ::java::util::Comparator* comparatorBytes;
	static ::java::util::Comparator* comparatorCP;
	static ::java::util::Comparator* comparatorComp;
	static const int32_t MAP_SINGLEBYTE = 1;
	static const int32_t MAP_DOUBLEBYTE1 = 2;
	static const int32_t MAP_DOUBLEBYTE2 = 3;
	static const int32_t MAP_SUPPLEMENT = 5;
	static const int32_t MAP_SUPPLEMENT_C2B = 6;
	static const int32_t MAP_COMPOSITE = 7;
	static const int32_t MAP_INDEXC2B = 8;
	int32_t off = 0;
	$bytes* bb = nullptr;
};

		} // cs
	} // nio
} // sun

#pragma pop_macro("MAP_COMPOSITE")
#pragma pop_macro("MAP_DOUBLEBYTE1")
#pragma pop_macro("MAP_DOUBLEBYTE2")
#pragma pop_macro("MAP_INDEXC2B")
#pragma pop_macro("MAP_SINGLEBYTE")
#pragma pop_macro("MAP_SUPPLEMENT")
#pragma pop_macro("MAP_SUPPLEMENT_C2B")
#pragma pop_macro("N")
#pragma pop_macro("UNMAPPABLE_DECODING")
#pragma pop_macro("UNMAPPABLE_ENCODING")

#endif // _sun_nio_cs_CharsetMapping_h_