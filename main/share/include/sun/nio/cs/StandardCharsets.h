#ifndef _sun_nio_cs_StandardCharsets_h_
#define _sun_nio_cs_StandardCharsets_h_
//$ class sun.nio.cs.StandardCharsets
//$ extends java.nio.charset.spi.CharsetProvider

#include <java/lang/Array.h>
#include <java/nio/charset/spi/CharsetProvider.h>

namespace java {
	namespace nio {
		namespace charset {
			class Charset;
		}
	}
}
namespace java {
	namespace util {
		class Iterator;
		class Map;
	}
}

namespace sun {
	namespace nio {
		namespace cs {

class $import StandardCharsets : public ::java::nio::charset::spi::CharsetProvider {
	$class(StandardCharsets, $PRELOAD, ::java::nio::charset::spi::CharsetProvider)
public:
	StandardCharsets();
	void init$();
	::java::util::Map* aliasMap();
	static $StringArray* aliases_CESU_8();
	static $StringArray* aliases_GB18030();
	static $StringArray* aliases_GBK();
	static $StringArray* aliases_IBM437();
	static $StringArray* aliases_IBM737();
	static $StringArray* aliases_IBM775();
	static $StringArray* aliases_IBM850();
	static $StringArray* aliases_IBM852();
	static $StringArray* aliases_IBM855();
	static $StringArray* aliases_IBM857();
	static $StringArray* aliases_IBM858();
	static $StringArray* aliases_IBM862();
	static $StringArray* aliases_IBM866();
	static $StringArray* aliases_IBM874();
	static $StringArray* aliases_ISO_8859_1();
	static $StringArray* aliases_ISO_8859_13();
	static $StringArray* aliases_ISO_8859_15();
	static $StringArray* aliases_ISO_8859_16();
	static $StringArray* aliases_ISO_8859_2();
	static $StringArray* aliases_ISO_8859_4();
	static $StringArray* aliases_ISO_8859_5();
	static $StringArray* aliases_ISO_8859_7();
	static $StringArray* aliases_ISO_8859_9();
	static $StringArray* aliases_JIS_X_0201();
	static $StringArray* aliases_Johab();
	static $StringArray* aliases_KOI8_R();
	static $StringArray* aliases_KOI8_U();
	static $StringArray* aliases_MS1250();
	static $StringArray* aliases_MS1251();
	static $StringArray* aliases_MS1252();
	static $StringArray* aliases_MS1253();
	static $StringArray* aliases_MS1254();
	static $StringArray* aliases_MS1255();
	static $StringArray* aliases_MS1256();
	static $StringArray* aliases_MS1257();
	static $StringArray* aliases_MS1258();
	static $StringArray* aliases_MS874();
	static $StringArray* aliases_MS932();
	static $StringArray* aliases_MS936();
	static $StringArray* aliases_MS949();
	static $StringArray* aliases_MS950();
	static $StringArray* aliases_MS950_HKSCS();
	static $StringArray* aliases_MS950_HKSCS_XP();
	static $StringArray* aliases_SJIS();
	static $StringArray* aliases_US_ASCII();
	static $StringArray* aliases_UTF_16();
	static $StringArray* aliases_UTF_16BE();
	static $StringArray* aliases_UTF_16LE();
	static $StringArray* aliases_UTF_16LE_BOM();
	static $StringArray* aliases_UTF_32();
	static $StringArray* aliases_UTF_32BE();
	static $StringArray* aliases_UTF_32BE_BOM();
	static $StringArray* aliases_UTF_32LE();
	static $StringArray* aliases_UTF_32LE_BOM();
	static $StringArray* aliases_UTF_8();
	::java::util::Map* cache();
	::java::nio::charset::Charset* cache($String* csn, ::java::nio::charset::Charset* cs);
	$String* canonicalize($String* csn);
	virtual ::java::nio::charset::Charset* charsetForName($String* charsetName) override;
	virtual ::java::util::Iterator* charsets() override;
	::java::util::Map* classMap();
	::java::nio::charset::Charset* lookup($String* charsetName);
	static $String* toLower($String* s);
	static $StringArray* aliases_SJIS$;
	static $StringArray* aliases_MS932$;
	::java::util::Map* classMap$ = nullptr;
	::java::util::Map* aliasMap$ = nullptr;
	::java::util::Map* cache$ = nullptr;
	static $String* packagePrefix;
};

		} // cs
	} // nio
} // sun

#endif // _sun_nio_cs_StandardCharsets_h_