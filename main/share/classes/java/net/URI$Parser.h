#ifndef _java_net_URI$Parser_h_
#define _java_net_URI$Parser_h_
//$ class java.net.URI$Parser
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace net {
		class URI;
	}
}

namespace java {
	namespace net {

class URI$Parser : public ::java::lang::Object {
	$class(URI$Parser, $PRELOAD | $NO_CLASS_INIT, ::java::lang::Object)
public:
	URI$Parser();
	void init$(::java::net::URI* this$0, $String* s);
	bool at(int32_t start, int32_t end, char16_t c);
	bool at(int32_t start, int32_t end, $String* s);
	void checkChar(int32_t p, int64_t lowMask, int64_t highMask, $String* what);
	void checkChars(int32_t start, int32_t end, int64_t lowMask, int64_t highMask, $String* what);
	void fail($String* reason);
	void fail($String* reason, int32_t p);
	void failExpecting($String* expected, int32_t p);
	virtual void parse(bool rsa);
	int32_t parseAuthority(int32_t start, int32_t n);
	int32_t parseHierarchical(int32_t start, int32_t n);
	int32_t parseHostname(int32_t start, int32_t n);
	int32_t parseIPv4Address(int32_t start, int32_t n);
	int32_t parseIPv6Reference(int32_t start, int32_t n);
	int32_t parseServer(int32_t start, int32_t n);
	int32_t scan(int32_t start, int32_t end, char16_t c);
	int32_t scan(int32_t start, int32_t end, $String* err, $String* stop);
	int32_t scan(int32_t start, int32_t end, $String* stop);
	int32_t scan(int32_t start, int32_t n, int64_t lowMask, int64_t highMask);
	int32_t scanByte(int32_t start, int32_t n);
	int32_t scanEscape(int32_t start, int32_t n, char16_t first);
	int32_t scanHexPost(int32_t start, int32_t n);
	int32_t scanHexSeq(int32_t start, int32_t n);
	int32_t scanIPv4Address(int32_t start, int32_t n, bool strict);
	int32_t takeIPv4Address(int32_t start, int32_t n, $String* expected);
	::java::net::URI* this$0 = nullptr;
	$String* input = nullptr;
	bool requireServerAuthority = false;
	int32_t ipv6byteCount = 0;
};

	} // net
} // java

#endif // _java_net_URI$Parser_h_