#include <sun/nio/cs/StandardCharsets.h>

#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/StandardCharsets.h>
#include <java/nio/charset/spi/CharsetProvider.h>
#include <java/util/AbstractMap.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <sun/nio/cs/ISO_8859_1.h>
#include <sun/nio/cs/StandardCharsets$1.h>
#include <sun/nio/cs/StandardCharsets$Aliases.h>
#include <sun/nio/cs/StandardCharsets$Cache.h>
#include <sun/nio/cs/StandardCharsets$Classes.h>
#include <sun/nio/cs/US_ASCII.h>
#include <sun/nio/cs/UTF_8.h>
#include <sun/nio/cs/Unicode.h>
#include <sun/util/PreHashedMap.h>
#include <jcpp.h>

#undef INSTANCE
#undef UTF_16
#undef UTF_16BE
#undef UTF_16LE

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $Charset = ::java::nio::charset::Charset;
using $StandardCharsets = ::java::nio::charset::StandardCharsets;
using $CharsetProvider = ::java::nio::charset::spi::CharsetProvider;
using $AbstractMap = ::java::util::AbstractMap;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $ISO_8859_1 = ::sun::nio::cs::ISO_8859_1;
using $StandardCharsets$1 = ::sun::nio::cs::StandardCharsets$1;
using $StandardCharsets$Aliases = ::sun::nio::cs::StandardCharsets$Aliases;
using $StandardCharsets$Cache = ::sun::nio::cs::StandardCharsets$Cache;
using $StandardCharsets$Classes = ::sun::nio::cs::StandardCharsets$Classes;
using $US_ASCII = ::sun::nio::cs::US_ASCII;
using $UTF_8 = ::sun::nio::cs::UTF_8;
using $Unicode = ::sun::nio::cs::Unicode;
using $PreHashedMap = ::sun::util::PreHashedMap;

