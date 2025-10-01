#ifndef _java_net_URI_h_
#define _java_net_URI_h_
//$ class java.net.URI
//$ extends java.lang.Comparable
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Comparable.h>

#pragma push_macro("H_PATH")
#undef H_PATH
#pragma push_macro("H_SERVER_PERCENT")
#undef H_SERVER_PERCENT
#pragma push_macro("H_SERVER")
#undef H_SERVER
#pragma push_macro("H_SCHEME")
#undef H_SCHEME
#pragma push_macro("L_SCHEME")
#undef L_SCHEME
#pragma push_macro("L_SERVER")
#undef L_SERVER
#pragma push_macro("H_USERINFO")
#undef H_USERINFO
#pragma push_macro("L_DIGIT")
#undef L_DIGIT
#pragma push_macro("H_UNRESERVED")
#undef H_UNRESERVED
#pragma push_macro("H_PCHAR")
#undef H_PCHAR
#pragma push_macro("L_USERINFO")
#undef L_USERINFO
#pragma push_macro("L_RESERVED")
#undef L_RESERVED
#pragma push_macro("L_UNRESERVED")
#undef L_UNRESERVED
#pragma push_macro("L_PCHAR")
#undef L_PCHAR
#pragma push_macro("H_REG_NAME")
#undef H_REG_NAME
#pragma push_macro("H_DOT")
#undef H_DOT
#pragma push_macro("H_ALPHA")
#undef H_ALPHA
#pragma push_macro("H_ALPHANUM")
#undef H_ALPHANUM
#pragma push_macro("L_HEX")
#undef L_HEX
#pragma push_macro("L_SCOPE_ID")
#undef L_SCOPE_ID
#pragma push_macro("L_LOWALPHA")
#undef L_LOWALPHA
#pragma push_macro("L_URIC")
#undef L_URIC
#pragma push_macro("L_UPALPHA")
#undef L_UPALPHA
#pragma push_macro("H_DASH")
#undef H_DASH
#pragma push_macro("H_MARK")
#undef H_MARK
#pragma push_macro("H_ESCAPED")
#undef H_ESCAPED
#pragma push_macro("L_REG_NAME")
#undef L_REG_NAME
#pragma push_macro("L_ALPHA")
#undef L_ALPHA
#pragma push_macro("H_HEX")
#undef H_HEX
#pragma push_macro("L_PATH")
#undef L_PATH
#pragma push_macro("L_ALPHANUM")
#undef L_ALPHANUM
#pragma push_macro("H_DIGIT")
#undef H_DIGIT
#pragma push_macro("L_DOT")
#undef L_DOT
#pragma push_macro("L_MARK")
#undef L_MARK
#pragma push_macro("H_RESERVED")
#undef H_RESERVED
#pragma push_macro("L_ESCAPED")
#undef L_ESCAPED
#pragma push_macro("L_DASH")
#undef L_DASH
#pragma push_macro("H_URIC")
#undef H_URIC
#pragma push_macro("L_SERVER_PERCENT")
#undef L_SERVER_PERCENT
#pragma push_macro("H_UPALPHA")
#undef H_UPALPHA
#pragma push_macro("H_SCOPE_ID")
#undef H_SCOPE_ID
#pragma push_macro("H_LOWALPHA")
#undef H_LOWALPHA

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}
namespace java {
	namespace lang {
		class StringBuilder;
	}
}
namespace java {
	namespace net {
		class URL;
	}
}
namespace java {
	namespace nio {
		namespace charset {
			class CharsetEncoder;
		}
	}
}

