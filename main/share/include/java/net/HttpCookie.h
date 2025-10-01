#ifndef _java_net_HttpCookie_h_
#define _java_net_HttpCookie_h_
//$ class java.net.HttpCookie
//$ extends java.lang.Cloneable

#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>

#pragma push_macro("SET_COOKIE2")
#undef SET_COOKIE2
#pragma push_macro("COOKIE_DATE_FORMATS")
#undef COOKIE_DATE_FORMATS
#pragma push_macro("SET_COOKIE")
#undef SET_COOKIE
#pragma push_macro("MAX_AGE_UNSPECIFIED")
#undef MAX_AGE_UNSPECIFIED
#pragma push_macro("GMT")
#undef GMT

namespace java {
	namespace util {
		class List;
		class Map;
		class TimeZone;
	}
}

namespace java {
	namespace net {

class $import HttpCookie : public ::java::lang::Cloneable {
	$class(HttpCookie, 0, ::java::lang::Cloneable)
public:
	HttpCookie();
	void init$($String* name, $String* value);
	void init$($String* name, $String* value, $String* header);
	void init$($String* name, $String* value, $String* header, int64_t creationTime);
	static void assignAttribute(::java::net::HttpCookie* cookie, $String* attrName, $String* attrValue);
	virtual $Object* clone() override;
	static bool domainMatches($String* domain, $String* host);
	virtual bool equals(Object$* obj) override;
	static bool equalsIgnoreCase($String* s, $String* t);
	int64_t expiryDate2DeltaSeconds($String* dateString);
	$String* getComment();
	$String* getCommentURL();
	int64_t getCreationTime();
	bool getDiscard();
	$String* getDomain();
	int64_t getMaxAge();
	$String* getName();
	$String* getPath();
	$String* getPortlist();
	bool getSecure();
	$String* getValue();
	int32_t getVersion();
	static int32_t guessCookieVersion($String* header);
	bool hasExpired();
	virtual int32_t hashCode() override;
	$String* header();
	bool isHttpOnly();
	static bool isToken($String* value);
	static ::java::util::List* parse($String* header);
	static ::java::util::List* parse($String* header, bool retainHeader);
	static ::java::net::HttpCookie* parseInternal($String* header, bool retainHeader);
	void setComment($String* purpose);
	void setCommentURL($String* purpose);
	void setDiscard(bool discard);
	void setDomain($String* pattern);
	void setHttpOnly(bool httpOnly);
	void setMaxAge(int64_t expiry);
	void setPath($String* uri);
	void setPortlist($String* ports);
	void setSecure(bool flag);
	void setValue($String* newValue);
	void setVersion(int32_t v);
	static ::java::util::List* splitMultiCookies($String* header);
	static bool startsWithIgnoreCase($String* s, $String* start);
	static $String* stripOffSurroundingQuote($String* str);
	$String* toNetscapeHeaderString();
	$String* toRFC2965HeaderString();
	virtual $String* toString() override;
	$String* name = nullptr;
	$String* value = nullptr;
	$String* comment = nullptr;
	$String* commentURL = nullptr;
	bool toDiscard = false;
	$String* domain = nullptr;
	int64_t maxAge = 0;
	$String* path = nullptr;
	$String* portlist = nullptr;
	bool secure = false;
	bool httpOnly = false;
	int32_t version = 0;
	$String* header$ = nullptr;
	int64_t whenCreated = 0;
	static const int64_t MAX_AGE_UNSPECIFIED = (-1);
	static $StringArray* COOKIE_DATE_FORMATS;
	static $String* SET_COOKIE;
	static $String* SET_COOKIE2;
	static $String* tspecials;
	static ::java::util::Map* assignors;
	static ::java::util::TimeZone* GMT;
};

	} // net
} // java

#pragma pop_macro("SET_COOKIE2")
#pragma pop_macro("COOKIE_DATE_FORMATS")
#pragma pop_macro("SET_COOKIE")
#pragma pop_macro("MAX_AGE_UNSPECIFIED")
#pragma pop_macro("GMT")

#endif // _java_net_HttpCookie_h_