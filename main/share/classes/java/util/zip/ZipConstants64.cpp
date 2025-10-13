#include <java/util/zip/ZipConstants64.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef EXTID_EXTT
#undef EXTID_NTFS
#undef EXTID_UNIX
#undef EXTID_ZIP64
#undef EXTT_FLAG_LAT
#undef EXTT_FLAG_LMT
#undef EXTT_FLAT_CT
#undef USE_UTF8
#undef ZIP64_ENDDSK
#undef ZIP64_ENDEXT
#undef ZIP64_ENDHDR
#undef ZIP64_ENDLEN
#undef ZIP64_ENDNMD
#undef ZIP64_ENDOFF
#undef ZIP64_ENDSIG
#undef ZIP64_ENDSIZ
#undef ZIP64_ENDTOD
#undef ZIP64_ENDTOT
#undef ZIP64_ENDVEM
#undef ZIP64_ENDVER
#undef ZIP64_EXTCRC
#undef ZIP64_EXTHDR
#undef ZIP64_EXTID
#undef ZIP64_EXTLEN
#undef ZIP64_EXTSIZ
#undef ZIP64_LOCDSK
#undef ZIP64_LOCHDR
#undef ZIP64_LOCOFF
#undef ZIP64_LOCSIG
#undef ZIP64_LOCTOT
#undef ZIP64_MAGICCOUNT
#undef ZIP64_MAGICVAL

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace zip {

$FieldInfo _ZipConstants64_FieldInfo_[] = {
	{"ZIP64_ENDSIG", "J", nullptr, $STATIC | $FINAL, $constField(ZipConstants64, ZIP64_ENDSIG)},
	{"ZIP64_LOCSIG", "J", nullptr, $STATIC | $FINAL, $constField(ZipConstants64, ZIP64_LOCSIG)},
	{"ZIP64_ENDHDR", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants64, ZIP64_ENDHDR)},
	{"ZIP64_LOCHDR", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants64, ZIP64_LOCHDR)},
	{"ZIP64_EXTHDR", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants64, ZIP64_EXTHDR)},
	{"ZIP64_EXTID", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants64, ZIP64_EXTID)},
	{"ZIP64_MAGICCOUNT", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants64, ZIP64_MAGICCOUNT)},
	{"ZIP64_MAGICVAL", "J", nullptr, $STATIC | $FINAL, $constField(ZipConstants64, ZIP64_MAGICVAL)},
	{"ZIP64_ENDLEN", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants64, ZIP64_ENDLEN)},
	{"ZIP64_ENDVEM", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants64, ZIP64_ENDVEM)},
	{"ZIP64_ENDVER", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants64, ZIP64_ENDVER)},
	{"ZIP64_ENDNMD", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants64, ZIP64_ENDNMD)},
	{"ZIP64_ENDDSK", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants64, ZIP64_ENDDSK)},
	{"ZIP64_ENDTOD", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants64, ZIP64_ENDTOD)},
	{"ZIP64_ENDTOT", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants64, ZIP64_ENDTOT)},
	{"ZIP64_ENDSIZ", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants64, ZIP64_ENDSIZ)},
	{"ZIP64_ENDOFF", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants64, ZIP64_ENDOFF)},
	{"ZIP64_ENDEXT", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants64, ZIP64_ENDEXT)},
	{"ZIP64_LOCDSK", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants64, ZIP64_LOCDSK)},
	{"ZIP64_LOCOFF", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants64, ZIP64_LOCOFF)},
	{"ZIP64_LOCTOT", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants64, ZIP64_LOCTOT)},
	{"ZIP64_EXTCRC", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants64, ZIP64_EXTCRC)},
	{"ZIP64_EXTSIZ", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants64, ZIP64_EXTSIZ)},
	{"ZIP64_EXTLEN", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants64, ZIP64_EXTLEN)},
	{"USE_UTF8", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants64, USE_UTF8)},
	{"EXTID_ZIP64", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants64, EXTID_ZIP64)},
	{"EXTID_NTFS", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants64, EXTID_NTFS)},
	{"EXTID_UNIX", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants64, EXTID_UNIX)},
	{"EXTID_EXTT", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants64, EXTID_EXTT)},
	{"EXTT_FLAG_LMT", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants64, EXTT_FLAG_LMT)},
	{"EXTT_FLAG_LAT", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants64, EXTT_FLAG_LAT)},
	{"EXTT_FLAT_CT", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants64, EXTT_FLAT_CT)},
	{}
};

$MethodInfo _ZipConstants64_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ZipConstants64::*)()>(&ZipConstants64::init$))},
	{}
};

$ClassInfo _ZipConstants64_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.zip.ZipConstants64",
	"java.lang.Object",
	nullptr,
	_ZipConstants64_FieldInfo_,
	_ZipConstants64_MethodInfo_
};

$Object* allocate$ZipConstants64($Class* clazz) {
	return $of($alloc(ZipConstants64));
}

void ZipConstants64::init$() {
}

ZipConstants64::ZipConstants64() {
}

$Class* ZipConstants64::load$($String* name, bool initialize) {
	$loadClass(ZipConstants64, name, initialize, &_ZipConstants64_ClassInfo_, allocate$ZipConstants64);
	return class$;
}

$Class* ZipConstants64::class$ = nullptr;

		} // zip
	} // util
} // java