namespace java {
	namespace net {

class $export URI : public ::java::lang::Comparable, public ::java::io::Serializable {
	$class(URI, $PRELOAD, ::java::lang::Comparable, ::java::io::Serializable)
public:
	URI();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$();
	void init$($String* str);
	void init$($String* scheme, $String* userInfo, $String* host, int32_t port, $String* path, $String* query, $String* fragment);
	void init$($String* scheme, $String* authority, $String* path, $String* query, $String* fragment);
	void init$($String* scheme, $String* host, $String* path, $String* fragment);
	void init$($String* scheme, $String* ssp, $String* fragment);
	void init$($String* scheme, $String* path);
	void appendAuthority(::java::lang::StringBuilder* sb, $String* authority, $String* userInfo, $String* host, int32_t port);
	static void appendEncoded(::java::nio::charset::CharsetEncoder* encoder, ::java::lang::StringBuilder* sb, char16_t c);
	static void appendEscape(::java::lang::StringBuilder* sb, int8_t b);
	void appendFragment(::java::lang::StringBuilder* sb, $String* fragment);
	void appendSchemeSpecificPart(::java::lang::StringBuilder* sb, $String* opaquePart, $String* authority, $String* userInfo, $String* host, int32_t port, $String* path, $String* query);
	static void checkPath($String* s, $String* scheme, $String* path);
	static int32_t compare($String* s, $String* t);
	static int32_t compareIgnoringCase($String* s, $String* t);
	int32_t compareTo(::java::net::URI* that);
	virtual int32_t compareTo(Object$* that) override;
	static ::java::net::URI* create($String* str);
	static int32_t decode(char16_t c);
	static int8_t decode(char16_t c1, char16_t c2);
	static $String* decode($String* s);
	static $String* decode($String* s, bool ignorePercentInBrackets);
	$String* defineString();
	static $String* encode($String* s);
	static bool equal($String* s, $String* t);
	static bool equalIgnoringCase($String* s, $String* t);
	virtual bool equals(Object$* ob) override;
	$String* getAuthority();
	$String* getFragment();
	$String* getHost();
	$String* getPath();
	int32_t getPort();
	$String* getQuery();
	$String* getRawAuthority();
	$String* getRawFragment();
	$String* getRawPath();
	$String* getRawQuery();
	$String* getRawSchemeSpecificPart();
	$String* getRawUserInfo();
	$String* getScheme();
	$String* getSchemeSpecificPart();
	$String* getUserInfo();
	static int32_t hash(int32_t hash, $String* s);
	virtual int32_t hashCode() override;
	static int32_t hashIgnoringCase(int32_t hash, $String* s);
	bool isAbsolute();
	bool isOpaque();
	static int32_t join($chars* path, $ints* segs);
	static bool match(char16_t c, int64_t lowMask, int64_t highMask);
	static void maybeAddLeadingDot($chars* path, $ints* segs);
	static int32_t needsNormalization($String* path);
	::java::net::URI* normalize();
	static ::java::net::URI* normalize(::java::net::URI* u);
	static $String* normalize($String* ps);
	static int32_t normalizedHash(int32_t hash, $String* s);
	::java::net::URI* parseServerAuthority();
	static int32_t percentNormalizedComparison($String* s, $String* t, bool testForEquality);
	static $String* quote($String* s, int64_t lowMask, int64_t highMask);
	void readObject(::java::io::ObjectInputStream* is);
	::java::net::URI* relativize(::java::net::URI* uri);
	static ::java::net::URI* relativize(::java::net::URI* base, ::java::net::URI* child);
	static void removeDots($chars* path, $ints* segs);
	::java::net::URI* resolve(::java::net::URI* uri);
	::java::net::URI* resolve($String* str);
	static ::java::net::URI* resolve(::java::net::URI* base, ::java::net::URI* child);
	static $String* resolvePath($String* base, $String* child, bool absolute);
	static void split($chars* path, $ints* segs);
	$String* toASCIIString();
	static int32_t toLower(char16_t c);
	virtual $String* toString() override;
	$String* toString($String* scheme, $String* opaquePart, $String* authority, $String* userInfo, $String* host, int32_t port, $String* path, $String* query, $String* fragment);
	::java::net::URL* toURL();
	static int32_t toUpper(char16_t c);
	static bool validSchemeAndPath($String* scheme, $String* path);
	void writeObject(::java::io::ObjectOutputStream* os);
	static bool $assertionsDisabled;
	static const int64_t serialVersionUID = (int64_t)0xAC01782E439E49AB;
	$String* scheme = nullptr;
	$String* fragment = nullptr;
	$String* authority = nullptr;
	$String* userInfo = nullptr;
	$String* host = nullptr;
	int32_t port = 0;
	$String* path = nullptr;
	$String* query = nullptr;
	$String* schemeSpecificPart = nullptr;
	int32_t hash$ = 0;
	$String* decodedUserInfo = nullptr;
	$String* decodedAuthority = nullptr;
	$String* decodedPath = nullptr;
	$String* decodedQuery = nullptr;
	$String* decodedFragment = nullptr;
	$String* decodedSchemeSpecificPart = nullptr;
	$volatile($String*) string = nullptr;
	static const int64_t L_DIGIT = (int64_t)0x03FF000000000000;
	static const int64_t H_DIGIT = (int64_t)0;
	static const int64_t L_UPALPHA = (int64_t)0;
	static const int64_t H_UPALPHA = (int64_t)134217726;
	static const int64_t L_LOWALPHA = (int64_t)0;
	static const int64_t H_LOWALPHA = (int64_t)0x07FFFFFE00000000;
	static const int64_t L_ALPHA = 0; // L_LOWALPHA | L_UPALPHA
	static const int64_t H_ALPHA = 0x07FFFFFE07FFFFFE; // H_LOWALPHA | H_UPALPHA
	static const int64_t L_ALPHANUM = 0x03FF000000000000; // L_DIGIT | L_ALPHA
	static const int64_t H_ALPHANUM = 0x07FFFFFE07FFFFFE; // H_DIGIT | H_ALPHA
	static const int64_t L_HEX = L_DIGIT;
	static const int64_t H_HEX = (int64_t)0x0000007E0000007E;
	static const int64_t L_MARK = (int64_t)0x0000678200000000;
	static const int64_t H_MARK = (int64_t)0x4000000080000000;
	static const int64_t L_UNRESERVED = 0x03FF678200000000; // L_ALPHANUM | L_MARK
	static const int64_t H_UNRESERVED = 0x47FFFFFE87FFFFFE; // H_ALPHANUM | H_MARK
	static const int64_t L_RESERVED = (int64_t)0xAC00985000000000;
	static const int64_t H_RESERVED = (int64_t)671088641;
	static const int64_t L_ESCAPED = (int64_t)1;
	static const int64_t H_ESCAPED = (int64_t)0;
	static const int64_t L_URIC = 0xAFFFFFD200000001; // L_RESERVED | L_UNRESERVED | L_ESCAPED
	static const int64_t H_URIC = 0x47FFFFFEAFFFFFFF; // H_RESERVED | H_UNRESERVED | H_ESCAPED
	static const int64_t L_PCHAR = 0x27FF7FD200000001; // L_UNRESERVED | L_ESCAPED | (int64_t)0x2400185000000000
	static const int64_t H_PCHAR = 0x47FFFFFE87FFFFFF; // H_UNRESERVED | H_ESCAPED | (int64_t)1
	static const int64_t L_PATH = 0x2FFFFFD200000001; // L_PCHAR | (int64_t)0x0800800000000000
	static const int64_t H_PATH = H_PCHAR;
	static const int64_t L_DASH = (int64_t)0x0000200000000000;
	static const int64_t H_DASH = (int64_t)0;
	static const int64_t L_DOT = (int64_t)0x0000400000000000;
	static const int64_t H_DOT = (int64_t)0;
	static const int64_t L_USERINFO = 0x2FFF7FD200000001; // L_UNRESERVED | L_ESCAPED | (int64_t)0x2C00185000000000
	static const int64_t H_USERINFO = 0x47FFFFFE87FFFFFE; // H_UNRESERVED | H_ESCAPED
	static const int64_t L_REG_NAME = 0x2FFF7FD200000001; // L_UNRESERVED | L_ESCAPED | (int64_t)0x2C00185000000000
	static const int64_t H_REG_NAME = 0x47FFFFFE87FFFFFF; // H_UNRESERVED | H_ESCAPED | (int64_t)1
	static const int64_t L_SERVER = 0x2FFF7FD200000001; // L_USERINFO | L_ALPHANUM | L_DASH | (int64_t)0x0400400000000000
	static const int64_t H_SERVER = 0x47FFFFFEAFFFFFFF; // H_USERINFO | H_ALPHANUM | H_DASH | (int64_t)671088641
	static const int64_t L_SERVER_PERCENT = 0x2FFF7FF200000001; // L_SERVER | (int64_t)0x0000002000000000
	static const int64_t H_SERVER_PERCENT = H_SERVER;
	static const int64_t L_SCHEME = 0x03FF680000000000; // L_ALPHA | L_DIGIT | (int64_t)0x0000680000000000
	static const int64_t H_SCHEME = 0x07FFFFFE07FFFFFE; // H_ALPHA | H_DIGIT
	static const int64_t L_SCOPE_ID = 0x03FF400000000000; // L_ALPHANUM | (int64_t)0x0000400000000000
	static const int64_t H_SCOPE_ID = 0x07FFFFFE87FFFFFE; // H_ALPHANUM | (int64_t)0x0000000080000000
	static $chars* hexDigits;
};

	} // net
} // java

