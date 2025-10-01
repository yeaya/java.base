#ifndef _java_nio_charset_Charset_h_
#define _java_nio_charset_Charset_h_
//$ class java.nio.charset.Charset
//$ extends java.lang.Comparable

#include <java/lang/Array.h>
#include <java/lang/Comparable.h>

namespace java {
	namespace lang {
		class ThreadLocal;
	}
}
namespace java {
	namespace nio {
		class ByteBuffer;
		class CharBuffer;
	}
}
namespace java {
	namespace nio {
		namespace charset {
			class CharsetDecoder;
			class CharsetEncoder;
		}
	}
}
namespace java {
	namespace nio {
		namespace charset {
			namespace spi {
				class CharsetProvider;
			}
		}
	}
}
namespace java {
	namespace util {
		class Iterator;
		class Locale;
		class Map;
		class Set;
		class SortedMap;
	}
}

namespace java {
	namespace nio {
		namespace charset {

class $export Charset : public ::java::lang::Comparable {
	$class(Charset, $PRELOAD, ::java::lang::Comparable)
public:
	Charset();
	void init$($String* canonicalName, $StringArray* aliases);
	::java::util::Set* aliases();
	static ::java::util::SortedMap* availableCharsets();
	static void cache($String* charsetName, ::java::nio::charset::Charset* cs);
	virtual bool canEncode();
	static void checkName($String* s);
	int32_t compareTo(::java::nio::charset::Charset* that);
	virtual int32_t compareTo(Object$* that) override;
	virtual bool contains(::java::nio::charset::Charset* cs) {return false;}
	::java::nio::CharBuffer* decode(::java::nio::ByteBuffer* bb);
	static ::java::nio::charset::Charset* defaultCharset();
	virtual $String* displayName();
	virtual $String* displayName(::java::util::Locale* locale);
	::java::nio::ByteBuffer* encode(::java::nio::CharBuffer* cb);
	::java::nio::ByteBuffer* encode($String* str);
	virtual bool equals(Object$* ob) override;
	static ::java::nio::charset::Charset* forName($String* charsetName);
	virtual int32_t hashCode() override;
	bool isRegistered();
	static bool isSupported($String* charsetName);
	static ::java::nio::charset::Charset* lookup($String* charsetName);
	static ::java::nio::charset::Charset* lookup2($String* charsetName);
	static ::java::nio::charset::Charset* lookupExtendedCharset($String* charsetName);
	static ::java::nio::charset::Charset* lookupViaProviders($String* charsetName);
	$String* name();
	virtual ::java::nio::charset::CharsetDecoder* newDecoder() {return nullptr;}
	virtual ::java::nio::charset::CharsetEncoder* newEncoder() {return nullptr;}
	static ::java::util::Iterator* providers();
	static void put(::java::util::Iterator* i, ::java::util::Map* m);
	virtual $String* toString() override;
	static ::java::nio::charset::spi::CharsetProvider* standardProvider;
	static $StringArray* zeroAliases;
	static $volatile($ObjectArray*) cache1;
	static $volatile($ObjectArray*) cache2;
	static ::java::lang::ThreadLocal* gate;
	static $volatile(::java::nio::charset::Charset*) defaultCharset$;
	$String* name$ = nullptr;
	$StringArray* aliases$ = nullptr;
	::java::util::Set* aliasSet = nullptr;
};

		} // charset
	} // nio
} // java

#endif // _java_nio_charset_Charset_h_