namespace sun {
	namespace nio {
		namespace cs {

$CompoundAttribute _StandardCharsets_FieldAnnotations_classMap[] = {
	{"Ljdk/internal/vm/annotation/Stable;", nullptr},
	{}
};

$CompoundAttribute _StandardCharsets_FieldAnnotations_aliasMap[] = {
	{"Ljdk/internal/vm/annotation/Stable;", nullptr},
	{}
};

$CompoundAttribute _StandardCharsets_FieldAnnotations_cache[] = {
	{"Ljdk/internal/vm/annotation/Stable;", nullptr},
	{}
};

$FieldInfo _StandardCharsets_FieldInfo_[] = {
	{"aliases_SJIS", "[Ljava/lang/String;", nullptr, $STATIC, $staticField(StandardCharsets, aliases_SJIS$)},
	{"aliases_MS932", "[Ljava/lang/String;", nullptr, $STATIC, $staticField(StandardCharsets, aliases_MS932$)},
	{"classMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $PRIVATE, $field(StandardCharsets, classMap$), _StandardCharsets_FieldAnnotations_classMap},
	{"aliasMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $PRIVATE, $field(StandardCharsets, aliasMap$), _StandardCharsets_FieldAnnotations_aliasMap},
	{"cache", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/nio/charset/Charset;>;", $PRIVATE, $field(StandardCharsets, cache$), _StandardCharsets_FieldAnnotations_cache},
	{"packagePrefix", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(StandardCharsets, packagePrefix)},
	{}
};

$MethodInfo _StandardCharsets_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(StandardCharsets::*)()>(&StandardCharsets::init$))},
	{"aliasMap", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $PRIVATE, $method(static_cast<$Map*(StandardCharsets::*)()>(&StandardCharsets::aliasMap))},
	{"aliases_CESU_8", "()[Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$StringArray*(*)()>(&StandardCharsets::aliases_CESU_8))},
	{"aliases_GB18030", "()[Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$StringArray*(*)()>(&StandardCharsets::aliases_GB18030))},
	{"aliases_GBK", "()[Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$StringArray*(*)()>(&StandardCharsets::aliases_GBK))},
	{"aliases_IBM437", "()[Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$StringArray*(*)()>(&StandardCharsets::aliases_IBM437))},
	{"aliases_IBM737", "()[Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$StringArray*(*)()>(&StandardCharsets::aliases_IBM737))},
	{"aliases_IBM775", "()[Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$StringArray*(*)()>(&StandardCharsets::aliases_IBM775))},
	{"aliases_IBM850", "()[Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$StringArray*(*)()>(&StandardCharsets::aliases_IBM850))},
	{"aliases_IBM852", "()[Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$StringArray*(*)()>(&StandardCharsets::aliases_IBM852))},
	{"aliases_IBM855", "()[Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$StringArray*(*)()>(&StandardCharsets::aliases_IBM855))},
	{"aliases_IBM857", "()[Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$StringArray*(*)()>(&StandardCharsets::aliases_IBM857))},
	{"aliases_IBM858", "()[Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$StringArray*(*)()>(&StandardCharsets::aliases_IBM858))},
	{"aliases_IBM862", "()[Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$StringArray*(*)()>(&StandardCharsets::aliases_IBM862))},
	{"aliases_IBM866", "()[Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$StringArray*(*)()>(&StandardCharsets::aliases_IBM866))},
	{"aliases_IBM874", "()[Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$StringArray*(*)()>(&StandardCharsets::aliases_IBM874))},
	{"aliases_ISO_8859_1", "()[Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$StringArray*(*)()>(&StandardCharsets::aliases_ISO_8859_1))},
	{"aliases_ISO_8859_13", "()[Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$StringArray*(*)()>(&StandardCharsets::aliases_ISO_8859_13))},
	{"aliases_ISO_8859_15", "()[Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$StringArray*(*)()>(&StandardCharsets::aliases_ISO_8859_15))},
	{"aliases_ISO_8859_16", "()[Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$StringArray*(*)()>(&StandardCharsets::aliases_ISO_8859_16))},
	{"aliases_ISO_8859_2", "()[Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$StringArray*(*)()>(&StandardCharsets::aliases_ISO_8859_2))},
	{"aliases_ISO_8859_4", "()[Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$StringArray*(*)()>(&StandardCharsets::aliases_ISO_8859_4))},
	{"aliases_ISO_8859_5", "()[Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$StringArray*(*)()>(&StandardCharsets::aliases_ISO_8859_5))},
	{"aliases_ISO_8859_7", "()[Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$StringArray*(*)()>(&StandardCharsets::aliases_ISO_8859_7))},
	{"aliases_ISO_8859_9", "()[Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$StringArray*(*)()>(&StandardCharsets::aliases_ISO_8859_9))},
	{"aliases_JIS_X_0201", "()[Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$StringArray*(*)()>(&StandardCharsets::aliases_JIS_X_0201))},
	{"aliases_Johab", "()[Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$StringArray*(*)()>(&StandardCharsets::aliases_Johab))},
	{"aliases_KOI8_R", "()[Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$StringArray*(*)()>(&StandardCharsets::aliases_KOI8_R))},
	{"aliases_KOI8_U", "()[Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$StringArray*(*)()>(&StandardCharsets::aliases_KOI8_U))},
	{"aliases_MS1250", "()[Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$StringArray*(*)()>(&StandardCharsets::aliases_MS1250))},
	{"aliases_MS1251", "()[Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$StringArray*(*)()>(&StandardCharsets::aliases_MS1251))},
	{"aliases_MS1252", "()[Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$StringArray*(*)()>(&StandardCharsets::aliases_MS1252))},
	{"aliases_MS1253", "()[Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$StringArray*(*)()>(&StandardCharsets::aliases_MS1253))},
	{"aliases_MS1254", "()[Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$StringArray*(*)()>(&StandardCharsets::aliases_MS1254))},
	{"aliases_MS1255", "()[Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$StringArray*(*)()>(&StandardCharsets::aliases_MS1255))},
	{"aliases_MS1256", "()[Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$StringArray*(*)()>(&StandardCharsets::aliases_MS1256))},
	{"aliases_MS1257", "()[Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$StringArray*(*)()>(&StandardCharsets::aliases_MS1257))},
	{"aliases_MS1258", "()[Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$StringArray*(*)()>(&StandardCharsets::aliases_MS1258))},
	{"aliases_MS874", "()[Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$StringArray*(*)()>(&StandardCharsets::aliases_MS874))},
	{"aliases_MS932", "()[Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$StringArray*(*)()>(&StandardCharsets::aliases_MS932))},
	{"aliases_MS936", "()[Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$StringArray*(*)()>(&StandardCharsets::aliases_MS936))},
	{"aliases_MS949", "()[Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$StringArray*(*)()>(&StandardCharsets::aliases_MS949))},
	{"aliases_MS950", "()[Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$StringArray*(*)()>(&StandardCharsets::aliases_MS950))},
	{"aliases_MS950_HKSCS", "()[Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$StringArray*(*)()>(&StandardCharsets::aliases_MS950_HKSCS))},
	{"aliases_MS950_HKSCS_XP", "()[Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$StringArray*(*)()>(&StandardCharsets::aliases_MS950_HKSCS_XP))},
	{"aliases_SJIS", "()[Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$StringArray*(*)()>(&StandardCharsets::aliases_SJIS))},
	{"aliases_US_ASCII", "()[Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$StringArray*(*)()>(&StandardCharsets::aliases_US_ASCII))},
	{"aliases_UTF_16", "()[Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$StringArray*(*)()>(&StandardCharsets::aliases_UTF_16))},
	{"aliases_UTF_16BE", "()[Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$StringArray*(*)()>(&StandardCharsets::aliases_UTF_16BE))},
	{"aliases_UTF_16LE", "()[Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$StringArray*(*)()>(&StandardCharsets::aliases_UTF_16LE))},
	{"aliases_UTF_16LE_BOM", "()[Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$StringArray*(*)()>(&StandardCharsets::aliases_UTF_16LE_BOM))},
	{"aliases_UTF_32", "()[Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$StringArray*(*)()>(&StandardCharsets::aliases_UTF_32))},
	{"aliases_UTF_32BE", "()[Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$StringArray*(*)()>(&StandardCharsets::aliases_UTF_32BE))},
	{"aliases_UTF_32BE_BOM", "()[Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$StringArray*(*)()>(&StandardCharsets::aliases_UTF_32BE_BOM))},
	{"aliases_UTF_32LE", "()[Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$StringArray*(*)()>(&StandardCharsets::aliases_UTF_32LE))},
	{"aliases_UTF_32LE_BOM", "()[Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$StringArray*(*)()>(&StandardCharsets::aliases_UTF_32LE_BOM))},
	{"aliases_UTF_8", "()[Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$StringArray*(*)()>(&StandardCharsets::aliases_UTF_8))},
	{"cache", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/nio/charset/Charset;>;", $PRIVATE, $method(static_cast<$Map*(StandardCharsets::*)()>(&StandardCharsets::cache))},
	{"cache", "(Ljava/lang/String;Ljava/nio/charset/Charset;)Ljava/nio/charset/Charset;", nullptr, $PRIVATE, $method(static_cast<$Charset*(StandardCharsets::*)($String*,$Charset*)>(&StandardCharsets::cache))},
	{"canonicalize", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(StandardCharsets::*)($String*)>(&StandardCharsets::canonicalize))},
	{"charsetForName", "(Ljava/lang/String;)Ljava/nio/charset/Charset;", nullptr, $PUBLIC | $FINAL},
	{"charsets", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/nio/charset/Charset;>;", $PUBLIC | $FINAL},
	{"classMap", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $PRIVATE, $method(static_cast<$Map*(StandardCharsets::*)()>(&StandardCharsets::classMap))},
	{"lookup", "(Ljava/lang/String;)Ljava/nio/charset/Charset;", nullptr, $PRIVATE, $method(static_cast<$Charset*(StandardCharsets::*)($String*)>(&StandardCharsets::lookup))},
	{"toLower", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*)>(&StandardCharsets::toLower))},
	{}
};

$InnerClassInfo _StandardCharsets_InnerClassesInfo_[] = {
	{"sun.nio.cs.StandardCharsets$Cache", "sun.nio.cs.StandardCharsets", "Cache", $PRIVATE | $STATIC | $FINAL},
	{"sun.nio.cs.StandardCharsets$Classes", "sun.nio.cs.StandardCharsets", "Classes", $PRIVATE | $STATIC | $FINAL},
	{"sun.nio.cs.StandardCharsets$Aliases", "sun.nio.cs.StandardCharsets", "Aliases", $PRIVATE | $STATIC | $FINAL},
	{"sun.nio.cs.StandardCharsets$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _StandardCharsets_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.StandardCharsets",
	"java.nio.charset.spi.CharsetProvider",
	nullptr,
	_StandardCharsets_FieldInfo_,
	_StandardCharsets_MethodInfo_,
	nullptr,
	nullptr,
	_StandardCharsets_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.StandardCharsets$Cache,sun.nio.cs.StandardCharsets$Classes,sun.nio.cs.StandardCharsets$Aliases,sun.nio.cs.StandardCharsets$1"
};

$Object* allocate$StandardCharsets($Class* clazz) {
	return $of($alloc(StandardCharsets));
}

$StringArray* StandardCharsets::aliases_SJIS$ = nullptr;
$StringArray* StandardCharsets::aliases_MS932$ = nullptr;
$String* StandardCharsets::packagePrefix = nullptr;

$StringArray* StandardCharsets::aliases_US_ASCII() {
	$init(StandardCharsets);
	return $new($StringArray, {
		"iso-ir-6"_s,
		"ANSI_X3.4-1986"_s,
		"ISO_646.irv:1991"_s,
		"ASCII"_s,
		"ISO646-US"_s,
		"us"_s,
		"IBM367"_s,
		"cp367"_s,
		"csASCII"_s,
		"default"_s,
		"646"_s,
		"iso_646.irv:1983"_s,
		"ANSI_X3.4-1968"_s,
		"ascii7"_s
	});
}

$StringArray* StandardCharsets::aliases_UTF_8() {
	$init(StandardCharsets);
	return $new($StringArray, {
		"UTF8"_s,
		"unicode-1-1-utf-8"_s
	});
}

$StringArray* StandardCharsets::aliases_CESU_8() {
	$init(StandardCharsets);
	return $new($StringArray, {
		"CESU8"_s,
		"csCESU-8"_s
	});
}

$StringArray* StandardCharsets::aliases_UTF_16() {
	$init(StandardCharsets);
	return $new($StringArray, {
		"UTF_16"_s,
		"utf16"_s,
		"unicode"_s,
		"UnicodeBig"_s
	});
}

$StringArray* StandardCharsets::aliases_UTF_16BE() {
	$init(StandardCharsets);
	return $new($StringArray, {
		"UTF_16BE"_s,
		"ISO-10646-UCS-2"_s,
		"X-UTF-16BE"_s,
		"UnicodeBigUnmarked"_s
	});
}

$StringArray* StandardCharsets::aliases_UTF_16LE() {
	$init(StandardCharsets);
	return $new($StringArray, {
		"UTF_16LE"_s,
		"X-UTF-16LE"_s,
		"UnicodeLittleUnmarked"_s
	});
}

$StringArray* StandardCharsets::aliases_UTF_16LE_BOM() {
	$init(StandardCharsets);
	return $new($StringArray, {"UnicodeLittle"_s});
}

$StringArray* StandardCharsets::aliases_UTF_32() {
	$init(StandardCharsets);
	return $new($StringArray, {
		"UTF_32"_s,
		"UTF32"_s
	});
}

$StringArray* StandardCharsets::aliases_UTF_32LE() {
	$init(StandardCharsets);
	return $new($StringArray, {
		"UTF_32LE"_s,
		"X-UTF-32LE"_s
	});
}

$StringArray* StandardCharsets::aliases_UTF_32BE() {
	$init(StandardCharsets);
	return $new($StringArray, {
		"UTF_32BE"_s,
		"X-UTF-32BE"_s
	});
}

$StringArray* StandardCharsets::aliases_UTF_32LE_BOM() {
	$init(StandardCharsets);
	return $new($StringArray, {
		"UTF_32LE_BOM"_s,
		"UTF-32LE-BOM"_s
	});
}

$StringArray* StandardCharsets::aliases_UTF_32BE_BOM() {
	$init(StandardCharsets);
	return $new($StringArray, {
		"UTF_32BE_BOM"_s,
		"UTF-32BE-BOM"_s
	});
}

$StringArray* StandardCharsets::aliases_ISO_8859_1() {
	$init(StandardCharsets);
	return $new($StringArray, {
		"iso-ir-100"_s,
		"ISO_8859-1"_s,
		"latin1"_s,
		"l1"_s,
		"IBM819"_s,
		"cp819"_s,
		"csISOLatin1"_s,
		"819"_s,
		"IBM-819"_s,
		"ISO8859_1"_s,
		"ISO_8859-1:1987"_s,
		"ISO_8859_1"_s,
		"8859_1"_s,
		"ISO8859-1"_s
	});
}

$StringArray* StandardCharsets::aliases_ISO_8859_2() {
	$init(StandardCharsets);
	return $new($StringArray, {
		"iso8859_2"_s,
		"8859_2"_s,
		"iso-ir-101"_s,
		"ISO_8859-2"_s,
		"ISO_8859-2:1987"_s,
		"ISO8859-2"_s,
		"latin2"_s,
		"l2"_s,
		"ibm912"_s,
		"ibm-912"_s,
		"cp912"_s,
		"912"_s,
		"csISOLatin2"_s
	});
}

$StringArray* StandardCharsets::aliases_ISO_8859_4() {
	$init(StandardCharsets);
	return $new($StringArray, {
		"iso8859_4"_s,
		"iso8859-4"_s,
		"8859_4"_s,
		"iso-ir-110"_s,
		"ISO_8859-4"_s,
		"ISO_8859-4:1988"_s,
		"latin4"_s,
		"l4"_s,
		"ibm914"_s,
		"ibm-914"_s,
		"cp914"_s,
		"914"_s,
		"csISOLatin4"_s
	});
}

$StringArray* StandardCharsets::aliases_ISO_8859_5() {
	$init(StandardCharsets);
	return $new($StringArray, {
		"iso8859_5"_s,
		"8859_5"_s,
		"iso-ir-144"_s,
		"ISO_8859-5"_s,
		"ISO_8859-5:1988"_s,
		"ISO8859-5"_s,
		"cyrillic"_s,
		"ibm915"_s,
		"ibm-915"_s,
		"cp915"_s,
		"915"_s,
		"csISOLatinCyrillic"_s
	});
}

$StringArray* StandardCharsets::aliases_ISO_8859_7() {
	$init(StandardCharsets);
	return $new($StringArray, {
		"iso8859_7"_s,
		"8859_7"_s,
		"iso-ir-126"_s,
		"ISO_8859-7"_s,
		"ISO_8859-7:1987"_s,
		"ELOT_928"_s,
		"ECMA-118"_s,
		"greek"_s,
		"greek8"_s,
		"csISOLatinGreek"_s,
		"sun_eu_greek"_s,
		"ibm813"_s,
		"ibm-813"_s,
		"813"_s,
		"cp813"_s,
		"iso8859-7"_s
	});
}

$StringArray* StandardCharsets::aliases_ISO_8859_9() {
	$init(StandardCharsets);
	return $new($StringArray, {
		"iso8859_9"_s,
		"8859_9"_s,
		"iso-ir-148"_s,
		"ISO_8859-9"_s,
		"ISO_8859-9:1989"_s,
		"ISO8859-9"_s,
		"latin5"_s,
		"l5"_s,
		"ibm920"_s,
		"ibm-920"_s,
		"920"_s,
		"cp920"_s,
		"csISOLatin5"_s
	});
}

$StringArray* StandardCharsets::aliases_ISO_8859_13() {
	$init(StandardCharsets);
	return $new($StringArray, {
		"iso8859_13"_s,
		"8859_13"_s,
		"iso_8859-13"_s,
		"ISO8859-13"_s
	});
}

$StringArray* StandardCharsets::aliases_ISO_8859_15() {
	$init(StandardCharsets);
	return $new($StringArray, {
		"ISO_8859-15"_s,
		"Latin-9"_s,
		"csISO885915"_s,
		"8859_15"_s,
		"ISO-8859-15"_s,
		"ISO8859_15"_s,
		"ISO8859-15"_s,
		"IBM923"_s,
		"IBM-923"_s,
		"cp923"_s,
		"923"_s,
		"LATIN0"_s,
		"LATIN9"_s,
		"L9"_s,
		"csISOlatin0"_s,
		"csISOlatin9"_s,
		"ISO8859_15_FDIS"_s
	});
}

$StringArray* StandardCharsets::aliases_ISO_8859_16() {
	$init(StandardCharsets);
	return $new($StringArray, {
		"iso-ir-226"_s,
		"ISO_8859-16:2001"_s,
		"ISO_8859-16"_s,
		"ISO8859_16"_s,
		"latin10"_s,
		"l10"_s,
		"csISO885916"_s
	});
}

$StringArray* StandardCharsets::aliases_KOI8_R() {
	$init(StandardCharsets);
	return $new($StringArray, {
		"koi8_r"_s,
		"koi8"_s,
		"cskoi8r"_s
	});
}

$StringArray* StandardCharsets::aliases_KOI8_U() {
	$init(StandardCharsets);
	return $new($StringArray, {"koi8_u"_s});
}

$StringArray* StandardCharsets::aliases_MS1250() {
	$init(StandardCharsets);
	return $new($StringArray, {
		"cp1250"_s,
		"cp5346"_s
	});
}

$StringArray* StandardCharsets::aliases_MS1251() {
	$init(StandardCharsets);
	return $new($StringArray, {
		"cp1251"_s,
		"cp5347"_s,
		"ansi-1251"_s
	});
}

$StringArray* StandardCharsets::aliases_MS1252() {
	$init(StandardCharsets);
	return $new($StringArray, {
		"cp1252"_s,
		"cp5348"_s,
		"ibm-1252"_s,
		"ibm1252"_s
	});
}

$StringArray* StandardCharsets::aliases_MS1253() {
	$init(StandardCharsets);
	return $new($StringArray, {
		"cp1253"_s,
		"cp5349"_s
	});
}

$StringArray* StandardCharsets::aliases_MS1254() {
	$init(StandardCharsets);
	return $new($StringArray, {
		"cp1254"_s,
		"cp5350"_s
	});
}

$StringArray* StandardCharsets::aliases_MS1257() {
	$init(StandardCharsets);
	return $new($StringArray, {
		"cp1257"_s,
		"cp5353"_s
	});
}

$StringArray* StandardCharsets::aliases_IBM437() {
	$init(StandardCharsets);
	return $new($StringArray, {
		"cp437"_s,
		"ibm437"_s,
		"ibm-437"_s,
		"437"_s,
		"cspc8codepage437"_s,
		"windows-437"_s
	});
}

$StringArray* StandardCharsets::aliases_IBM737() {
	$init(StandardCharsets);
	return $new($StringArray, {
		"cp737"_s,
		"ibm737"_s,
		"ibm-737"_s,
		"737"_s
	});
}

$StringArray* StandardCharsets::aliases_IBM775() {
	$init(StandardCharsets);
	return $new($StringArray, {
		"cp775"_s,
		"ibm775"_s,
		"ibm-775"_s,
		"775"_s
	});
}

$StringArray* StandardCharsets::aliases_IBM850() {
	$init(StandardCharsets);
	return $new($StringArray, {
		"cp850"_s,
		"ibm-850"_s,
		"ibm850"_s,
		"850"_s,
		"cspc850multilingual"_s
	});
}

$StringArray* StandardCharsets::aliases_IBM852() {
	$init(StandardCharsets);
	return $new($StringArray, {
		"cp852"_s,
		"ibm852"_s,
		"ibm-852"_s,
		"852"_s,
		"csPCp852"_s
	});
}

$StringArray* StandardCharsets::aliases_IBM855() {
	$init(StandardCharsets);
	return $new($StringArray, {
		"cp855"_s,
		"ibm-855"_s,
		"ibm855"_s,
		"855"_s,
		"cspcp855"_s
	});
}

$StringArray* StandardCharsets::aliases_IBM857() {
	$init(StandardCharsets);
	return $new($StringArray, {
		"cp857"_s,
		"ibm857"_s,
		"ibm-857"_s,
		"857"_s,
		"csIBM857"_s
	});
}

$StringArray* StandardCharsets::aliases_IBM858() {
	$init(StandardCharsets);
	return $new($StringArray, {
		"cp858"_s,
		"ccsid00858"_s,
		"cp00858"_s,
		"858"_s,
		"PC-Multilingual-850+euro"_s,
		"ibm858"_s,
		"ibm-858"_s
	});
}

$StringArray* StandardCharsets::aliases_IBM862() {
	$init(StandardCharsets);
	return $new($StringArray, {
		"cp862"_s,
		"ibm862"_s,
		"ibm-862"_s,
		"862"_s,
		"csIBM862"_s,
		"cspc862latinhebrew"_s
	});
}

$StringArray* StandardCharsets::aliases_IBM866() {
	$init(StandardCharsets);
	return $new($StringArray, {
		"cp866"_s,
		"ibm866"_s,
		"ibm-866"_s,
		"866"_s,
		"csIBM866"_s
	});
}

$StringArray* StandardCharsets::aliases_IBM874() {
	$init(StandardCharsets);
	return $new($StringArray, {
		"cp874"_s,
		"ibm874"_s,
		"ibm-874"_s,
		"874"_s
	});
}

$StringArray* StandardCharsets::aliases_MS950_HKSCS_XP() {
	$init(StandardCharsets);
	return $new($StringArray, {"MS950_HKSCS_XP"_s});
}

$StringArray* StandardCharsets::aliases_MS950_HKSCS() {
	$init(StandardCharsets);
	return $new($StringArray, {"MS950_HKSCS"_s});
}

$StringArray* StandardCharsets::aliases_MS950() {
	$init(StandardCharsets);
	return $new($StringArray, {
		"ms950"_s,
		"windows-950"_s
	});
}

$StringArray* StandardCharsets::aliases_MS874() {
	$init(StandardCharsets);
	return $new($StringArray, {
		"ms874"_s,
		"ms-874"_s,
		"windows-874"_s
	});
}

$StringArray* StandardCharsets::aliases_GBK() {
	$init(StandardCharsets);
	return $new($StringArray, {
		"windows-936"_s,
		"CP936"_s
	});
}

$StringArray* StandardCharsets::aliases_GB18030() {
	$init(StandardCharsets);
	return $new($StringArray, {"gb18030-2000"_s});
}

$StringArray* StandardCharsets::aliases_MS936() {
	$init(StandardCharsets);
	return $new($StringArray, {
		"ms936"_s,
		"ms_936"_s
	});
}

$StringArray* StandardCharsets::aliases_SJIS() {
	$init(StandardCharsets);
	return StandardCharsets::aliases_SJIS$;
}

$StringArray* StandardCharsets::aliases_MS932() {
	$init(StandardCharsets);
	return StandardCharsets::aliases_MS932$;
}

$StringArray* StandardCharsets::aliases_JIS_X_0201() {
	$init(StandardCharsets);
	return $new($StringArray, {
		"JIS0201"_s,
		"JIS_X0201"_s,
		"X0201"_s,
		"csHalfWidthKatakana"_s
	});
}

$StringArray* StandardCharsets::aliases_MS949() {
	$init(StandardCharsets);
	return $new($StringArray, {
		"ms949"_s,
		"windows949"_s,
		"windows-949"_s,
		"ms_949"_s
	});
}

$StringArray* StandardCharsets::aliases_Johab() {
	$init(StandardCharsets);
	return $new($StringArray, {
		"ksc5601-1992"_s,
		"ksc5601_1992"_s,
		"ms1361"_s,
		"johab"_s
	});
}

$StringArray* StandardCharsets::aliases_MS1255() {
	$init(StandardCharsets);
	return $new($StringArray, {"cp1255"_s});
}

$StringArray* StandardCharsets::aliases_MS1256() {
	$init(StandardCharsets);
	return $new($StringArray, {"cp1256"_s});
}

$StringArray* StandardCharsets::aliases_MS1258() {
	$init(StandardCharsets);
	return $new($StringArray, {"cp1258"_s});
}

void StandardCharsets::init$() {
	$CharsetProvider::init$();
}

$String* StandardCharsets::canonicalize($String* csn) {
	$useLocalCurrentObjectStackCache();
	$var($String, acn, $cast($String, $nc($(aliasMap()))->get(csn)));
	return (acn != nullptr) ? acn : csn;
}

$Map* StandardCharsets::aliasMap() {
	$var($Map, map, this->aliasMap$);
	if (map == nullptr) {
		$set(this, aliasMap$, ($assign(map, $new($StandardCharsets$Aliases))));
	}
	return map;
}

$Map* StandardCharsets::classMap() {
	$var($Map, map, this->classMap$);
	if (map == nullptr) {
		$set(this, classMap$, ($assign(map, $new($StandardCharsets$Classes))));
	}
	return map;
}

$Map* StandardCharsets::cache() {
	$var($Map, map, this->cache$);
	if (map == nullptr) {
		$assign(map, $new($StandardCharsets$Cache));
		$init($UTF_8);
		map->put("utf-8"_s, $UTF_8::INSTANCE);
		$init($ISO_8859_1);
		map->put("iso-8859-1"_s, $ISO_8859_1::INSTANCE);
		$init($US_ASCII);
		map->put("us-ascii"_s, $US_ASCII::INSTANCE);
		$init($StandardCharsets);
		map->put("utf-16"_s, $StandardCharsets::UTF_16);
		map->put("utf-16be"_s, $StandardCharsets::UTF_16BE);
		map->put("utf-16le"_s, $StandardCharsets::UTF_16LE);
		$set(this, cache$, map);
	}
	return map;
}

$String* StandardCharsets::toLower($String* s) {
	$init(StandardCharsets);
	int32_t n = $nc(s)->length();
	bool allLower = true;
	for (int32_t i = 0; i < n; ++i) {
		int32_t c = s->charAt(i);
		if (((c - u'A') | (u'Z' - c)) >= 0) {
			allLower = false;
			break;
		}
	}
	if (allLower) {
		return s;
	}
	$var($StringBuilder, sb, $new($StringBuilder, n));
	for (int32_t i = 0; i < n; ++i) {
		int32_t c = s->charAt(i);
		if (((c - u'A') | (u'Z' - c)) >= 0) {
			sb->append((char16_t)(c + 32));
		} else {
			sb->append((char16_t)c);
		}
	}
	return sb->toString();
}

$Charset* StandardCharsets::lookup($String* charsetName) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($String, csn, nullptr);
	if ($nc(charsetName)->equals("UTF-8"_s)) {
		$init($UTF_8);
		return $UTF_8::INSTANCE;
	} else if (charsetName->equals("US-ASCII"_s)) {
		$init($US_ASCII);
		return $US_ASCII::INSTANCE;
	} else if (charsetName->equals("ISO-8859-1"_s)) {
		$init($ISO_8859_1);
		return $ISO_8859_1::INSTANCE;
	} else {
		$assign(csn, canonicalize($(toLower(charsetName))));
	}
	$var($Charset, cs, $cast($Charset, $nc($(cache()))->get(csn)));
	if (cs != nullptr) {
		return cs;
	}
	$var($String, cln, $cast($String, $nc($(classMap()))->get(csn)));
	if (cln == nullptr) {
		return nullptr;
	}
	try {
		$var($Object, o, $Class::forName($$str({StandardCharsets::packagePrefix, cln}), true, $($of(this)->getClass()->getClassLoader()))->newInstance());
		return cache(csn, $cast($Charset, o));
	} catch ($ClassNotFoundException& x) {
		return nullptr;
	} catch ($IllegalAccessException& x) {
		return nullptr;
	} catch ($InstantiationException& x) {
		return nullptr;
	}
	$shouldNotReachHere();
}

$Charset* StandardCharsets::cache($String* csn, $Charset* cs) {
	$nc($(cache()))->put(csn, cs);
	return cs;
}

$Charset* StandardCharsets::charsetForName($String* charsetName) {
	$synchronized(this) {
		return lookup(charsetName);
	}
}

$Iterator* StandardCharsets::charsets() {
	$useLocalCurrentObjectStackCache();
	$var($Set, charsetNames, nullptr);
	$synchronized(this) {
		$assign(charsetNames, $nc($(classMap()))->keySet());
		aliasMap();
		cache();
	}
	return $new($StandardCharsets$1, this, charsetNames);
}

void clinit$StandardCharsets($Class* class$) {
	$assignStatic(StandardCharsets::packagePrefix, "sun.nio.cs."_s);
	$assignStatic(StandardCharsets::aliases_SJIS$, $new($StringArray, {
		"sjis"_s,
		"shift_jis"_s,
		"shift-jis"_s,
		"ms_kanji"_s,
		"x-sjis"_s,
		"csShiftJIS"_s
	}));
	$assignStatic(StandardCharsets::aliases_MS932$, $new($StringArray, {
		"MS932"_s,
		"windows-932"_s,
		"csWindows31J"_s
	}));
}

StandardCharsets::StandardCharsets() {
}

$Class* StandardCharsets::load$($String* name, bool initialize) {
	$loadClass(StandardCharsets, name, initialize, &_StandardCharsets_ClassInfo_, clinit$StandardCharsets, allocate$StandardCharsets);
	return class$;
}

$Class* StandardCharsets::class$ = nullptr;

		} // cs
	} // nio
} // sun