#pragma pop_macro("H_PATH")
#pragma pop_macro("H_SERVER_PERCENT")
#pragma pop_macro("H_SERVER")
#pragma pop_macro("H_SCHEME")
#pragma pop_macro("L_SCHEME")
#pragma pop_macro("L_SERVER")
#pragma pop_macro("H_USERINFO")
#pragma pop_macro("L_DIGIT")
#pragma pop_macro("H_UNRESERVED")
#pragma pop_macro("H_PCHAR")
#pragma pop_macro("L_USERINFO")
#pragma pop_macro("L_RESERVED")
#pragma pop_macro("L_UNRESERVED")
#pragma pop_macro("L_PCHAR")
#pragma pop_macro("H_REG_NAME")
#pragma pop_macro("H_DOT")
#pragma pop_macro("H_ALPHA")
#pragma pop_macro("H_ALPHANUM")
#pragma pop_macro("L_HEX")
#pragma pop_macro("L_SCOPE_ID")
#pragma pop_macro("L_LOWALPHA")
#pragma pop_macro("L_URIC")
#pragma pop_macro("L_UPALPHA")
#pragma pop_macro("H_DASH")
#pragma pop_macro("H_MARK")
#pragma pop_macro("H_ESCAPED")
#pragma pop_macro("L_REG_NAME")
#pragma pop_macro("L_ALPHA")
#pragma pop_macro("H_HEX")
#pragma pop_macro("L_PATH")
#pragma pop_macro("L_ALPHANUM")
#pragma pop_macro("H_DIGIT")
#pragma pop_macro("L_DOT")
#pragma pop_macro("L_MARK")
#pragma pop_macro("H_RESERVED")
#pragma pop_macro("L_ESCAPED")
#pragma pop_macro("L_DASH")
#pragma pop_macro("H_URIC")
#pragma pop_macro("L_SERVER_PERCENT")
#pragma pop_macro("H_UPALPHA")
#pragma pop_macro("H_SCOPE_ID")
#pragma pop_macro("H_LOWALPHA")

#endif // _java_net_URI_h_