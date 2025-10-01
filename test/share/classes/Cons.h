#ifndef _Cons_h_
#define _Cons_h_
//$ class Cons
//$ extends java.lang.Object

#include <java/lang/Array.h>

class Cons$F;

class $export Cons : public ::java::lang::Object {
	$class(Cons, 0, ::java::lang::Object)
public:
	Cons();
	void init$();
	static void ck($String* ans, $String* exp, $String* got);
	static void ck1($String* arg, $String* parent, $String* name, $String* path);
	static void ck2($String* arg1, $String* arg2, $String* parent, $String* name, $String* path);
	static void ck2f($String* arg1, $String* arg2, $String* parent, $String* name, $String* path);
	static void ckpnp(::Cons$F* f, $String* parent, $String* name, $String* path);
	static $String* cons($String* arg);
	static $String* cons($String* arg1, $String* arg2);
	static $String* cons(::Cons$F* arg1, $String* arg2);
	static $String* cvt($String* s);
	static void err($String* ans, $String* exp, $String* got);
	static void main($StringArray* args);
	static $String* nos($String* s);
	static void ok($String* ans, $String* exp);
	static $String* op($String* exp, $String* opname);
	static $StringArray* slashPerms($String* s);
	static void testBoth();
	static void testUnix();
	static void testWin32();
	static bool debug;
	static bool old;
	static bool win32;
};

#endif // _Cons_h_