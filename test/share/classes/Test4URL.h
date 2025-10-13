#ifndef _Test4URL_h_
#define _Test4URL_h_
//$ class Test4URL
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("HOST")
#undef HOST
#pragma push_macro("PARSEFAIL")
#undef PARSEFAIL
#pragma push_macro("PATH")
#undef PATH
#pragma push_macro("PORT")
#undef PORT
#pragma push_macro("PROTOCOL")
#undef PROTOCOL
#pragma push_macro("QUERY")
#undef QUERY
#pragma push_macro("REF")
#undef REF
#pragma push_macro("USERINFO")
#undef USERINFO

namespace java {
	namespace io {
		class PrintStream;
	}
}
namespace java {
	namespace lang {
		class Exception;
	}
}
namespace java {
	namespace net {
		class MalformedURLException;
		class URL;
	}
}

class $export Test4URL : public ::java::lang::Object {
	$class(Test4URL, 0, ::java::lang::Object)
public:
	Test4URL();
	void init$($String* s);
	void init$($String* s, bool xxx);
	void init$(::java::net::URL* base, $String* spec);
	void init$($String* protocol, $String* host, int32_t port, $String* file);
	bool check1(int32_t prop);
	void check2($String* s, $String* ans, int32_t prop);
	void checkEmpty($String* s, int32_t prop);
	virtual ::Test4URL* f($String* s);
	virtual ::Test4URL* h($String* s);
	static bool hasFtp();
	static void header($String* s);
	static void ip();
	static void main($StringArray* args);
	virtual ::Test4URL* n(int32_t n);
	virtual ::Test4URL* p($String* s);
	virtual bool parsed();
	virtual ::Test4URL* q($String* s);
	void report();
	virtual bool resolved();
	static void rfc2396();
	virtual ::Test4URL* s($String* s);
	static void serial();
	static void show($String* prefix, ::java::net::MalformedURLException* x);
	static void show($String* n, $String* v);
	static void show(::java::net::URL* u);
	void summarize();
	static ::Test4URL* test($String* s);
	static ::Test4URL* test(::java::net::URL* base, $String* spec);
	static ::Test4URL* test($String* protocol, $String* host, int32_t port, $String* file);
	static void tests();
	virtual ::Test4URL* u($String* s);
	virtual ::java::net::URL* url();
	static void usage();
	virtual ::Test4URL* x();
	virtual ::Test4URL* z();
	static ::java::io::PrintStream* out;
	static int32_t testCount;
	static const int32_t PARSEFAIL = 1; // 1 << 0
	static const int32_t PROTOCOL = 2; // 1 << 1
	static const int32_t USERINFO = 4; // 1 << 2
	static const int32_t HOST = 8; // 1 << 3
	static const int32_t PORT = 16; // 1 << 4
	static const int32_t PATH = 32; // 1 << 5
	static const int32_t QUERY = 64; // 1 << 6
	static const int32_t REF = 128; // 1 << 7
	$String* input = nullptr;
	::java::net::URL* url$ = nullptr;
	::java::net::URL* originalURL = nullptr;
	::java::net::URL* base = nullptr;
	$String* op = nullptr;
	int32_t checked = 0;
	int32_t failed = 0;
	::java::lang::Exception* exc = nullptr;
};

#pragma pop_macro("HOST")
#pragma pop_macro("PARSEFAIL")
#pragma pop_macro("PATH")
#pragma pop_macro("PORT")
#pragma pop_macro("PROTOCOL")
#pragma pop_macro("QUERY")
#pragma pop_macro("REF")
#pragma pop_macro("USERINFO")

#endif // _Test4URL_h_