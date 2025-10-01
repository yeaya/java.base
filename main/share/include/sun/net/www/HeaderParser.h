#ifndef _sun_net_www_HeaderParser_h_
#define _sun_net_www_HeaderParser_h_
//$ class sun.net.www.HeaderParser
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class Iterator;
	}
}

namespace sun {
	namespace net {
		namespace www {

class $import HeaderParser : public ::java::lang::Object {
	$class(HeaderParser, $NO_CLASS_INIT, ::java::lang::Object)
public:
	HeaderParser();
	void init$($String* raw);
	void init$();
	virtual int32_t findInt($String* k, int32_t Default);
	virtual $String* findKey(int32_t i);
	virtual $String* findValue(int32_t i);
	virtual $String* findValue($String* key);
	virtual $String* findValue($String* k, $String* Default);
	virtual ::java::util::Iterator* keys();
	void parse();
	virtual ::sun::net::www::HeaderParser* subsequence(int32_t start, int32_t end);
	virtual $String* toString() override;
	virtual ::java::util::Iterator* values();
	$String* raw = nullptr;
	$Array<::java::lang::String, 2>* tab = nullptr;
	int32_t nkeys = 0;
	int32_t asize = 0;
};

		} // www
	} // net
} // sun

#endif // _sun_net_www_HeaderParser_h_