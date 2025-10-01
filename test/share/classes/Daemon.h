#ifndef _Daemon_h_
#define _Daemon_h_
//$ class Daemon
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export Daemon : public ::java::lang::Object {
	$class(Daemon, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Daemon();
	void init$();
	static void main($StringArray* args);
};

#endif // _Daemon_h_