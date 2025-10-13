#include <java/util/zip/ZipConstants.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef CENATT
#undef CENATX
#undef CENCOM
#undef CENCRC
#undef CENDSK
#undef CENEXT
#undef CENFLG
#undef CENHDR
#undef CENHOW
#undef CENLEN
#undef CENNAM
#undef CENOFF
#undef CENSIG
#undef CENSIZ
#undef CENTIM
#undef CENVEM
#undef CENVER
#undef ENDCOM
#undef ENDHDR
#undef ENDOFF
#undef ENDSIG
#undef ENDSIZ
#undef ENDSUB
#undef ENDTOT
#undef EXTCRC
#undef EXTHDR
#undef EXTLEN
#undef EXTSIG
#undef EXTSIZ
#undef LOCCRC
#undef LOCEXT
#undef LOCFLG
#undef LOCHDR
#undef LOCHOW
#undef LOCLEN
#undef LOCNAM
#undef LOCSIG
#undef LOCSIZ
#undef LOCTIM
#undef LOCVER

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;

namespace java {
	namespace util {
		namespace zip {

$FieldInfo _ZipConstants_FieldInfo_[] = {
	{"LOCSIG", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ZipConstants, LOCSIG)},
	{"EXTSIG", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ZipConstants, EXTSIG)},
	{"CENSIG", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ZipConstants, CENSIG)},
	{"ENDSIG", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ZipConstants, ENDSIG)},
	{"LOCHDR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ZipConstants, LOCHDR)},
	{"EXTHDR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ZipConstants, EXTHDR)},
	{"CENHDR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ZipConstants, CENHDR)},
	{"ENDHDR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ZipConstants, ENDHDR)},
	{"LOCVER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ZipConstants, LOCVER)},
	{"LOCFLG", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ZipConstants, LOCFLG)},
	{"LOCHOW", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ZipConstants, LOCHOW)},
	{"LOCTIM", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ZipConstants, LOCTIM)},
	{"LOCCRC", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ZipConstants, LOCCRC)},
	{"LOCSIZ", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ZipConstants, LOCSIZ)},
	{"LOCLEN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ZipConstants, LOCLEN)},
	{"LOCNAM", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ZipConstants, LOCNAM)},
	{"LOCEXT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ZipConstants, LOCEXT)},
	{"EXTCRC", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ZipConstants, EXTCRC)},
	{"EXTSIZ", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ZipConstants, EXTSIZ)},
	{"EXTLEN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ZipConstants, EXTLEN)},
	{"CENVEM", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ZipConstants, CENVEM)},
	{"CENVER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ZipConstants, CENVER)},
	{"CENFLG", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ZipConstants, CENFLG)},
	{"CENHOW", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ZipConstants, CENHOW)},
	{"CENTIM", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ZipConstants, CENTIM)},
	{"CENCRC", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ZipConstants, CENCRC)},
	{"CENSIZ", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ZipConstants, CENSIZ)},
	{"CENLEN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ZipConstants, CENLEN)},
	{"CENNAM", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ZipConstants, CENNAM)},
	{"CENEXT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ZipConstants, CENEXT)},
	{"CENCOM", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ZipConstants, CENCOM)},
	{"CENDSK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ZipConstants, CENDSK)},
	{"CENATT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ZipConstants, CENATT)},
	{"CENATX", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ZipConstants, CENATX)},
	{"CENOFF", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ZipConstants, CENOFF)},
	{"ENDSUB", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ZipConstants, ENDSUB)},
	{"ENDTOT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ZipConstants, ENDTOT)},
	{"ENDSIZ", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ZipConstants, ENDSIZ)},
	{"ENDOFF", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ZipConstants, ENDOFF)},
	{"ENDCOM", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ZipConstants, ENDCOM)},
	{}
};

$ClassInfo _ZipConstants_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"java.util.zip.ZipConstants",
	nullptr,
	nullptr,
	_ZipConstants_FieldInfo_
};

$Object* allocate$ZipConstants($Class* clazz) {
	return $of($alloc(ZipConstants));
}

$Class* ZipConstants::load$($String* name, bool initialize) {
	$loadClass(ZipConstants, name, initialize, &_ZipConstants_ClassInfo_, allocate$ZipConstants);
	return class$;
}

$Class* ZipConstants::class$ = nullptr;

		} // zip
	} // util
} // java