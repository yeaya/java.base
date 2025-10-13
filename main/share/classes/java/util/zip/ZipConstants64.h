#ifndef _java_util_zip_ZipConstants64_h_
#define _java_util_zip_ZipConstants64_h_
//$ class java.util.zip.ZipConstants64
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("EXTID_EXTT")
#undef EXTID_EXTT
#pragma push_macro("EXTID_NTFS")
#undef EXTID_NTFS
#pragma push_macro("EXTID_UNIX")
#undef EXTID_UNIX
#pragma push_macro("EXTID_ZIP64")
#undef EXTID_ZIP64
#pragma push_macro("EXTT_FLAG_LAT")
#undef EXTT_FLAG_LAT
#pragma push_macro("EXTT_FLAG_LMT")
#undef EXTT_FLAG_LMT
#pragma push_macro("EXTT_FLAT_CT")
#undef EXTT_FLAT_CT
#pragma push_macro("USE_UTF8")
#undef USE_UTF8
#pragma push_macro("ZIP64_ENDDSK")
#undef ZIP64_ENDDSK
#pragma push_macro("ZIP64_ENDEXT")
#undef ZIP64_ENDEXT
#pragma push_macro("ZIP64_ENDHDR")
#undef ZIP64_ENDHDR
#pragma push_macro("ZIP64_ENDLEN")
#undef ZIP64_ENDLEN
#pragma push_macro("ZIP64_ENDNMD")
#undef ZIP64_ENDNMD
#pragma push_macro("ZIP64_ENDOFF")
#undef ZIP64_ENDOFF
#pragma push_macro("ZIP64_ENDSIG")
#undef ZIP64_ENDSIG
#pragma push_macro("ZIP64_ENDSIZ")
#undef ZIP64_ENDSIZ
#pragma push_macro("ZIP64_ENDTOD")
#undef ZIP64_ENDTOD
#pragma push_macro("ZIP64_ENDTOT")
#undef ZIP64_ENDTOT
#pragma push_macro("ZIP64_ENDVEM")
#undef ZIP64_ENDVEM
#pragma push_macro("ZIP64_ENDVER")
#undef ZIP64_ENDVER
#pragma push_macro("ZIP64_EXTCRC")
#undef ZIP64_EXTCRC
#pragma push_macro("ZIP64_EXTHDR")
#undef ZIP64_EXTHDR
#pragma push_macro("ZIP64_EXTID")
#undef ZIP64_EXTID
#pragma push_macro("ZIP64_EXTLEN")
#undef ZIP64_EXTLEN
#pragma push_macro("ZIP64_EXTSIZ")
#undef ZIP64_EXTSIZ
#pragma push_macro("ZIP64_LOCDSK")
#undef ZIP64_LOCDSK
#pragma push_macro("ZIP64_LOCHDR")
#undef ZIP64_LOCHDR
#pragma push_macro("ZIP64_LOCOFF")
#undef ZIP64_LOCOFF
#pragma push_macro("ZIP64_LOCSIG")
#undef ZIP64_LOCSIG
#pragma push_macro("ZIP64_LOCTOT")
#undef ZIP64_LOCTOT
#pragma push_macro("ZIP64_MAGICCOUNT")
#undef ZIP64_MAGICCOUNT
#pragma push_macro("ZIP64_MAGICVAL")
#undef ZIP64_MAGICVAL

namespace java {
	namespace util {
		namespace zip {

class ZipConstants64 : public ::java::lang::Object {
	$class(ZipConstants64, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ZipConstants64();
	void init$();
	static const int64_t ZIP64_ENDSIG = (int64_t)101075792;
	static const int64_t ZIP64_LOCSIG = (int64_t)117853008;
	static const int32_t ZIP64_ENDHDR = 56;
	static const int32_t ZIP64_LOCHDR = 20;
	static const int32_t ZIP64_EXTHDR = 24;
	static const int32_t ZIP64_EXTID = 1;
	static const int32_t ZIP64_MAGICCOUNT = 0x0000FFFF;
	static const int64_t ZIP64_MAGICVAL = (int64_t)0x00000000FFFFFFFF;
	static const int32_t ZIP64_ENDLEN = 4;
	static const int32_t ZIP64_ENDVEM = 12;
	static const int32_t ZIP64_ENDVER = 14;
	static const int32_t ZIP64_ENDNMD = 16;
	static const int32_t ZIP64_ENDDSK = 20;
	static const int32_t ZIP64_ENDTOD = 24;
	static const int32_t ZIP64_ENDTOT = 32;
	static const int32_t ZIP64_ENDSIZ = 40;
	static const int32_t ZIP64_ENDOFF = 48;
	static const int32_t ZIP64_ENDEXT = 56;
	static const int32_t ZIP64_LOCDSK = 4;
	static const int32_t ZIP64_LOCOFF = 8;
	static const int32_t ZIP64_LOCTOT = 16;
	static const int32_t ZIP64_EXTCRC = 4;
	static const int32_t ZIP64_EXTSIZ = 8;
	static const int32_t ZIP64_EXTLEN = 16;
	static const int32_t USE_UTF8 = 2048;
	static const int32_t EXTID_ZIP64 = 1;
	static const int32_t EXTID_NTFS = 10;
	static const int32_t EXTID_UNIX = 13;
	static const int32_t EXTID_EXTT = 21589;
	static const int32_t EXTT_FLAG_LMT = 1;
	static const int32_t EXTT_FLAG_LAT = 2;
	static const int32_t EXTT_FLAT_CT = 4;
};

		} // zip
	} // util
} // java

#pragma pop_macro("EXTID_EXTT")
#pragma pop_macro("EXTID_NTFS")
#pragma pop_macro("EXTID_UNIX")
#pragma pop_macro("EXTID_ZIP64")
#pragma pop_macro("EXTT_FLAG_LAT")
#pragma pop_macro("EXTT_FLAG_LMT")
#pragma pop_macro("EXTT_FLAT_CT")
#pragma pop_macro("USE_UTF8")
#pragma pop_macro("ZIP64_ENDDSK")
#pragma pop_macro("ZIP64_ENDEXT")
#pragma pop_macro("ZIP64_ENDHDR")
#pragma pop_macro("ZIP64_ENDLEN")
#pragma pop_macro("ZIP64_ENDNMD")
#pragma pop_macro("ZIP64_ENDOFF")
#pragma pop_macro("ZIP64_ENDSIG")
#pragma pop_macro("ZIP64_ENDSIZ")
#pragma pop_macro("ZIP64_ENDTOD")
#pragma pop_macro("ZIP64_ENDTOT")
#pragma pop_macro("ZIP64_ENDVEM")
#pragma pop_macro("ZIP64_ENDVER")
#pragma pop_macro("ZIP64_EXTCRC")
#pragma pop_macro("ZIP64_EXTHDR")
#pragma pop_macro("ZIP64_EXTID")
#pragma pop_macro("ZIP64_EXTLEN")
#pragma pop_macro("ZIP64_EXTSIZ")
#pragma pop_macro("ZIP64_LOCDSK")
#pragma pop_macro("ZIP64_LOCHDR")
#pragma pop_macro("ZIP64_LOCOFF")
#pragma pop_macro("ZIP64_LOCSIG")
#pragma pop_macro("ZIP64_LOCTOT")
#pragma pop_macro("ZIP64_MAGICCOUNT")
#pragma pop_macro("ZIP64_MAGICVAL")

#endif // _java_util_zip_ZipConstants64_h_