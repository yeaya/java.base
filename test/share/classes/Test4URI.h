#ifndef _Test4URI_h_
#define _Test4URI_h_
//$ class Test4URI
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("FRAGMENT")
#undef FRAGMENT
#pragma push_macro("FRAGMENT_D")
#undef FRAGMENT_D
#pragma push_macro("HOST")
#undef HOST
#pragma push_macro("IDENT_STR")
#undef IDENT_STR
#pragma push_macro("IDENT_URI1")
#undef IDENT_URI1
#pragma push_macro("IDENT_URI3")
#undef IDENT_URI3
#pragma push_macro("IDENT_URI5")
#undef IDENT_URI5
#pragma push_macro("IDENT_URI7")
#undef IDENT_URI7
#pragma push_macro("OPAQUEPART")
#undef OPAQUEPART
#pragma push_macro("PARSEFAIL")
#undef PARSEFAIL
#pragma push_macro("PATH")
#undef PATH
#pragma push_macro("PATH_D")
#undef PATH_D
#pragma push_macro("PORT")
#undef PORT
#pragma push_macro("QUERY")
#undef QUERY
#pragma push_macro("QUERY_D")
#undef QUERY_D
#pragma push_macro("REGISTRY")
#undef REGISTRY
#pragma push_macro("REGISTRY_D")
#undef REGISTRY_D
#pragma push_macro("SCHEME")
#undef SCHEME
#pragma push_macro("SSP")
#undef SSP
#pragma push_macro("SSP_D")
#undef SSP_D
#pragma push_macro("TOASCII")
#undef TOASCII
#pragma push_macro("TOSTRING")
#undef TOSTRING
#pragma push_macro("USERINFO")
#undef USERINFO
#pragma push_macro("USERINFO_D")
#undef USERINFO_D

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
		class URI;
		class URISyntaxException;
	}
}

