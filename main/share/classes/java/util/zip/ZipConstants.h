#ifndef _java_util_zip_ZipConstants_h_
#define _java_util_zip_ZipConstants_h_
//$ interface java.util.zip.ZipConstants
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("CENATT")
#undef CENATT
#pragma push_macro("CENATX")
#undef CENATX
#pragma push_macro("CENCOM")
#undef CENCOM
#pragma push_macro("CENCRC")
#undef CENCRC
#pragma push_macro("CENDSK")
#undef CENDSK
#pragma push_macro("CENEXT")
#undef CENEXT
#pragma push_macro("CENFLG")
#undef CENFLG
#pragma push_macro("CENHDR")
#undef CENHDR
#pragma push_macro("CENHOW")
#undef CENHOW
#pragma push_macro("CENLEN")
#undef CENLEN
#pragma push_macro("CENNAM")
#undef CENNAM
#pragma push_macro("CENOFF")
#undef CENOFF
#pragma push_macro("CENSIG")
#undef CENSIG
#pragma push_macro("CENSIZ")
#undef CENSIZ
#pragma push_macro("CENTIM")
#undef CENTIM
#pragma push_macro("CENVEM")
#undef CENVEM
#pragma push_macro("CENVER")
#undef CENVER
#pragma push_macro("ENDCOM")
#undef ENDCOM
#pragma push_macro("ENDHDR")
#undef ENDHDR
#pragma push_macro("ENDOFF")
#undef ENDOFF
#pragma push_macro("ENDSIG")
#undef ENDSIG
#pragma push_macro("ENDSIZ")
#undef ENDSIZ
#pragma push_macro("ENDSUB")
#undef ENDSUB
#pragma push_macro("ENDTOT")
#undef ENDTOT
#pragma push_macro("EXTCRC")
#undef EXTCRC
#pragma push_macro("EXTHDR")
#undef EXTHDR
#pragma push_macro("EXTLEN")
#undef EXTLEN
#pragma push_macro("EXTSIG")
#undef EXTSIG
#pragma push_macro("EXTSIZ")
#undef EXTSIZ
#pragma push_macro("LOCCRC")
#undef LOCCRC
#pragma push_macro("LOCEXT")
#undef LOCEXT
#pragma push_macro("LOCFLG")
#undef LOCFLG
#pragma push_macro("LOCHDR")
#undef LOCHDR
#pragma push_macro("LOCHOW")
#undef LOCHOW
#pragma push_macro("LOCLEN")
#undef LOCLEN
#pragma push_macro("LOCNAM")
#undef LOCNAM
#pragma push_macro("LOCSIG")
#undef LOCSIG
#pragma push_macro("LOCSIZ")
#undef LOCSIZ
#pragma push_macro("LOCTIM")
#undef LOCTIM
#pragma push_macro("LOCVER")
#undef LOCVER

namespace java {
	namespace util {
		namespace zip {

class $export ZipConstants : public ::java::lang::Object {
	$interface(ZipConstants, $NO_CLASS_INIT, ::java::lang::Object)
public:
	static const int64_t LOCSIG = (int64_t)67324752;
	static const int64_t EXTSIG = (int64_t)134695760;
	static const int64_t CENSIG = (int64_t)33639248;
	static const int64_t ENDSIG = (int64_t)101010256;
	static const int32_t LOCHDR = 30;
	static const int32_t EXTHDR = 16;
	static const int32_t CENHDR = 46;
	static const int32_t ENDHDR = 22;
	static const int32_t LOCVER = 4;
	static const int32_t LOCFLG = 6;
	static const int32_t LOCHOW = 8;
	static const int32_t LOCTIM = 10;
	static const int32_t LOCCRC = 14;
	static const int32_t LOCSIZ = 18;
	static const int32_t LOCLEN = 22;
	static const int32_t LOCNAM = 26;
	static const int32_t LOCEXT = 28;
	static const int32_t EXTCRC = 4;
	static const int32_t EXTSIZ = 8;
	static const int32_t EXTLEN = 12;
	static const int32_t CENVEM = 4;
	static const int32_t CENVER = 6;
	static const int32_t CENFLG = 8;
	static const int32_t CENHOW = 10;
	static const int32_t CENTIM = 12;
	static const int32_t CENCRC = 16;
	static const int32_t CENSIZ = 20;
	static const int32_t CENLEN = 24;
	static const int32_t CENNAM = 28;
	static const int32_t CENEXT = 30;
	static const int32_t CENCOM = 32;
	static const int32_t CENDSK = 34;
	static const int32_t CENATT = 36;
	static const int32_t CENATX = 38;
	static const int32_t CENOFF = 42;
	static const int32_t ENDSUB = 8;
	static const int32_t ENDTOT = 10;
	static const int32_t ENDSIZ = 12;
	static const int32_t ENDOFF = 16;
	static const int32_t ENDCOM = 20;
};

		} // zip
	} // util
} // java

#pragma pop_macro("CENATT")
#pragma pop_macro("CENATX")
#pragma pop_macro("CENCOM")
#pragma pop_macro("CENCRC")
#pragma pop_macro("CENDSK")
#pragma pop_macro("CENEXT")
#pragma pop_macro("CENFLG")
#pragma pop_macro("CENHDR")
#pragma pop_macro("CENHOW")
#pragma pop_macro("CENLEN")
#pragma pop_macro("CENNAM")
#pragma pop_macro("CENOFF")
#pragma pop_macro("CENSIG")
#pragma pop_macro("CENSIZ")
#pragma pop_macro("CENTIM")
#pragma pop_macro("CENVEM")
#pragma pop_macro("CENVER")
#pragma pop_macro("ENDCOM")
#pragma pop_macro("ENDHDR")
#pragma pop_macro("ENDOFF")
#pragma pop_macro("ENDSIG")
#pragma pop_macro("ENDSIZ")
#pragma pop_macro("ENDSUB")
#pragma pop_macro("ENDTOT")
#pragma pop_macro("EXTCRC")
#pragma pop_macro("EXTHDR")
#pragma pop_macro("EXTLEN")
#pragma pop_macro("EXTSIG")
#pragma pop_macro("EXTSIZ")
#pragma pop_macro("LOCCRC")
#pragma pop_macro("LOCEXT")
#pragma pop_macro("LOCFLG")
#pragma pop_macro("LOCHDR")
#pragma pop_macro("LOCHOW")
#pragma pop_macro("LOCLEN")
#pragma pop_macro("LOCNAM")
#pragma pop_macro("LOCSIG")
#pragma pop_macro("LOCSIZ")
#pragma pop_macro("LOCTIM")
#pragma pop_macro("LOCVER")

#endif // _java_util_zip_ZipConstants_h_