class $export Test4URI : public ::java::lang::Object {
	$class(Test4URI, 0, ::java::lang::Object)
public:
	Test4URI();
	void init$($String* s);
	void init$($String* s, $String* u, $String* h, int32_t n, $String* p, $String* q, $String* f);
	void init$($String* s, $String* a, $String* p, $String* q, $String* f);
	void init$($String* s, $String* h, $String* p, $String* f);
	void init$($String* s, $String* ssp, $String* f);
	void init$($String* s, bool xxx);
	static void b6339649();
	static void b6933879();
	static void b8037396();
	static void bugs();
	static void chars();
	bool check1(int32_t prop);
	void check2($String* s, $String* ans, int32_t prop);
	void checkEmpty($String* s, int32_t prop);
	virtual void checkIdentities();
	virtual void checkURI3();
	virtual void checkURI5();
	virtual void checkURI7();
	static void clargs($String* base, $String* uri);
	static void cmp0(::java::net::URI* u, ::java::net::URI* v, bool same);
	static void eq(::java::net::URI* u, ::java::net::URI* v);
	static void eq($String* expected, $String* actual);
	static void eq0(::java::net::URI* u, ::java::net::URI* v);
	static void eqHashComp();
	static void eqeq(::java::net::URI* u, ::java::net::URI* v);
	virtual ::Test4URI* f($String* s);
	virtual ::Test4URI* fd($String* s);
	virtual ::Test4URI* g($String* s);
	virtual ::Test4URI* gd($String* s);
	static void gt(::java::net::URI* u, ::java::net::URI* v);
	static void gt0(::java::net::URI* u, ::java::net::URI* v);
	virtual ::Test4URI* h($String* s);
	static void header($String* s);
	static void ip();
	static void lt(::java::net::URI* u, ::java::net::URI* v);
	static void lt($String* s, $String* t);
	static void main($StringArray* args);
	static void misc();
	virtual ::Test4URI* n(int32_t n);
	static void ne(::java::net::URI* u, ::java::net::URI* v);
	static void ne0(::java::net::URI* u, ::java::net::URI* v);
	virtual ::Test4URI* norm();
	static void npes();
	virtual ::Test4URI* o($String* s);
	virtual ::Test4URI* p($String* s);
	virtual bool parsed();
	virtual ::Test4URI* pd($String* s);
	virtual ::Test4URI* psa();
	virtual ::Test4URI* q($String* s);
	virtual ::Test4URI* qd($String* s);
	void report();
	virtual bool resolved();
	static void rfc2396();
	virtual ::Test4URI* rslv(::java::net::URI* base);
	virtual ::Test4URI* rtvz(::java::net::URI* base);
	virtual ::Test4URI* s($String* s);
	static void serial(::java::net::URI* u);
	static void serial();
	static void show($String* prefix, ::java::net::URISyntaxException* x);
	static void show($String* n, $String* v);
	static void show($String* n, $String* v, $String* vd);
	static void show(::java::net::URI* u);
	virtual ::Test4URI* sp($String* s);
	virtual ::Test4URI* spd($String* s);
	void summarize();
	virtual ::Test4URI* ta($String* s);
	static ::Test4URI* test($String* s);
	static ::Test4URI* test($String* s, $String* u, $String* h, int32_t n, $String* p, $String* q, $String* f);
	static ::Test4URI* test($String* s, $String* a, $String* p, $String* q, $String* f);
	static ::Test4URI* test($String* s, $String* h, $String* p, $String* f);
	static ::Test4URI* test($String* s, $String* ssp, $String* f);
	static ::Test4URI* testCreate($String* s);
	static void tests();
	virtual ::Test4URI* ts($String* s);
	virtual ::Test4URI* u($String* s);
	virtual ::Test4URI* ud($String* s);
	static $String* uquote($String* str);
	virtual ::java::net::URI* uri();
	static void urls();
	static void usage();
	virtual ::Test4URI* x();
	virtual ::Test4URI* z();
	static ::java::io::PrintStream* out;
	static int32_t testCount;
	static const int32_t PARSEFAIL = 1; // 1 << 0
	static const int32_t SCHEME = 2; // 1 << 1
	static const int32_t SSP = 4; // 1 << 2
	static const int32_t SSP_D = 8; // 1 << 3
	static const int32_t OPAQUEPART = 16; // 1 << 4
	static const int32_t USERINFO = 32; // 1 << 5
	static const int32_t USERINFO_D = 64; // 1 << 6
	static const int32_t HOST = 128; // 1 << 7
	static const int32_t PORT = 256; // 1 << 8
	static const int32_t REGISTRY = 512; // 1 << 9
	static const int32_t REGISTRY_D = 1024; // 1 << 10
	static const int32_t PATH = 2048; // 1 << 11
	static const int32_t PATH_D = 4096; // 1 << 12
	static const int32_t QUERY = 8192; // 1 << 13
	static const int32_t QUERY_D = 16384; // 1 << 14
	static const int32_t FRAGMENT = 32768; // 1 << 15
	static const int32_t FRAGMENT_D = 65536; // 1 << 16
	static const int32_t TOASCII = 131072; // 1 << 17
	static const int32_t IDENT_STR = 262144; // 1 << 18
	static const int32_t IDENT_URI1 = 524288; // 1 << 19
	static const int32_t IDENT_URI3 = 1048576; // 1 << 20
	static const int32_t IDENT_URI5 = 2097152; // 1 << 21
	static const int32_t IDENT_URI7 = 4194304; // 1 << 22
	static const int32_t TOSTRING = 8388608; // 1 << 23
	$String* input = nullptr;
	::java::net::URI* uri$ = nullptr;
	::java::net::URI* originalURI = nullptr;
	::java::net::URI* base = nullptr;
	$String* op = nullptr;
	int32_t checked = 0;
	int32_t failed = 0;
	::java::lang::Exception* exc = nullptr;
};

#pragma pop_macro("FRAGMENT")
#pragma pop_macro("FRAGMENT_D")
#pragma pop_macro("HOST")
#pragma pop_macro("IDENT_STR")
#pragma pop_macro("IDENT_URI1")
#pragma pop_macro("IDENT_URI3")
#pragma pop_macro("IDENT_URI5")
#pragma pop_macro("IDENT_URI7")
#pragma pop_macro("OPAQUEPART")
#pragma pop_macro("PARSEFAIL")
#pragma pop_macro("PATH")
#pragma pop_macro("PATH_D")
#pragma pop_macro("PORT")
#pragma pop_macro("QUERY")
#pragma pop_macro("QUERY_D")
#pragma pop_macro("REGISTRY")
#pragma pop_macro("REGISTRY_D")
#pragma pop_macro("SCHEME")
#pragma pop_macro("SSP")
#pragma pop_macro("SSP_D")
#pragma pop_macro("TOASCII")
#pragma pop_macro("TOSTRING")
#pragma pop_macro("USERINFO")
#pragma pop_macro("USERINFO_D")

#endif // _Test4URI_h_